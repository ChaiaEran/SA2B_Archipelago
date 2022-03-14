#include "../pch.h"
#pragma once
#include <map>

enum LevelClearCheck
{
    LCC_GreenForest_1,
    LCC_GreenForest_2,
    LCC_GreenForest_3,
    LCC_GreenForest_4,
    LCC_GreenForest_5,

    LCC_WhiteJungle_1,
    LCC_WhiteJungle_2,
    LCC_WhiteJungle_3,
    LCC_WhiteJungle_4,
    LCC_WhiteJungle_5,

    LCC_PumpkinHill_1,
    LCC_PumpkinHill_2,
    LCC_PumpkinHill_3,
    LCC_PumpkinHill_4,
    LCC_PumpkinHill_5,

    LCC_SkyRail_1,
    LCC_SkyRail_2,
    LCC_SkyRail_3,
    LCC_SkyRail_4,
    LCC_SkyRail_5,

    LCC_AquaticMine_1,
    LCC_AquaticMine_2,
    LCC_AquaticMine_3,
    LCC_AquaticMine_4,
    LCC_AquaticMine_5,

    LCC_SecurityHall_1,
    LCC_SecurityHall_2,
    LCC_SecurityHall_3,
    LCC_SecurityHall_4,
    LCC_SecurityHall_5,

    LCC_PrisonLane_1,
    LCC_PrisonLane_2,
    LCC_PrisonLane_3,
    LCC_PrisonLane_4,
    LCC_PrisonLane_5,

    LCC_MetalHarbor_1,
    LCC_MetalHarbor_2,
    LCC_MetalHarbor_3,
    LCC_MetalHarbor_4,
    LCC_MetalHarbor_5,

    LCC_IronGate_1,
    LCC_IronGate_2,
    LCC_IronGate_3,
    LCC_IronGate_4,
    LCC_IronGate_5,

    LCC_WeaponsBed_1,
    LCC_WeaponsBed_2,
    LCC_WeaponsBed_3,
    LCC_WeaponsBed_4,
    LCC_WeaponsBed_5,

    LCC_CityEscape_1,
    LCC_CityEscape_2,
    LCC_CityEscape_3,
    LCC_CityEscape_4,
    LCC_CityEscape_5,

    LCC_RadicalHighway_1,
    LCC_RadicalHighway_2,
    LCC_RadicalHighway_3,
    LCC_RadicalHighway_4,
    LCC_RadicalHighway_5,

    LCC_WildCanyon_1,
    LCC_WildCanyon_2,
    LCC_WildCanyon_3,
    LCC_WildCanyon_4,
    LCC_WildCanyon_5,

    LCC_MissionStreet_1,
    LCC_MissionStreet_2,
    LCC_MissionStreet_3,
    LCC_MissionStreet_4,
    LCC_MissionStreet_5,

    LCC_DryLagoon_1,
    LCC_DryLagoon_2,
    LCC_DryLagoon_3,
    LCC_DryLagoon_4,
    LCC_DryLagoon_5,

    LCC_SandOcean_1,
    LCC_SandOcean_2,
    LCC_SandOcean_3,
    LCC_SandOcean_4,
    LCC_SandOcean_5,

    LCC_CrazyGadget_1,
    LCC_CrazyGadget_2,
    LCC_CrazyGadget_3,
    LCC_CrazyGadget_4,
    LCC_CrazyGadget_5,

    LCC_HiddenBase_1,
    LCC_HiddenBase_2,
    LCC_HiddenBase_3,
    LCC_HiddenBase_4,
    LCC_HiddenBase_5,

    LCC_EternalEngine_1,
    LCC_EternalEngine_2,
    LCC_EternalEngine_3,
    LCC_EternalEngine_4,
    LCC_EternalEngine_5,

    LCC_DeathChamber_1,
    LCC_DeathChamber_2,
    LCC_DeathChamber_3,
    LCC_DeathChamber_4,
    LCC_DeathChamber_5,

    LCC_EggQuarters_1,
    LCC_EggQuarters_2,
    LCC_EggQuarters_3,
    LCC_EggQuarters_4,
    LCC_EggQuarters_5,

    LCC_LostColony_1,
    LCC_LostColony_2,
    LCC_LostColony_3,
    LCC_LostColony_4,
    LCC_LostColony_5,

    LCC_PyramidCave_1,
    LCC_PyramidCave_2,
    LCC_PyramidCave_3,
    LCC_PyramidCave_4,
    LCC_PyramidCave_5,

    LCC_FinalRush_1,
    LCC_FinalRush_2,
    LCC_FinalRush_3,
    LCC_FinalRush_4,
    LCC_FinalRush_5,

    LCC_GreenHill,

    LCC_MeteorHerd_1,
    LCC_MeteorHerd_2,
    LCC_MeteorHerd_3,
    LCC_MeteorHerd_4,
    LCC_MeteorHerd_5,

    LCC_CannonCore_1,
    LCC_CannonCore_2,
    LCC_CannonCore_3,
    LCC_CannonCore_4,
    LCC_CannonCore_5,

    LCC_FinalChase_1,
    LCC_FinalChase_2,
    LCC_FinalChase_3,
    LCC_FinalChase_4,
    LCC_FinalChase_5,

    LCC_CosmicWall_1,
    LCC_CosmicWall_2,
    LCC_CosmicWall_3,
    LCC_CosmicWall_4,
    LCC_CosmicWall_5,

    LCC_MadSpace_1,
    LCC_MadSpace_2,
    LCC_MadSpace_3,
    LCC_MadSpace_4,
    LCC_MadSpace_5,

    LCC_Route101_1,
    LCC_Route101_2,
    LCC_Route101_3,
    LCC_Route101_4,
    LCC_Route101_5,

    LCC_Route280_1,
    LCC_Route280_2,
    LCC_Route280_3,
    LCC_Route280_4,
    LCC_Route280_5,
};

struct LevelClearCheckData
{
    LevelClearCheckData() : Address(0x00) {}
    LevelClearCheckData(int address) : Address(address) {}

    int Address;
    bool CheckSent = false;
};


void InitializeLevelClearChecks(std::map<int, LevelClearCheckData>& outLevelClearChecks);
