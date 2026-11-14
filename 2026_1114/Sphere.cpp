#include "Sphere.h"
#include"Config.h"
#include<DxLib.h>

void Sphere::Init()
{
	x = Config::SPHER_X;
	y = 0.0f;
	z = Config::SPHER_START_Z;
}

void Sphere::Updata(float deltaTime)
{
	z -= Config::SPHER_SPEED * deltaTime;

	if (z < Config::SPHER_END_Z)
	{
		Reset();
	}
}
void Sphere::Draw()const
{
	VECTOR position;

	position.x = x;
	position.y = y;
	position.z = z;

	DrawSphere3D(position, Config::SPHER_RADIUS, 32, GetColor(255, 150, 80), GetColor(255, 255, 255),TRUE);
}

void Sphere::Reset()
{
	z = Config::SPHER_START_Z;
}