#include "../../pch.h"
#include "MinigameManager.h"
#include "../../Archipelago/ArchipelagoManager.h"
#include "../ItemManager.h"
#include "../../Locations/LocationManager.h"

void DeleteUpgradeIcon_MG(ObjectMaster* obj)
{
	MinigameManager::GetInstance().EndMinigame();
	MinigameManager::GetInstance().iconData.ReleaseIcons();
	MinigameManager::GetInstance().textData.ReleaseIcons();
	MinigameManager::GetInstance().IconObjPtr = nullptr;
}

void DrawUpgradeIcon_MG(ObjectMaster* obj)
{
	if (GameState == GameStates_Ingame)
	{
		MinigameManager::GetInstance().Resume();
		MinigameManager::GetInstance().UpdateCurrentMinigame();
	} 
	else
	{
		MinigameManager::GetInstance().Pause();
	}
}

void DrawUpgradeIconMain_MG(ObjectMaster* obj)
{
	if (GameState != GameStates_LoadFinished && GameState != GameStates_LoadLevel)
	{
		return;
	}

	if (obj->Data1.Entity->Action == 0) {
		obj->DeleteSub = DeleteUpgradeIcon_MG;
		obj->DisplaySub_Delayed3 = DrawUpgradeIcon_MG;
		obj->Data1.Entity->Action = 1;
	}
}

void MinigameManager::OnInitFunction(const char* path, const HelperFunctions& helperFunctions)
{

}

void MinigameManager::OnFrameFunction()
{
	if (!this->IconObjPtr && GameState == GameStates_Ingame)
	{
		this->iconData.LoadIcons();
		this->_data.icons = &this->iconData;
		this->textData.LoadIcons();
		this->_data.text = &this->textData;
		this->_data.hierarchy = &this->spriteHierarchy;
		this->_data.collision = &this->collisionManager;
		this->_data.hierarchy->iconData = &this->iconData;
		this->_data.timers = &this->timers;
		this->_data.stopwatches = &this->stopwatches;
		this->IconObjPtr = LoadObject(0, "MinigameIcons", DrawUpgradeIconMain_MG, LoadObj_Data1 | LoadObj_Data2);
		this->IconObjPtr->DeleteSub = DeleteUpgradeIcon_MG;
		this->IconObjPtr->MainSub = DrawUpgradeIconMain_MG;
		this->IconObjPtr->DisplaySub_Delayed3 = DrawUpgradeIcon_MG;
		this->IconObjPtr->Data1.Entity->Action = 1;
	}
}

void MinigameManager::OnInputFunction()
{
	this->_data.input = (RawInputFlags)ControllersRaw->on;
	this->_data.inputPress = (RawInputFlags)ControllersRaw->press;
	this->_data.inputRelease = (RawInputFlags)ControllersRaw->release;

	if (this->currentMinigame && !this->isPaused)
	{
		ControllersRaw->on &= ~RawInputFlags::RIF_ANY_D_PAD;
		ControllersRaw->press &= ~RawInputFlags::RIF_ANY_D_PAD;
		ControllersRaw->release &= ~RawInputFlags::RIF_ANY_D_PAD;
	}
}

void MinigameManager::UpdateCurrentMinigame()
{
	if (this->currentMinigame)
	{
		if (this->state == MinigameState::MGS_None)
		{
			this->_data.timers->clear();
			this->_data.stopwatches->clear();
			this->currentMinigame->OnGameStart(this->_data);
			this->minigameStart = std::clock();
			this->state = MinigameState::MGS_PreGame;
		}
		if (this->state == MinigameState::MGS_PreGame)
		{
			if (((std::clock() - minigameStart) / (double)CLOCKS_PER_SEC) > this->currentMinigame->pregameTime)
			{
				this->state = MinigameState::MGS_InProgress;
			}
		}
		if (this->state == MinigameState::MGS_InProgress || this->state == MinigameState::MGS_PreGame)
		{
			this->_data.managerState = this->state;
			this->currentMinigame->OnFrame(this->_data);
			this->_data.hierarchy->OnFrame();
			this->_data.hierarchy->Render();
			if (ArchipelagoManager::getInstance().IsDebug())
			{
				this->_data.collision->DebugDrawCollision(this->_data.icons);
			}
		}
		if (this->currentMinigame->currentState == MinigameState::MGS_Victory ||
			this->currentMinigame->currentState == MinigameState::MGS_Draw ||
			this->currentMinigame->currentState == MinigameState::MGS_Loss)
		{
			this->state = this->currentMinigame->currentState;
			if (state == MinigameState::MGS_Victory)
			{
				this->HandleVictory();
			}
			else if (state == MinigameState::MGS_Loss)
			{
				this->HandleLoss();
			}
			this->EndMinigame();
		}
	}
	//Debug Test Minigame
	
	else
	{
		if (_data.inputPress & RIF_Down)
		{
			//this->currentMinigame = &this->pinball;
		}
	}
	
}

void MinigameManager::EndMinigame()
{
	if (this->currentMinigame)
	{
		this->currentMinigame->OnCleanup(this->_data);
	}
	this->_data.collision->Reset();
	this->_data.hierarchy->ClearHierarchy();
	this->_data.isLocationCheck = false;
	this->currentMinigame = nullptr;
	this->state = MinigameState::MGS_None;
	this->currentMinigameItem = ItemValue::IV_Apple;
}

void MinigameManager::StartMinigame(ItemValue item, bool locationGame)
{
	if (this->state != MinigameState::MGS_None)
	{
		return;
	}

	switch (item)
	{
	case ItemValue::IV_LiteratureTrap:
		// TODO
		this->currentMinigame = &this->literature;
		break;
	case ItemValue::IV_PongTrap:
		this->currentMinigame = &this->pong;
		break;
	case ItemValue::IV_PlatformerTrap:
		this->currentMinigame = &this->platformer;
		break;
	case ItemValue::IV_FishingTrap:
		this->currentMinigame = &this->fishing;
		break;
	case ItemValue::IV_TriviaTrap:
		this->currentMinigame = &this->trivia;
		break;
	case ItemValue::IV_PokemonTriviaTrap:
		this->currentMinigame = &this->pokemonTrivia;
		break;
	case ItemValue::IV_PokemonCountTrap:
		this->currentMinigame = &this->pokemonCount;
		break;
	case ItemValue::IV_NumberSequenceTrap:
		this->currentMinigame = &this->numberSequence;
		break;
	case ItemValue::IV_LightUpPathTrap:
		this->currentMinigame = &this->lightUpPath;
		break;
	case ItemValue::IV_PinballTrap:
		this->currentMinigame = &this->pinball;
		break;
	case ItemValue::IV_MathQuizTrap:
		this->currentMinigame = &this->mathQuiz;
		break;
	case ItemValue::IV_SnakeTrap:
		this->currentMinigame = &this->snake;
		break;
	case ItemValue::IV_Maria:
		this->currentMinigame = &this->finalBoss;
		break;
	}

	if (this->_baseDifficulty == MinigameDifficulty::MGD_Chaos)
	{
		this->_data.difficulty = (MinigameDifficulty)RandomInt(0, 3);
	}

	this->_data.isLocationCheck = locationGame;
	this->currentMinigameItem = item;
}

void MinigameManager::HandleVictory()
{
	ItemValue itemToSend = ItemValue::IV_FiveRings;

	if (this->_data.difficulty == 1)
	{
		itemToSend = ItemValue::IV_TenRings;
	}
	else if (this->_data.difficulty == 2)
	{
		itemToSend = ItemValue::IV_TwentyRings;
	}

	if (this->currentMinigameItem == ItemValue::IV_Maria)
	{
		// TODO: RAS: Figure out how to keep the minigame rendering until the stage transitions to the ending

		AwardWin(0);

		return;
	}

	if (this->_data.isLocationCheck)
	{
		// TODO: Generalize?

		LocationManager::getInstance().SendBigLocationCheck();
	}
	else
	{
		ItemManager::getInstance().HandleJunk(itemToSend);
		ItemManager::getInstance().HandleMinigameCompletion(this->currentMinigameItem);
	}
}

void MinigameManager::HandleLoss()
{
	if (this->_data.isLocationCheck)
	{
		// Don't kill from failing location check
	}
	else
	{
		// TODO: Make this dynamic when we have multiple Minigames
		ArchipelagoManager::getInstance().SetDeathCause(DeathCause::DC_Pong);
		ArchipelagoManager::getInstance().AP_KillPlayer();
	}
}

void MinigameManager::SetDifficulty(int difficulty)
{
	this->_baseDifficulty = (MinigameDifficulty)difficulty;
	this->_data.difficulty = this->_baseDifficulty;
}

void MinigameManager::Pause()
{
	if (!this->isPaused)
	{
		this->isPaused = true;
		for (int i = 0; i < this->timers.size(); i++)
		{
			timers[i]->Pause();
		}
		for (int i = 0; i < this->stopwatches.size(); i++)
		{
			stopwatches[i]->Pause();
		}
	}

	if (this->currentMinigameItem == ItemValue::IV_Maria)
	{
		this->_data.hierarchy->Render();
	}
}

void MinigameManager::Resume()
{
	if (this->isPaused)
	{
		this->isPaused = false;
		for (int i = 0; i < this->timers.size(); i++)
		{
			timers[i]->Resume();
		}
		for (int i = 0; i < this->stopwatches.size(); i++)
		{
			stopwatches[i]->Resume();
		}
	}
}
