#include "../pch.h"
#include "ChaoGardenManager.h"
#include "../Utilities/MessageQueue.h"


DataPointer(char, ChaoEggsRandomized, 0x19F6460);
DataPointer(char, ChaoNamesUsed, 0x19F6461);


void ChaoGardenManager::OnInitFunction(const char* path, const HelperFunctions& helperFunctions)
{
	this->_helperFunctions = &helperFunctions;
	this->_archipelagoManager = &ArchipelagoManager::getInstance();

}

void ChaoGardenManager::OnFrameFunction()
{
	if (!this->_archipelagoManager->IsInit() || !this->_archipelagoManager->IsAuth())
	{
		//Make No Characters have Chao Garden Access
		WriteData<8>((void*)0x1DEF829, 0x00);

		return;
	}

	//Make All Characters have Chao Garden Access
	WriteData<8>((void*)0x1DEF829, 0x01);

	if (!this->_chaoEnabled)
	{
		return;
	}

	// Make sure Hero/Dark Gardens are always unlocked
	ChaoGardensUnlocked = 0x56;

	// Handle Separate Chao Saves
	std::string chaoFileName = ArchipelagoManager::getInstance().GetSeedName().substr(0, 11);

	for (int i = 0; i < 11; i++)
	{
		WriteData<1>((void*)(0x8ACF4B + i), chaoFileName[i]);
		WriteData<1>((void*)(0xC70E5C + i), chaoFileName[i]);
		WriteData<1>((void*)(0x1366067 + i), chaoFileName[i]);
	}

	if (CurrentLevel != LevelIDs::LevelIDs_ChaoWorld)
	{
		return;
	}

	this->HandleStartingEggs();
	this->HandleSubsequentEggs();

	if (GameState == GameStates::GameStates_Pause)
	{
		return;
	}

	this->_timer++;

	if (this->_timer < CGM_MEMORY_CHECK_TIME)
	{
		return;
	}

	this->_timer = 0;
}

void ChaoGardenManager::HandleStartingEggs()
{
	if (ChaoEggsRandomized != 0b1111)
	{
		for (int chaoIdx = 0; chaoIdx < 24; chaoIdx++)
		{
			ChaoDataBase chaoData = ChaoSlots[chaoIdx].data;

			if (chaoData.Type != ChaoType::ChaoType_Egg)
			{
				continue;
			}

			if (chaoData.Garden != CurrentChaoArea)
			{
				continue;
			}

			if (this->_defaultEggMap.find(chaoIdx) != this->_defaultEggMap.end())
			{
				switch (CurrentChaoArea)
				{
				case 0x01:
					// Neutral Garden
					if ((ChaoEggsRandomized & 0b11) == 0b11)
					{
						continue;
					}
					else if ((ChaoEggsRandomized & 0b11) == 0b01)
					{
						ChaoEggsRandomized = ChaoEggsRandomized | 0b11;
					}
					else
					{
						ChaoEggsRandomized = ChaoEggsRandomized | 0b01;
					}
					break;
				case 0x02:
					// Hero Garden
					if ((ChaoEggsRandomized & 0b100) == 0b100)
					{
						continue;
					}
					else
					{
						ChaoEggsRandomized = ChaoEggsRandomized | 0b100;
					}
					break;
				case 0x03:
					// Dark Garden
					if ((ChaoEggsRandomized & 0b1000) == 0b1000)
					{
						continue;
					}
					else
					{
						ChaoEggsRandomized = ChaoEggsRandomized | 0b1000;
					}
					break;
				}

				// Starting Chao Names
				for (int i = 0; i < 7; i++)
				{
					ChaoSlots[chaoIdx].data.Name[i] = (char)this->_defaultChaoNameMap[i + (chaoIdx * 7)];
				}

				// Starting Chao Colors
				unsigned char color = this->_defaultEggMap[chaoIdx];

				if (color != 255)
				{
					bool twoTone = false, shiny = false, jewel = false;

					if (color == 0)
					{
						twoTone = true;
					}

					if (color > 13)
					{
						color -= 13;
						twoTone = true;
					}

					if (color > 13)
					{
						color -= 14;
						twoTone = false;
						shiny = true;
					}

					if (color > 13)
					{
						color -= 13;
						twoTone = false;
						shiny = false;
						jewel = true;
					}

					if (jewel)
					{
						ChaoSlots[chaoIdx].data.Texture = color;
					}
					else
					{
						ChaoSlots[chaoIdx].data.MonotoneHighlights = !twoTone;
						ChaoSlots[chaoIdx].data.Color = color;
						ChaoSlots[chaoIdx].data.Shiny = shiny;
					}
					ChaoSlots[chaoIdx].data.EggColor = color;
				}
			}
		}
	}
}

void ChaoGardenManager::HandleSubsequentEggs()
{
	if (ChaoNamesUsed == 0)
	{
		ChaoNamesUsed = 4;
	}

	if (ChaoNamesUsed > this->_namesUsed)
	{
		this->_namesUsed = ChaoNamesUsed;
	}

	if (this->_namesUsed >= 30)
	{
		return;
	}

	for (int chaoIdx = 0; chaoIdx < 24; chaoIdx++)
	{
		ChaoDataBase chaoData = ChaoSlots[chaoIdx].data;

		if (chaoData.Type != ChaoType::ChaoType_Egg)
		{
			continue;
		}

		if (chaoData.Garden != CurrentChaoArea)
		{
			continue;
		}

		bool emptyName = true;
		for (int i = 0; i < 7; i++)
		{
			if (chaoData.Name[i] != 0x00)
			{
				emptyName = false;
				break;
			}
		}

		if (!emptyName)
		{
			continue;
		}

		for (int i = 0; i < 7; i++)
		{
			ChaoSlots[chaoIdx].data.Name[i] = (char)this->_defaultChaoNameMap[i + (this->_namesUsed * 7)];
		}

		this->_namesUsed++;
		ChaoNamesUsed++;
	}
}

void ChaoGardenManager::SetChaoEnabled(bool chaoEnabled)
{
	// Anything Chao-related is active
	this->_chaoEnabled = chaoEnabled;
}

void ChaoGardenManager::SetChaoRaceEnabled(bool chaoRaceEnabled)
{
	this->_chaoRaceEnabled = chaoRaceEnabled;

	if (chaoRaceEnabled)
	{
		this->SetChaoEnabled(true);
	}
}

void ChaoGardenManager::SetChaoStatsEnabled(int chaoStatsEnabled)
{
	this->_chaoStatsEnabled = chaoStatsEnabled;

	if (chaoStatsEnabled > 0)
	{
		this->SetChaoEnabled(true);
	}
}

void ChaoGardenManager::SetChaoBodyPartsEnabled(bool chaoBodyPartsEnabled)
{
	this->_chaoBodyPartsEnabled = chaoBodyPartsEnabled;

	if (chaoBodyPartsEnabled)
	{
		this->SetChaoEnabled(true);
	}
}

void ChaoGardenManager::SetChaoKindergartenEnabled(bool chaoKindergartenEnabled)
{
	this->_chaoKindergartenEnabled = chaoKindergartenEnabled;

	if (chaoKindergartenEnabled)
	{
		this->SetChaoEnabled(true);
	}
}

void ChaoGardenManager::SetDefaultEggMap(std::map<int, int> map)
{
	this->_defaultEggMap = map;
}

void ChaoGardenManager::SetDefaultChaoNameMap(std::map<int, int> map)
{
	this->_defaultChaoNameMap = map;
}
