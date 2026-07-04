#include"DxLib.h"
#include"Game.h"
#include"Config.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	//-----------------------------------------
	// ウィンドウモードに設定
	//-----------------------------------------
	ChangeWindowMode(TRUE);
	// ウィンドウサイズを設定
	SetWindowSize(GameConst::SCREEN_WIDTH, GameConst::SCREEN_HEIGHT);
	//-----------------------------------------
	// DXライブラリ初期化
	//-----------------------------------------
	if (DxLib_Init() == -1)return -1;
	// 文字フォントを設定
	SetFontSize(20);

	// ゲームクラス生成
	Game game;
	// ゲーム初期化
	DxLib_Init();
	SetGraphMode(800, 600, 32);
	
	
	int fontColor = GetColor(255, 100, 0);

	while(ProcessMessage()== 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		ClearDrawScreen();

		SetFontSize(120);
		DrawFormatString(75, 250, fontColor, "Hello, DxLib!");
		ScreenFlip();
	}
}