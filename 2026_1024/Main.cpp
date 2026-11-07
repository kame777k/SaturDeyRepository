#include"DxLib.h"
#include"Config.h"
#include"Map.h"

int WINAPI WinMain(HINSTANCE hIstance, HINSTANCE hPrevInstance, LPSTR LpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)return -1;
	SetDrawScreen(DX_SCREEN_BACK);

	Map map;

	//マップが読み込みができなかったら
	if (!map.Init())
	{
		map.Finalize(); DxLib_End();
		return -1;
	}

	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		ClearDrawScreen();

		//マップの描画
		map.Draw();

		ScreenFlip();
	}

	map.Finalize();
	DxLib_End();
	return 0;
}