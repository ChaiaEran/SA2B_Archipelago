#include "../../../pch.h"
#include "Fishing.h"

void FishingMedium::OnGameStart(MinigameManagerData data)
{
	currentState = MGS_None;
	zoneSize = 50.0f;
	ringSize = 200.0f;

	CreateHierarchy(data);
}

void FishingMedium::OnFrame(MinigameManagerData data)
{
	if (data.managerState == MGS_InProgress)
	{
		ringSize -= 1.0f;
		ring->displaySize = { ringSize, ringSize, 0.0f };
		if (ringSize <= zoneSize)
		{
			ring->color = { 1.0f, 0.0f, 1.0f, 0.0f };
		}
		if (ringSize <= 0.0f)
		{
			currentState = MGS_Loss;
			return;
		}
		if (data.inputPress & anyDPad)
		{
			currentState = ringSize <= zoneSize ? MGS_Victory : MGS_Loss;
		}
	}
}

void FishingMedium::CreateHierarchy(MinigameManagerData data)
{
	zone = data.hierarchy->CreateNode("Zone", data.icons->GetAnim(MGI_Circle), { zoneSize, zoneSize, 0.0f }, { 320.0f, 290.0f, 0.0f }, nullptr);
	ring = data.hierarchy->CreateNode("Ring", data.icons->GetAnim(MGI_Circle_Outline), { ringSize, ringSize, 0.0f }, { 320.0f, 290.0f, 0.0f }, nullptr);
	zone->color = { 0.7f, 0.91f, 0.58f, 0.03f };
	ring->color = { 1.0f, 0.0f, 0.0f, 1.0f };
}