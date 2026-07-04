#pragma once

#include<vector>

#include"Camera.h"
#include"BackGround.h"
#include"Map.h"
class Game
{
private:

	Camera camera;	//ƒJƒƒ‰

	BackGround background;	//”wŒi

	std::vector<Map>objects;
public:

	void Init();

	void Update();

	void Draw();
};

