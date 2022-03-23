#include "../pch.h"
#include "ArchipelagoManager.h"
#include "../Locations/LocationData.h"

#include "../../lib/APCpp/Archipelago.h"

#include <map>
#include "../ModloaderCommon/IniFile.hpp"


void ArchipelagoManager::OnInitFunction(const char* path, const HelperFunctions& helperFunctions)
{
	_helperFunctions = &helperFunctions;

    const IniFile* settings = new IniFile(std::string(path) + "\\config.ini");

    if (settings)
    {
        std::string serverIP        = settings->getString("AP", "IP");
        std::string playerName      = settings->getString("AP", "PlayerName");
        std::string serverPassword  = settings->getString("AP", "Password");

        this->Init(serverIP.c_str(), playerName.c_str(), serverPassword.c_str());
    }
}

void ArchipelagoManager::OnFrameFunction()
{
    if (!this->IsInit())
    {
        return;
    }

    if (this->_deathLinkTimer > 0)
    {
        this->_deathLinkTimer--;

        return;
    }

    if (this->DeathLinkPending() && GameState == GameStates::GameStates_Ingame) // They died
    {
        KillPlayer(0);

        this->_deathLinkTimer = 200;
    
        this->DeathLinkClear();
    }
    else if (!this->DeathLinkPending() && MainCharObj1[0] != NULL && MainCharObj1[0]->Action == Action_Death) // We Died
    {
        this->DeathLinkSend();

        this->_deathLinkTimer = 200;
    }
}


void noop() {}

void ResetItems()
{

}

void RecvItem(int, bool)
{

}

void CheckLocation(int)
{

}

void ArchipelagoManager::Init(const char* ip, const char* playerName, const char* password)
{
    AP_Init(ip, "Sonic Adventure 2 Battle", playerName, password);

    AP_SetDeathLinkSupported(true);
    AP_EnableQueueItemRecvMsgs(false);
    AP_SetItemClearCallback(&ResetItems);
    AP_SetItemRecvCallback(&RecvItem);
    AP_SetLocationCheckedCallback(&CheckLocation);
    AP_SetDeathLinkRecvCallback(&noop);
    AP_Start();
}

bool ArchipelagoManager::IsInit()
{
    return AP_IsInit();
}

// DeathLink Functions
void ArchipelagoManager::DeathLinkSend() 
{
    AP_DeathLinkSend();
}

bool ArchipelagoManager::DeathLinkPending() 
{
    return AP_DeathLinkPending();
}

void ArchipelagoManager::DeathLinkClear() 
{
    AP_DeathLinkClear();
}

void ArchipelagoManager::SendItem(int index)
{
    if (!this->IsInit())
    {
        return;
    }

    int ap_index = index + AP_ID_OFFSET;
    AP_SendItem(ap_index);
}
