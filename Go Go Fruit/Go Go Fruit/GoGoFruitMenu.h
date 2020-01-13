#pragma once

#include "Scene.h"

class GoGoFruitMenu : public Scene
{
public:
	GoGoFruitMenu(std::string name);

	void InitScene(float windowWidth, float windowHeight) override;
};
