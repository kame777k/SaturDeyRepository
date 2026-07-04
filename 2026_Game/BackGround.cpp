#include "BackGround.h"
#include"DxLib.h"



//========================
//‰Šú‰»
//========================
void BackGround::Init()
{
	imageHandle = LoadGraph("img/background.png");
}

//========================
//•`‰æ
//========================
void BackGround::Draw(float cameraX)
{
	//”wŒi‰æ‘œ‚Ì•`‰æ
	DrawGraph(-(int)(cameraX * 0.5f), 0, imageHandle, TRUE);
}