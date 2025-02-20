#pragma once
#include "../MinigameBase.h"
#include "../MinigameUtilities.h"
#include "../Components/TextBox.h"


class Literature : public MinigameBase
{
public:
	void OnGameStart(MinigameManagerData data) override;
	void OnFrame(MinigameManagerData data) override;

	void CreateHierarchy(MinigameManagerData data);

	void OnFrameSimulate(MinigameManagerData data);

private:
	float textScrollSpeedY = 0.8f;

	SpriteNode* textNode = nullptr;
	TextBox* textBox = nullptr;
};
