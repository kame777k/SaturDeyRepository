#pragma once
#include"Circle.h"
#include"Sphere.h"
class Game
{
private:
	Circle circle;
	Sphere sphere;
public:
	void Init();
	void Updata(float deltaTime);
	void Draw();
	void Reset();
};

