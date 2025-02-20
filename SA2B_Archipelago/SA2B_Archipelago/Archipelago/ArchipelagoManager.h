#include "../pch.h"
#pragma once

#include "../ModloaderCommon/IniFile.hpp"

#include <map>

constexpr unsigned int AP_ID_OFFSET = 0xFF0000;
constexpr int MOD_VERSION = 204;

constexpr int KEEP_ALIVE = 3600;

constexpr int RINGLINK_RATE = 10;
constexpr int ERROR_RATE = 30;

constexpr int ERROR_COLOR_1 = 0xFFF542C8;
constexpr int ERROR_COLOR_2 = 0xFFFFFFFF;

#define RING_LOSS_SOUND 0x8014
#define RING_GAIN_SOUND 0x8005

enum class DeathCause
{
	DC_None,
	DC_Damage,
	DC_Quicksand,
	DC_Kart,
	DC_Fall,
	DC_Drown,
	DC_Pong = 0x50,
	DC_Breakout,
	DC_Fishing,
	DC_Trivia,
	DC_PokemonTrivia,
	DC_PokemonCount,
	DC_NumberSequence,
	DC_LightUpPath,
	DC_Pinball,
	DC_MathQuiz,
	DC_Snake,
	DC_InputSequence,
};

class ArchipelagoManager
{
public:
	static ArchipelagoManager& getInstance()
	{
		static ArchipelagoManager instance;
		return instance;
	}

	void OnInitFunction(const char* path, const HelperFunctions& helperFunctions);
	void OnFrameFunction();

	bool IsInit();
	bool IsAuth();

	bool IsDebug();

	void SendStoryComplete();

	// Item Functions
	void SendItem(int index);
	void ResetItems();
	void ReceiveItem(int item_id, bool notify);
	void CheckLocation(int loc_id);

	void SetMusicMap(std::map<int, int> map);
	void SetMusicShuffle(int shuffleType);
	void SetNarrator(int narrator);
	void SetDeathLink(bool deathLinkActive);
	void SetRingLink(bool ringLinkActive);
	void SetTrapLink(bool trapLinkActive);
	void VerfyModVersion(int modVersion);

	void AP_KillPlayer();

	void SetDeathCause(DeathCause cause);

	void TrapLinkSend(std::string trapName);

	std::string GetSeedNameAndPlayer();
	std::string GetSeedName() { return this->_seedName; };

	bool _deathLinkPending = false;
	std::string ap_player_name;
	int ap_player_num = 0;
	long long lastDeathLinkTime = 0;
	int _instanceID = 0;

	__int16 _lastSentRingCount = 0;

	bool _deathLinkActive = false;
	bool _ringLinkActive = false;
	bool _trapLinkActive = false;

	std::string receivedDeathCause;

private:
	const HelperFunctions* _helperFunctions;
	const IniFile* _settingsINI;

	int _keepAliveTimer = 0;
	int _ringLinkTimer = RINGLINK_RATE;
	int _errorTimer = RINGLINK_RATE;

	int _errorColor = ERROR_COLOR_1;

	int _deathLinkTimer = 0;
	DeathCause deathCauseOverride;

	std::string _seedName;

	bool _authFailed = false;
	bool _badSaveFile = false;
	bool _badSaveName = false;
	bool _badModVersion = false;
	bool _betaModVersion = false;
	bool _betaServerVersion = false;

	int _serverModVersion = 0;

	bool _completionSent = false;

	void Init(const char* ip, const char* playerName, const char* password);
	void OnFrameMessageQueue();
	void OnFrameDebug();

	// DeathLink Functions
	void OnFrameDeathLink();
	void DeathLinkSend(DeathCause cause);
	bool DeathLinkPending();
	void DeathLinkClear();

	// RingLink Functions
	void OnFrameRingLink();
};
