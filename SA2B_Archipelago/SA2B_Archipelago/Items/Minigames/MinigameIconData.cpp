#include "../../pch.h"
#include "MinigameIconData.h"


static NJS_TEXANIM MGAnim[] = {
	//Bars
	{64, 256, 32, 128, 0x00, 0x00, 0x3F, 0xFF, 0, 0},
	{64, 256, 32, 128, 0x40, 0x00, 0x7F, 0xFF, 0, 0},
	{64, 256, 32, 128, 0x80, 0x00, 0xBF, 0xFF, 0, 0},
	{64, 256, 32, 128, 0xC0, 0x00, 0xFF, 0xFF, 0, 0},
	{64, 256, 32, 128, 0x00, 0x00, 0x3F, 0xFF, 2, 0},
	{64, 256, 32, 128, 0x40, 0x00, 0x7F, 0xFF, 2, 0},
	{64, 256, 32, 128, 0x80, 0x00, 0xBF, 0xFF, 2, 0},
	{64, 256, 32, 128, 0xC0, 0x00, 0xFF, 0xFF, 2, 0},
	//D-Pad
	{64, 64, 32, 32, 0x00, 0x00, 0x7F, 0xFF, 3, 0},
	{64, 64, 32, 32, 0x80, 0x00, 0xFF, 0xFF, 3, 0},
	//Single Icons
	{64, 64, 32, 32, 0x00, 0x00, 0x100, 0x100, 1, 0},
	{128, 128, 64, 64, 0x00, 0x00, 0x100, 0x100, 4, 0},
	{128, 128, 64, 64, 0x00, 0x00, 0x100, 0x100, 5, 0},
	{128, 128, 64, 64, 0x00, 0x00, 0x100, 0x100, 6, 0},
	{128, 128, 64, 64, 0x00, 0x00, 0x100, 0x100, 7, 0},
	{128, 128, 64, 64, 0x00, 0x00, 0x100, 0x100, 8, 0},
	{128, 128, 64, 64, 0x00, 0x00, 0x100, 0x100, 9, 0},
	{16, 16, 8, 8, 0x00, 0x00, 0x100, 0x100, 10, 0},
	//Boss Atlas
	{32, 32, 16, 16, 0xA0, 0x00, 0xB0, 0x3F, 11, 0}, //Bio Beam
	{32, 32, 16, 16, 0xC0, 0x00, 0xD0, 0x3F, 11, 0}, //Bio Bullet
	{14, 32, 7, 16, 0x9A, 0x40, 0xA0, 0x7A, 11, 0}, //Super Bullet
	{34, 48, 17, 24, 0x20, 0x80, 0x31, 0xE0, 11, 0}, //Super Shadow
	{34, 48, 17, 24, 0x00, 0x80, 0x11, 0xE0, 11, 0}, //Super Sonic
	{300, 50, 150, 25, 0x00, 0x00, 0x96, 0x64, 11, 0}, //Boss Body
	{100, 45, 50, 22, 0x40, 0x80, 0x72, 0xDA, 11, 0}, //Boss Arm
	{75, 100, 37, 50, 0xA0, 0x40, 0xC6, 0x100, 11, 0}, //Boss Head
	//Minigame Atlas 0
	{128, 128, 64, 64, 0x00, 0x00, 0x3F, 0x3F, 14, 0}, //Artificial Chaos Round
	{128, 128, 64, 64, 0x40, 0x00, 0x7F, 0x3F, 14, 0}, //Artificial Chaos Tall
	{128, 128, 64, 64, 0x80, 0x00, 0xBF, 0x3F, 14, 0}, //Beetle
	{128, 128, 64, 64, 0xC0, 0x00, 0xFF, 0x3F, 14, 0}, //Beetle Gun
	{128, 128, 64, 64, 0x00, 0x40, 0x3F, 0x7F, 14, 0}, //Barrel
	{64, 64, 32, 32, 0x40, 0x40, 0x5F, 0x5F, 14, 0}, //F Rank
	{128, 128, 64, 64, 0x80, 0x40, 0xBF, 0x7F, 14, 0}, //Chopper
	{64, 64, 32, 32, 0xC0, 0x40, 0xDF, 0x5F, 14, 0}, //Bio Snake Head
	{64, 64, 32, 32, 0xE0, 0x40, 0xFF, 0x5F, 14, 0}, //Bio Snake Tail
	{64, 64, 32, 32, 0xC0, 0x60, 0xDF, 0x7F, 14, 0}, //Bio Snake Body Straight
	{64, 64, 32, 32, 0xE0, 0x60, 0xFF, 0x7F, 14, 0}, //Bio Snake Body Turn
	{64, 64, 32, 32, 0xFF, 0x60, 0xE0, 0x7F, 14, 0}, //Bio Snake Body Turn Mirrored
	{256, 128, 128, 64, 0x00, 0x80, 0x7F, 0xBF, 14, 0}, //Bobber
	{256, 128, 128, 64, 0x00, 0xC0, 0x7F, 0xFF, 14, 0}, //Bobber Splash
	{256, 128, 128, 64, 0x80, 0x80, 0xFF, 0xBF, 14, 0}, //Big 0
	{256, 128, 128, 64, 0x80, 0xC0, 0xFF, 0xFF, 14, 0}, //Big 1
	//Minigame Atlas 1
	{256, 128, 128, 64, 0x00, 0x00, 0x7F, 0x3F, 15, 0}, //Caught Banner
	{256, 128, 128, 64, 0x80, 0x00, 0xFF, 0x3F, 15, 0}, //Miss Banner
	{128, 128, 64, 64, 0x00, 0x40, 0x3F, 0x7F, 15, 0}, //Sonic Head
	{128, 128, 64, 64, 0x40, 0x40, 0x7F, 0x7F, 15, 0}, //Bomb
	{128, 128, 64, 64, 0x80, 0x40, 0xBF, 0x7F, 15, 0}, //Green Check
	{128, 128, 64, 64, 0xC0, 0x40, 0xFF, 0x7F, 15, 0}, //Green Circle
	{128, 128, 64, 64, 0x00, 0x80, 0x3F, 0xBF, 15, 0}, //Red X
	//Pokemon
	//Poke Atlas 0
	{128, 128, 64, 64, 0x00, 0x00, 0x3F, 0x3F, 12, 0},
	{128, 128, 64, 64, 0x40, 0x00, 0x7F, 0x3F, 12, 0},
	{128, 128, 64, 64, 0x80, 0x00, 0xBF, 0x3F, 12, 0},
	{128, 128, 64, 64, 0xC0, 0x00, 0xFF, 0x3F, 12, 0},
	{128, 128, 64, 64, 0x00, 0x40, 0x3F, 0x7F, 12, 0},
	{128, 128, 64, 64, 0x40, 0x40, 0x7F, 0x7F, 12, 0},
	{128, 128, 64, 64, 0x80, 0x40, 0xBF, 0x7F, 12, 0},
	{128, 128, 64, 64, 0xC0, 0x40, 0xFF, 0x7F, 12, 0},
	{128, 128, 64, 64, 0x00, 0x80, 0x3F, 0xBF, 12, 0},
	{128, 128, 64, 64, 0x40, 0x80, 0x7F, 0xBF, 12, 0},
	{128, 128, 64, 64, 0x80, 0x80, 0xBF, 0xBF, 12, 0},
	{128, 128, 64, 64, 0xC0, 0x80, 0xFF, 0xBF, 12, 0},
	{128, 128, 64, 64, 0x00, 0xC0, 0x3F, 0xFF, 12, 0},
	{128, 128, 64, 64, 0x40, 0xC0, 0x7F, 0xFF, 12, 0},
	{128, 128, 64, 64, 0x80, 0xC0, 0xBF, 0xFF, 12, 0},
	{128, 128, 64, 64, 0xC0, 0xC0, 0xFF, 0xFF, 12, 0},
	//Poke Atlas 1
	{128, 128, 64, 64, 0x00, 0x00, 0x3F, 0x3F, 13, 0},
	{128, 128, 64, 64, 0x40, 0x00, 0x7F, 0x3F, 13, 0},
	{128, 128, 64, 64, 0x80, 0x00, 0xBF, 0x3F, 13, 0},
	{128, 128, 64, 64, 0xC0, 0x00, 0xFF, 0x3F, 13, 0},
	{128, 128, 64, 64, 0x00, 0x40, 0x3F, 0x7F, 13, 0},
	{128, 128, 64, 64, 0x40, 0x40, 0x7F, 0x7F, 13, 0},
	{128, 128, 64, 64, 0x80, 0x40, 0xBF, 0x7F, 13, 0},
	{128, 128, 64, 64, 0xC0, 0x40, 0xFF, 0x7F, 13, 0},
	{128, 128, 64, 64, 0x00, 0x80, 0x3F, 0xBF, 13, 0},
	{128, 128, 64, 64, 0x40, 0x80, 0x7F, 0xBF, 13, 0},
	{128, 128, 64, 64, 0x80, 0x80, 0xBF, 0xBF, 13, 0},
	{128, 128, 64, 64, 0xC0, 0x80, 0xFF, 0xBF, 13, 0},
	{128, 128, 64, 64, 0x00, 0xC0, 0x3F, 0xFF, 13, 0},
	{128, 128, 64, 64, 0x40, 0xC0, 0x7F, 0xFF, 13, 0},
	{128, 128, 64, 64, 0x80, 0xC0, 0xBF, 0xFF, 13, 0},
	{128, 128, 64, 64, 0xC0, 0xC0, 0xFF, 0xFF, 13, 0},
	//Padding
	{40, 32, 20, 16, 0x0A, 0x10, 0x34, 0x30, 0, 0},
};

static const int MinigameAnimLength = 76;

FunctionPointer(void, ReleaseTextureList, (NJS_TEXLIST* a1), 0x77F9F0);

static const int MinigameTexCount = 20;

static NJS_TEXNAME MinigameTexName[MinigameTexCount];
static NJS_TEXLIST MinigameTexList = { MinigameTexName, MinigameTexCount };

static TexPackInfo MinigameTexPacks[] = {
	{ "AP_MINIGAME", &MinigameTexList },
	{ nullptr, nullptr }, //Needs to end in a null entry to prevent the LoadTextures call from iterating past the packs
};

NJS_TEXANIM* MinigameIconData::GetAnim(MinigameIcon icon)
{
	return &MGAnim[icon];
}

void MinigameIconData::LoadIcons()
{
	LoadTextures(&MinigameTexPacks[0]);
	this->MinigameAnims = &MGAnim[0];
	this->MinigameTex = &MinigameTexList;
	this->AnimLength = MinigameAnimLength;

	float ratio = 480.0f / VerticalResolution;
	float adjustedHorizontal = HorizontalResolution * ratio;
	float adjustedMin = (adjustedHorizontal - 640.0f) / 2.0f;
	float adjustedMax = adjustedHorizontal - adjustedMin;
	adjustedMin = -adjustedMin;
	this->xMin = adjustedMin;
	this->xMax = adjustedMax;
	this->xCenter = this->xMax / 2.0f + this->xMin / 2.0f;
}

void MinigameIconData::ReleaseIcons()
{
	ReleaseTextureList(&MinigameTexList);
}