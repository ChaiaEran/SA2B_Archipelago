#include "../pch.h"
#pragma once
#include <vector>
#include <map>

#define CHAO_LOCATION_INTERNAL_OFFSET 0x18DA0 // 0x01A0F993 - 0x019F6BF3
#define CHAO_LOCATION_STORAGE_OFFSET 0x3DCE2D // 0x01DEC7C0 - 0x01A0F993

enum LevelClearCheck
{
    LCC_CityEscape_1 = 0x00,
    LCC_WildCanyon_1,
    LCC_PrisonLane_1,
    LCC_MetalHarbor_1,
    LCC_GreenForest_1,
    LCC_PumpkinHill_1,
    LCC_MissionStreet_1,
    LCC_AquaticMine_1,
    LCC_Route101_1,
    LCC_HiddenBase_1,
    LCC_PyramidCave_1,
    LCC_DeathChamber_1,
    LCC_EternalEngine_1,
    LCC_MeteorHerd_1,
    LCC_CrazyGadget_1,
    LCC_FinalRush_1,
    LCC_IronGate_1,
    LCC_DryLagoon_1,
    LCC_SandOcean_1,
    LCC_RadicalHighway_1,
    LCC_EggQuarters_1,
    LCC_LostColony_1,
    LCC_WeaponsBed_1,
    LCC_SecurityHall_1,
    LCC_WhiteJungle_1,
    LCC_Route280_1,
    LCC_SkyRail_1,
    LCC_MadSpace_1,
    LCC_CosmicWall_1,
    LCC_FinalChase_1,
    LCC_CannonCore_1,

    LCC_GreenHill,

    LCC_CityEscape_2 = 0x20,
    LCC_WildCanyon_2,
    LCC_PrisonLane_2,
    LCC_MetalHarbor_2,
    LCC_GreenForest_2,
    LCC_PumpkinHill_2,
    LCC_MissionStreet_2,
    LCC_AquaticMine_2,
    LCC_Route101_2,
    LCC_HiddenBase_2,
    LCC_PyramidCave_2,
    LCC_DeathChamber_2,
    LCC_EternalEngine_2,
    LCC_MeteorHerd_2,
    LCC_CrazyGadget_2,
    LCC_FinalRush_2,
    LCC_IronGate_2,
    LCC_DryLagoon_2,
    LCC_SandOcean_2,
    LCC_RadicalHighway_2,
    LCC_EggQuarters_2,
    LCC_LostColony_2,
    LCC_WeaponsBed_2,
    LCC_SecurityHall_2,
    LCC_WhiteJungle_2,
    LCC_Route280_2,
    LCC_SkyRail_2,
    LCC_MadSpace_2,
    LCC_CosmicWall_2,
    LCC_FinalChase_2,
    LCC_CannonCore_2,

    LCC_CityEscape_3 = 0x40,
    LCC_WildCanyon_3,
    LCC_PrisonLane_3,
    LCC_MetalHarbor_3,
    LCC_GreenForest_3,
    LCC_PumpkinHill_3,
    LCC_MissionStreet_3,
    LCC_AquaticMine_3,
    LCC_Route101_3,
    LCC_HiddenBase_3,
    LCC_PyramidCave_3,
    LCC_DeathChamber_3,
    LCC_EternalEngine_3,
    LCC_MeteorHerd_3,
    LCC_CrazyGadget_3,
    LCC_FinalRush_3,
    LCC_IronGate_3,
    LCC_DryLagoon_3,
    LCC_SandOcean_3,
    LCC_RadicalHighway_3,
    LCC_EggQuarters_3,
    LCC_LostColony_3,
    LCC_WeaponsBed_3,
    LCC_SecurityHall_3,
    LCC_WhiteJungle_3,
    LCC_Route280_3,
    LCC_SkyRail_3,
    LCC_MadSpace_3,
    LCC_CosmicWall_3,
    LCC_FinalChase_3,
    LCC_CannonCore_3,

    LCC_CityEscape_4 = 0x60,
    LCC_WildCanyon_4,
    LCC_PrisonLane_4,
    LCC_MetalHarbor_4,
    LCC_GreenForest_4,
    LCC_PumpkinHill_4,
    LCC_MissionStreet_4,
    LCC_AquaticMine_4,
    LCC_Route101_4,
    LCC_HiddenBase_4,
    LCC_PyramidCave_4,
    LCC_DeathChamber_4,
    LCC_EternalEngine_4,
    LCC_MeteorHerd_4,
    LCC_CrazyGadget_4,
    LCC_FinalRush_4,
    LCC_IronGate_4,
    LCC_DryLagoon_4,
    LCC_SandOcean_4,
    LCC_RadicalHighway_4,
    LCC_EggQuarters_4,
    LCC_LostColony_4,
    LCC_WeaponsBed_4,
    LCC_SecurityHall_4,
    LCC_WhiteJungle_4,
    LCC_Route280_4,
    LCC_SkyRail_4,
    LCC_MadSpace_4,
    LCC_CosmicWall_4,
    LCC_FinalChase_4,
    LCC_CannonCore_4,

    LCC_CityEscape_5 = 0x80,
    LCC_WildCanyon_5,
    LCC_PrisonLane_5,
    LCC_MetalHarbor_5,
    LCC_GreenForest_5,
    LCC_PumpkinHill_5,
    LCC_MissionStreet_5,
    LCC_AquaticMine_5,
    LCC_Route101_5,
    LCC_HiddenBase_5,
    LCC_PyramidCave_5,
    LCC_DeathChamber_5,
    LCC_EternalEngine_5,
    LCC_MeteorHerd_5,
    LCC_CrazyGadget_5,
    LCC_FinalRush_5,
    LCC_IronGate_5,
    LCC_DryLagoon_5,
    LCC_SandOcean_5,
    LCC_RadicalHighway_5,
    LCC_EggQuarters_5,
    LCC_LostColony_5,
    LCC_WeaponsBed_5,
    LCC_SecurityHall_5,
    LCC_WhiteJungle_5,
    LCC_Route280_5,
    LCC_SkyRail_5,
    LCC_MadSpace_5,
    LCC_CosmicWall_5,
    LCC_FinalChase_5,
    LCC_CannonCore_5,

    LCC_CityEscape_Upgrade = 0xA0,
    LCC_WildCanyon_Upgrade,
    LCC_PrisonLane_Upgrade,
    LCC_MetalHarbor_Upgrade,
    LCC_GreenForest_Upgrade,
    LCC_PumpkinHill_Upgrade,
    LCC_MissionStreet_Upgrade,
    LCC_AquaticMine_Upgrade,
    LCC_HiddenBase_Upgrade = 0xA9,
    LCC_PyramidCave_Upgrade,
    LCC_DeathChamber_Upgrade,
    LCC_EternalEngine_Upgrade,
    LCC_MeteorHerd_Upgrade,
    LCC_CrazyGadget_Upgrade,
    LCC_FinalRush_Upgrade,
    LCC_IronGate_Upgrade,
    LCC_DryLagoon_Upgrade,
    LCC_SandOcean_Upgrade,
    LCC_RadicalHighway_Upgrade,
    LCC_EggQuarters_Upgrade,
    LCC_LostColony_Upgrade,
    LCC_WeaponsBed_Upgrade,
    LCC_SecurityHall_Upgrade,
    LCC_WhiteJungle_Upgrade,
    LCC_SkyRail_Upgrade = 0xBA,
    LCC_MadSpace_Upgrade,
    LCC_CosmicWall_Upgrade,
    LCC_FinalChase_Upgrade,

    LCC_Boss_1 = 0x100,
    LCC_Boss_2,
    LCC_Boss_3,
    LCC_Boss_4,
    LCC_Boss_5,

    LCC_NUM_CHECKS
};

struct LevelClearCheckData
{
    LevelClearCheckData() : Address(0x00) {}
    LevelClearCheckData(int address) : Address(address) {}

    int Address;
    bool CheckSent = false;
};

void InitializeLevelClearChecks(std::map<int, LevelClearCheckData>& outLevelClearChecks);


enum ChaoGardenCheck
{
    CGC_BEGIN = 0x200,
    CGC_CrabPool_1 = 0x200,
    CGC_CrabPool_2 = 0x201,
    CGC_CrabPool_3 = 0x202,
    CGC_StumpValley_1 = 0x203,
    CGC_StumpValley_2 = 0x204,
    CGC_StumpValley_3 = 0x205,
    CGC_MushroomForest_1 = 0x206,
    CGC_MushroomForest_2 = 0x207,
    CGC_MushroomForest_3 = 0x208,
    CGC_BlockCanyon_1 = 0x209,
    CGC_BlockCanyon_2 = 0x20A,
    CGC_BlockCanyon_3 = 0x20B,

    CGC_Aquamarine_1 = 0x20C,
    CGC_Aquamarine_2 = 0x20D,
    CGC_Aquamarine_3 = 0x20E,
    CGC_Aquamarine_4 = 0x20F,
    CGC_Aquamarine_5 = 0x210,
    CGC_Topaz_1 = 0x211,
    CGC_Topaz_2 = 0x212,
    CGC_Topaz_3 = 0x213,
    CGC_Topaz_4 = 0x214,
    CGC_Topaz_5 = 0x215,
    CGC_Peridot_1 = 0x216,
    CGC_Peridot_2 = 0x217,
    CGC_Peridot_3 = 0x218,
    CGC_Peridot_4 = 0x219,
    CGC_Peridot_5 = 0x21A,
    CGC_Garnet_1 = 0x21B,
    CGC_Garnet_2 = 0x21C,
    CGC_Garnet_3 = 0x21D,
    CGC_Garnet_4 = 0x21E,
    CGC_Garnet_5 = 0x21F,
    CGC_Onyx_1 = 0x220,
    CGC_Onyx_2 = 0x221,
    CGC_Onyx_3 = 0x222,
    CGC_Onyx_4 = 0x223,
    CGC_Onyx_5 = 0x224,
    CGC_Diamond_1 = 0x225,
    CGC_Diamond_2 = 0x226,
    CGC_Diamond_3 = 0x227,
    CGC_Diamond_4 = 0x228,
    CGC_Diamond_5 = 0x229,

    CGC_Challenge_1  = 0x22A,
    CGC_Challenge_2  = 0x22B,
    CGC_Challenge_3  = 0x22C,
    CGC_Challenge_4  = 0x22D,
    CGC_Challenge_5  = 0x22E,
    CGC_Challenge_6  = 0x22F,
    CGC_Challenge_7  = 0x230,
    CGC_Challenge_8  = 0x231,
    CGC_Challenge_9  = 0x232,
    CGC_Challenge_10 = 0x233,
    CGC_Challenge_11 = 0x234,
    CGC_Challenge_12 = 0x235,

    CGC_Hero_1 = 0x236,
    CGC_Hero_2 = 0x237,
    CGC_Hero_3 = 0x238,
    CGC_Hero_4 = 0x239,

    CGC_Dark_1 = 0x23A,
    CGC_Dark_2 = 0x23B,
    CGC_Dark_3 = 0x23C,
    CGC_Dark_4 = 0x23D,

    CGC_END_RACE = CGC_Dark_4,

    CGC_Beginner_Karate     = 0x300,
    CGC_Intermediate_Karate = 0x301,
    CGC_Expert_Karate       = 0x302,
    CGC_Super_Karate        = 0x303,

};

struct ChaoGardenCheckData
{
    ChaoGardenCheckData() : Address(0x00), Index(0x00) {}
    ChaoGardenCheckData(int address, int index) : Address(address), Index(index) {}

    int Address;
    int Index;
    bool CheckSent = false;
};

void InitializeChaoGardenChecks(std::map<int, ChaoGardenCheckData>& outChaoGardenChecks);

void InitializeChaoRacePacks(std::map<int, std::vector<int>>& outChaoRacePacks);
