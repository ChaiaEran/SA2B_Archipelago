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
    char PrevValue = 0;
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


enum ChaoKeyCheck
{
    CKC_BEGIN = 0x400,
    CKC_CityEscape_Chao_Key_1 = 0x400,
    CKC_WildCanyon_Chao_Key_1,
    CKC_PrisonLane_Chao_Key_1,
    CKC_MetalHarbor_Chao_Key_1,
    CKC_GreenForest_Chao_Key_1,
    CKC_PumpkinHill_Chao_Key_1,
    CKC_MissionStreet_Chao_Key_1,
    CKC_AquaticMine_Chao_Key_1,
    CKC_Route101_Chao_Key_1,
    CKC_HiddenBase_Chao_Key_1,
    CKC_PyramidCave_Chao_Key_1,
    CKC_DeathChamber_Chao_Key_1,
    CKC_EternalEngine_Chao_Key_1,
    CKC_MeteorHerd_Chao_Key_1,
    CKC_CrazyGadget_Chao_Key_1,
    CKC_FinalRush_Chao_Key_1,
    CKC_IronGate_Chao_Key_1,
    CKC_DryLagoon_Chao_Key_1,
    CKC_SandOcean_Chao_Key_1,
    CKC_RadicalHighway_Chao_Key_1,
    CKC_EggQuarters_Chao_Key_1,
    CKC_LostColony_Chao_Key_1,
    CKC_WeaponsBed_Chao_Key_1,
    CKC_SecurityHall_Chao_Key_1,
    CKC_WhiteJungle_Chao_Key_1,
    CKC_Route280_Chao_Key_1,
    CKC_SkyRail_Chao_Key_1,
    CKC_MadSpace_Chao_Key_1,
    CKC_CosmicWall_Chao_Key_1,
    CKC_FinalChase_Chao_Key_1,
    CKC_CannonCore_Chao_Key_1,

    CKC_GreenHill_Chao_Key_1,

    CKC_CityEscape_Chao_Key_2 = 0x420,
    CKC_WildCanyon_Chao_Key_2,
    CKC_PrisonLane_Chao_Key_2,
    CKC_MetalHarbor_Chao_Key_2,
    CKC_GreenForest_Chao_Key_2,
    CKC_PumpkinHill_Chao_Key_2,
    CKC_MissionStreet_Chao_Key_2,
    CKC_AquaticMine_Chao_Key_2,
    CKC_Route101_Chao_Key_2,
    CKC_HiddenBase_Chao_Key_2,
    CKC_PyramidCave_Chao_Key_2,
    CKC_DeathChamber_Chao_Key_2,
    CKC_EternalEngine_Chao_Key_2,
    CKC_MeteorHerd_Chao_Key_2,
    CKC_CrazyGadget_Chao_Key_2,
    CKC_FinalRush_Chao_Key_2,
    CKC_IronGate_Chao_Key_2,
    CKC_DryLagoon_Chao_Key_2,
    CKC_SandOcean_Chao_Key_2,
    CKC_RadicalHighway_Chao_Key_2,
    CKC_EggQuarters_Chao_Key_2,
    CKC_LostColony_Chao_Key_2,
    CKC_WeaponsBed_Chao_Key_2,
    CKC_SecurityHall_Chao_Key_2,
    CKC_WhiteJungle_Chao_Key_2,
    CKC_Route280_Chao_Key_2,
    CKC_SkyRail_Chao_Key_2,
    CKC_MadSpace_Chao_Key_2,
    CKC_CosmicWall_Chao_Key_2,
    CKC_FinalChase_Chao_Key_2,
    CKC_CannonCore_Chao_Key_2,

    CKC_CityEscape_Chao_Key_3 = 0x440,
    CKC_WildCanyon_Chao_Key_3,
    CKC_PrisonLane_Chao_Key_3,
    CKC_MetalHarbor_Chao_Key_3,
    CKC_GreenForest_Chao_Key_3,
    CKC_PumpkinHill_Chao_Key_3,
    CKC_MissionStreet_Chao_Key_3,
    CKC_AquaticMine_Chao_Key_3,
    CKC_Route101_Chao_Key_3,
    CKC_HiddenBase_Chao_Key_3,
    CKC_PyramidCave_Chao_Key_3,
    CKC_DeathChamber_Chao_Key_3,
    CKC_EternalEngine_Chao_Key_3,
    CKC_MeteorHerd_Chao_Key_3,
    CKC_CrazyGadget_Chao_Key_3,
    CKC_FinalRush_Chao_Key_3,
    CKC_IronGate_Chao_Key_3,
    CKC_DryLagoon_Chao_Key_3,
    CKC_SandOcean_Chao_Key_3,
    CKC_RadicalHighway_Chao_Key_3,
    CKC_EggQuarters_Chao_Key_3,
    CKC_LostColony_Chao_Key_3,
    CKC_WeaponsBed_Chao_Key_3,
    CKC_SecurityHall_Chao_Key_3,
    CKC_WhiteJungle_Chao_Key_3,
    CKC_Route280_Chao_Key_3,
    CKC_SkyRail_Chao_Key_3,
    CKC_MadSpace_Chao_Key_3,
    CKC_CosmicWall_Chao_Key_3,
    CKC_FinalChase_Chao_Key_3,
    CKC_CannonCore_Chao_Key_3,

    CKC_NUM_CHECKS
};

struct ChaoKeyCheckData
{
    ChaoKeyCheckData() : Address(0x00) {}
    ChaoKeyCheckData(int address, int levelID, NJS_VECTOR position) : Address(address), LevelID(levelID), Position(position) {}
    ChaoKeyCheckData(int address, int levelID, NJS_VECTOR position, NJS_VECTOR altPosition) : Address(address), LevelID(levelID), Position(position), AltPosition(altPosition) {}

    int Address;
    int LevelID = 0x00;
    NJS_VECTOR Position = { 0, 0, 0 };
    NJS_VECTOR AltPosition = { 0, 0, 0 };
    float Range = 300.0f;
    bool CheckSent = false;
};

void InitializeChaoKeyChecks(std::map<int, ChaoKeyCheckData>& outChaoKeyChecks);

enum PipeCheck
{
    PC_BEGIN = 0x500,
    PC_CityEscape_Pipe_1 = 0x500,
    PC_WildCanyon_Pipe_1,
    PC_PrisonLane_Pipe_1,
    PC_MetalHarbor_Pipe_1,
    PC_GreenForest_Pipe_1,
    PC_PumpkinHill_Pipe_1,
    PC_MissionStreet_Pipe_1,
    PC_AquaticMine_Pipe_1,
    PC_Route101_Pipe_1,
    PC_HiddenBase_Pipe_1,
    PC_PyramidCave_Pipe_1,
    PC_DeathChamber_Pipe_1,
    PC_EternalEngine_Pipe_1,
    PC_MeteorHerd_Pipe_1,
    PC_CrazyGadget_Pipe_1,
    PC_FinalRush_Pipe_1,
    PC_IronGate_Pipe_1,
    PC_DryLagoon_Pipe_1,
    PC_SandOcean_Pipe_1,
    PC_RadicalHighway_Pipe_1,
    PC_EggQuarters_Pipe_1,
    PC_LostColony_Pipe_1,
    PC_WeaponsBed_Pipe_1,
    PC_SecurityHall_Pipe_1,
    PC_WhiteJungle_Pipe_1,
    PC_Route280_Pipe_1,
    PC_SkyRail_Pipe_1,
    PC_MadSpace_Pipe_1,
    PC_CosmicWall_Pipe_1,
    PC_FinalChase_Pipe_1,
    PC_CannonCore_Pipe_1,

    PC_CityEscape_Pipe_2 = 0x520,
    PC_WildCanyon_Pipe_2,
    PC_PrisonLane_Pipe_2,
    PC_MetalHarbor_Pipe_2,
    PC_GreenForest_Pipe_2,
    PC_PumpkinHill_Pipe_2,
    PC_MissionStreet_Pipe_2,
    PC_AquaticMine_Pipe_2,
    PC_Route101_Pipe_2,
    PC_HiddenBase_Pipe_2,
    PC_PyramidCave_Pipe_2,
    PC_DeathChamber_Pipe_2,
    PC_EternalEngine_Pipe_2,
    PC_MeteorHerd_Pipe_2,
    PC_CrazyGadget_Pipe_2,
    PC_FinalRush_Pipe_2,
    PC_IronGate_Pipe_2,
    PC_DryLagoon_Pipe_2,
    PC_SandOcean_Pipe_2,
    PC_RadicalHighway_Pipe_2,
    PC_EggQuarters_Pipe_2,
    PC_LostColony_Pipe_2,
    PC_WeaponsBed_Pipe_2,
    PC_SecurityHall_Pipe_2,
    PC_WhiteJungle_Pipe_2,
    PC_Route280_Pipe_2,
    PC_SkyRail_Pipe_2,
    PC_MadSpace_Pipe_2,
    PC_CosmicWall_Pipe_2,
    PC_FinalChase_Pipe_2,
    PC_CannonCore_Pipe_2,

    PC_CityEscape_Pipe_3 = 0x540,
    PC_WildCanyon_Pipe_3,
    PC_PrisonLane_Pipe_3,
    PC_MetalHarbor_Pipe_3,
    PC_GreenForest_Pipe_3,
    PC_PumpkinHill_Pipe_3,
    PC_MissionStreet_Pipe_3,
    PC_AquaticMine_Pipe_3,
    PC_Route101_Pipe_3,
    PC_HiddenBase_Pipe_3,
    PC_PyramidCave_Pipe_3,
    PC_DeathChamber_Pipe_3,
    PC_EternalEngine_Pipe_3,
    PC_MeteorHerd_Pipe_3,
    PC_CrazyGadget_Pipe_3,
    PC_FinalRush_Pipe_3,
    PC_IronGate_Pipe_3,
    PC_DryLagoon_Pipe_3,
    PC_SandOcean_Pipe_3,
    PC_RadicalHighway_Pipe_3,
    PC_EggQuarters_Pipe_3,
    PC_LostColony_Pipe_3,
    PC_WeaponsBed_Pipe_3,
    PC_SecurityHall_Pipe_3,
    PC_WhiteJungle_Pipe_3,
    PC_Route280_Pipe_3,
    PC_SkyRail_Pipe_3,
    PC_MadSpace_Pipe_3,
    PC_CosmicWall_Pipe_3,
    PC_FinalChase_Pipe_3,
    PC_CannonCore_Pipe_3,

    PC_CityEscape_Pipe_4 = 0x560,
    PC_WildCanyon_Pipe_4,
    PC_PrisonLane_Pipe_4,
    PC_MetalHarbor_Pipe_4,
    PC_GreenForest_Pipe_4,
    PC_PumpkinHill_Pipe_4,
    PC_MissionStreet_Pipe_4,
    PC_AquaticMine_Pipe_4,
    PC_Route101_Pipe_4,
    PC_HiddenBase_Pipe_4,
    PC_PyramidCave_Pipe_4,
    PC_DeathChamber_Pipe_4,
    PC_EternalEngine_Pipe_4,
    PC_MeteorHerd_Pipe_4,
    PC_CrazyGadget_Pipe_4,
    PC_FinalRush_Pipe_4,
    PC_IronGate_Pipe_4,
    PC_DryLagoon_Pipe_4,
    PC_SandOcean_Pipe_4,
    PC_RadicalHighway_Pipe_4,
    PC_EggQuarters_Pipe_4,
    PC_LostColony_Pipe_4,
    PC_WeaponsBed_Pipe_4,
    PC_SecurityHall_Pipe_4,
    PC_WhiteJungle_Pipe_4,
    PC_Route280_Pipe_4,
    PC_SkyRail_Pipe_4,
    PC_MadSpace_Pipe_4,
    PC_CosmicWall_Pipe_4,
    PC_FinalChase_Pipe_4,
    PC_CannonCore_Pipe_4,

    PC_CityEscape_Pipe_5 = 0x580,
    PC_WildCanyon_Pipe_5,
    PC_PrisonLane_Pipe_5,
    PC_MetalHarbor_Pipe_5,
    PC_GreenForest_Pipe_5,
    PC_PumpkinHill_Pipe_5,
    PC_MissionStreet_Pipe_5,
    PC_AquaticMine_Pipe_5,
    PC_Route101_Pipe_5,
    PC_HiddenBase_Pipe_5,
    PC_PyramidCave_Pipe_5,
    PC_DeathChamber_Pipe_5,
    PC_EternalEngine_Pipe_5,
    PC_MeteorHerd_Pipe_5,
    PC_CrazyGadget_Pipe_5,
    PC_FinalRush_Pipe_5,
    PC_IronGate_Pipe_5,
    PC_DryLagoon_Pipe_5,
    PC_SandOcean_Pipe_5,
    PC_RadicalHighway_Pipe_5,
    PC_EggQuarters_Pipe_5,
    PC_LostColony_Pipe_5,
    PC_WeaponsBed_Pipe_5,
    PC_SecurityHall_Pipe_5,
    PC_WhiteJungle_Pipe_5,
    PC_Route280_Pipe_5,
    PC_SkyRail_Pipe_5,
    PC_MadSpace_Pipe_5,
    PC_CosmicWall_Pipe_5,
    PC_FinalChase_Pipe_5,
    PC_CannonCore_Pipe_5,

    PC_CityEscape_Pipe_6 = 0x5A0,
    PC_WildCanyon_Pipe_6,
    PC_PrisonLane_Pipe_6,
    PC_MetalHarbor_Pipe_6,
    PC_GreenForest_Pipe_6,
    PC_PumpkinHill_Pipe_6,
    PC_MissionStreet_Pipe_6,
    PC_AquaticMine_Pipe_6,
    PC_Route101_Pipe_6,
    PC_HiddenBase_Pipe_6,
    PC_PyramidCave_Pipe_6,
    PC_DeathChamber_Pipe_6,
    PC_EternalEngine_Pipe_6,
    PC_MeteorHerd_Pipe_6,
    PC_CrazyGadget_Pipe_6,
    PC_FinalRush_Pipe_6,
    PC_IronGate_Pipe_6,
    PC_DryLagoon_Pipe_6,
    PC_SandOcean_Pipe_6,
    PC_RadicalHighway_Pipe_6,
    PC_EggQuarters_Pipe_6,
    PC_LostColony_Pipe_6,
    PC_WeaponsBed_Pipe_6,
    PC_SecurityHall_Pipe_6,
    PC_WhiteJungle_Pipe_6,
    PC_Route280_Pipe_6,
    PC_SkyRail_Pipe_6,
    PC_MadSpace_Pipe_6,
    PC_CosmicWall_Pipe_6,
    PC_FinalChase_Pipe_6,
    PC_CannonCore_Pipe_6,

    PC_NUM_CHECKS
};

struct PipeCheckData
{
    PipeCheckData() : Address(0x00) {}
    PipeCheckData(int address, int levelID, NJS_VECTOR position) : Address(address), LevelID(levelID), Position(position) {}

    int Address;
    int LevelID = 0x00;
    NJS_VECTOR Position = { 0, 0, 0 };
    float Range = 30.0f;
    bool CheckSent = false;
};

void InitializePipeChecks(std::map<int, PipeCheckData>& outPipeChecks);

enum HiddenCheck
{
    HC_BEGIN = 0x700,
    HC_CityEscape_Hidden_1 = 0x700,
    HC_WildCanyon_Hidden_1,
    HC_PrisonLane_Hidden_1,
    HC_MetalHarbor_Hidden_1,
    HC_GreenForest_Hidden_1,
    HC_PumpkinHill_Hidden_1,
    HC_MissionStreet_Hidden_1,
    HC_AquaticMine_Hidden_1,
    HC_Route101_Hidden_1,
    HC_HiddenBase_Hidden_1,
    HC_PyramidCave_Hidden_1,
    HC_DeathChamber_Hidden_1,
    HC_EternalEngine_Hidden_1,
    HC_MeteorHerd_Hidden_1,
    HC_CrazyGadget_Hidden_1,
    HC_FinalRush_Hidden_1,
    HC_IronGate_Hidden_1,
    HC_DryLagoon_Hidden_1,
    HC_SandOcean_Hidden_1,
    HC_RadicalHighway_Hidden_1,
    HC_EggQuarters_Hidden_1,
    HC_LostColony_Hidden_1,
    HC_WeaponsBed_Hidden_1,
    HC_SecurityHall_Hidden_1,
    HC_WhiteJungle_Hidden_1,
    HC_Route280_Hidden_1,
    HC_SkyRail_Hidden_1,
    HC_MadSpace_Hidden_1,
    HC_CosmicWall_Hidden_1,
    HC_FinalChase_Hidden_1,
    HC_CannonCore_Hidden_1,

    HC_CityEscape_Hidden_2 = 0x720,
    HC_WildCanyon_Hidden_2,
    HC_PrisonLane_Hidden_2,
    HC_MetalHarbor_Hidden_2,
    HC_GreenForest_Hidden_2,
    HC_PumpkinHill_Hidden_2,
    HC_MissionStreet_Hidden_2,
    HC_AquaticMine_Hidden_2,
    HC_Route101_Hidden_2,
    HC_HiddenBase_Hidden_2,
    HC_PyramidCave_Hidden_2,
    HC_DeathChamber_Hidden_2,
    HC_EternalEngine_Hidden_2,
    HC_MeteorHerd_Hidden_2,
    HC_CrazyGadget_Hidden_2,
    HC_FinalRush_Hidden_2,
    HC_IronGate_Hidden_2,
    HC_DryLagoon_Hidden_2,
    HC_SandOcean_Hidden_2,
    HC_RadicalHighway_Hidden_2,
    HC_EggQuarters_Hidden_2,
    HC_LostColony_Hidden_2,
    HC_WeaponsBed_Hidden_2,
    HC_SecurityHall_Hidden_2,
    HC_WhiteJungle_Hidden_2,
    HC_Route280_Hidden_2,
    HC_SkyRail_Hidden_2,
    HC_MadSpace_Hidden_2,
    HC_CosmicWall_Hidden_2,
    HC_FinalChase_Hidden_2,
    HC_CannonCore_Hidden_2,

    HC_CityEscape_Hidden_3 = 0x740,
    HC_WildCanyon_Hidden_3,
    HC_PrisonLane_Hidden_3,
    HC_MetalHarbor_Hidden_3,
    HC_GreenForest_Hidden_3,
    HC_PumpkinHill_Hidden_3,
    HC_MissionStreet_Hidden_3,
    HC_AquaticMine_Hidden_3,
    HC_Route101_Hidden_3,
    HC_HiddenBase_Hidden_3,
    HC_PyramidCave_Hidden_3,
    HC_DeathChamber_Hidden_3,
    HC_EternalEngine_Hidden_3,
    HC_MeteorHerd_Hidden_3,
    HC_CrazyGadget_Hidden_3,
    HC_FinalRush_Hidden_3,
    HC_IronGate_Hidden_3,
    HC_DryLagoon_Hidden_3,
    HC_SandOcean_Hidden_3,
    HC_RadicalHighway_Hidden_3,
    HC_EggQuarters_Hidden_3,
    HC_LostColony_Hidden_3,
    HC_WeaponsBed_Hidden_3,
    HC_SecurityHall_Hidden_3,
    HC_WhiteJungle_Hidden_3,
    HC_Route280_Hidden_3,
    HC_SkyRail_Hidden_3,
    HC_MadSpace_Hidden_3,
    HC_CosmicWall_Hidden_3,
    HC_FinalChase_Hidden_3,
    HC_CannonCore_Hidden_3,

    HC_CityEscape_Hidden_4 = 0x760,
    HC_WildCanyon_Hidden_4,
    HC_PrisonLane_Hidden_4,
    HC_MetalHarbor_Hidden_4,
    HC_GreenForest_Hidden_4,
    HC_PumpkinHill_Hidden_4,
    HC_MissionStreet_Hidden_4,
    HC_AquaticMine_Hidden_4,
    HC_Route101_Hidden_4,
    HC_HiddenBase_Hidden_4,
    HC_PyramidCave_Hidden_4,
    HC_DeathChamber_Hidden_4,
    HC_EternalEngine_Hidden_4,
    HC_MeteorHerd_Hidden_4,
    HC_CrazyGadget_Hidden_4,
    HC_FinalRush_Hidden_4,
    HC_IronGate_Hidden_4,
    HC_DryLagoon_Hidden_4,
    HC_SandOcean_Hidden_4,
    HC_RadicalHighway_Hidden_4,
    HC_EggQuarters_Hidden_4,
    HC_LostColony_Hidden_4,
    HC_WeaponsBed_Hidden_4,
    HC_SecurityHall_Hidden_4,
    HC_WhiteJungle_Hidden_4,
    HC_Route280_Hidden_4,
    HC_SkyRail_Hidden_4,
    HC_MadSpace_Hidden_4,
    HC_CosmicWall_Hidden_4,
    HC_FinalChase_Hidden_4,
    HC_CannonCore_Hidden_4,

    HC_CityEscape_Hidden_5 = 0x780,
    HC_WildCanyon_Hidden_5,
    HC_PrisonLane_Hidden_5,
    HC_MetalHarbor_Hidden_5,
    HC_GreenForest_Hidden_5,
    HC_PumpkinHill_Hidden_5,
    HC_MissionStreet_Hidden_5,
    HC_AquaticMine_Hidden_5,
    HC_Route101_Hidden_5,
    HC_HiddenBase_Hidden_5,
    HC_PyramidCave_Hidden_5,
    HC_DeathChamber_Hidden_5,
    HC_EternalEngine_Hidden_5,
    HC_MeteorHerd_Hidden_5,
    HC_CrazyGadget_Hidden_5,
    HC_FinalRush_Hidden_5,
    HC_IronGate_Hidden_5,
    HC_DryLagoon_Hidden_5,
    HC_SandOcean_Hidden_5,
    HC_RadicalHighway_Hidden_5,
    HC_EggQuarters_Hidden_5,
    HC_LostColony_Hidden_5,
    HC_WeaponsBed_Hidden_5,
    HC_SecurityHall_Hidden_5,
    HC_WhiteJungle_Hidden_5,
    HC_Route280_Hidden_5,
    HC_SkyRail_Hidden_5,
    HC_MadSpace_Hidden_5,
    HC_CosmicWall_Hidden_5,
    HC_FinalChase_Hidden_5,
    HC_CannonCore_Hidden_5,

    HC_NUM_CHECKS
};

struct HiddenCheckData
{
    HiddenCheckData() : Address(0x00) {}
    HiddenCheckData(int address, int levelID, NJS_VECTOR position) : Address(address), LevelID(levelID), Position(position) {}

    int Address;
    int LevelID = 0x00;
    NJS_VECTOR Position = { 0, 0, 0 };
    float Range = 60.0f;
    bool CheckSent = false;
};

void InitializeHiddenChecks(std::map<int, HiddenCheckData>& outHiddenChecks);

enum GoldBeetleCheck
{
    GBC_BEGIN = 0x600,
    GBC_CityEscape_Gold_Beetle_1 = 0x600,
    GBC_WildCanyon_Gold_Beetle_1,
    GBC_PrisonLane_Gold_Beetle_1,
    GBC_MetalHarbor_Gold_Beetle_1,
    GBC_GreenForest_Gold_Beetle_1,
    GBC_PumpkinHill_Gold_Beetle_1,
    GBC_MissionStreet_Gold_Beetle_1,
    GBC_AquaticMine_Gold_Beetle_1,
    GBC_Route101_Gold_Beetle_1,
    GBC_HiddenBase_Gold_Beetle_1,
    GBC_PyramidCave_Gold_Beetle_1,
    GBC_DeathChamber_Gold_Beetle_1,
    GBC_EternalEngine_Gold_Beetle_1,
    GBC_MeteorHerd_Gold_Beetle_1,
    GBC_CrazyGadget_Gold_Beetle_1,
    GBC_FinalRush_Gold_Beetle_1,
    GBC_IronGate_Gold_Beetle_1,
    GBC_DryLagoon_Gold_Beetle_1,
    GBC_SandOcean_Gold_Beetle_1,
    GBC_RadicalHighway_Gold_Beetle_1,
    GBC_EggQuarters_Gold_Beetle_1,
    GBC_LostColony_Gold_Beetle_1,
    GBC_WeaponsBed_Gold_Beetle_1,
    GBC_SecurityHall_Gold_Beetle_1,
    GBC_WhiteJungle_Gold_Beetle_1,
    GBC_Route280_Gold_Beetle_1,
    GBC_SkyRail_Gold_Beetle_1,
    GBC_MadSpace_Gold_Beetle_1,
    GBC_CosmicWall_Gold_Beetle_1,
    GBC_FinalChase_Gold_Beetle_1,
    GBC_CannonCore_Gold_Beetle_1,

    GBC_NUM_CHECKS
};

struct GoldBeetleCheckData
{
    GoldBeetleCheckData() : Address(0x00) {}
    GoldBeetleCheckData(int address, int levelID) : Address(address), LevelID(levelID) {}

    int Address;
    int LevelID = 0x00;
    bool CheckSent = false;
};

void InitializeGoldBeetleChecks(std::map<int, GoldBeetleCheckData>& outGoldBeetleChecks);
