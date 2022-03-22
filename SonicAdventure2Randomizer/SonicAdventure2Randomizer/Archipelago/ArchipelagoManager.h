#include "../pch.h"
#pragma once

#define AP_ID_OFFSET 0xFF0000;

class ArchipelagoManager
{
public:
	void OnInitFunction(const char* path, const HelperFunctions& helperFunctions);
	void OnFrameFunction();
	void OnInputFunction();
	void OnControlFunction();

private:
	const HelperFunctions* _helperFunctions;


	void Init(const char* ip, const char* playerName, const char* password);
	// DeathLink functions
	void DeathLinkSend();
	bool DeathLinkPending();
	void DeathLinkClear();

	int _deathLinkTimer = 0;
};