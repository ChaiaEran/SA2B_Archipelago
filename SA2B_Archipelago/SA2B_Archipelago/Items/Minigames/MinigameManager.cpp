#include "../../pch.h"
#include "MinigameManager.h"
#include "../../Archipelago/ArchipelagoManager.h"
#include "../ItemManager.h"

void DeleteUpgradeIcon_MG(ObjectMaster* obj)
{
	MinigameManager::GetInstance().EndMinigame();
	MinigameManager::GetInstance().iconData.ReleaseIcons();
	MinigameManager::GetInstance().IconObjPtr = nullptr;
}

void DrawUpgradeIcon_MG(ObjectMaster* obj)
{
	if (GameState == GameStates_Ingame)
	{
		MinigameManager::GetInstance().UpdateCurrentMinigame();
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
}

void MinigameManager::UpdateCurrentMinigame()
{
	if (this->currentMinigame)
	{
		if (this->state == MinigameState::MGS_None)
		{
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
		}
		if (this->currentMinigame->currentState == MinigameState::MGS_Victory || this->currentMinigame->currentState == MinigameState::MGS_Loss)
		{
			this->state = this->currentMinigame->currentState;
			if (state == MinigameState::MGS_Victory)
			{
				this->HandleVictory();
			}
			else
			{
				this->HandleLoss();
			}
			currentMinigame = nullptr;
		}
	}
}

void MinigameManager::EndMinigame()
{
	this->currentMinigame = nullptr;
	this->state = MinigameState::MGS_None;
}

void MinigameManager::StartMinigame(ItemValue item)
{
	if (this->state != MinigameState::MGS_None)
	{
		return;
	}

	switch (item)
	{
	case ItemValue::IV_PongTrap:
		this->currentMinigame = &this->pong;
		break;
	}
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

	ItemManager::getInstance().HandleJunk(itemToSend);

	this->state = MinigameState::MGS_None;
}

void MinigameManager::HandleLoss()
{
	ArchipelagoManager::getInstance().AP_KillPlayer();

	this->state = MinigameState::MGS_None;
}

void MinigameManager::SetDifficulty(int difficulty)
{
	this->_data.difficulty = (MinigameDifficulty)difficulty;
}
