#include"DxLib.h"
#include"Config.h"
#include"Map.h"

int WINAPI WinMain(HINSTANCE hIstance, HINSTANCE hPrevInstance, LPSTR LpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)return -1;
	SetDrawScreen(DX_SCREEN_BACK);

	Map map;

	//É}ÉbÉvÇ™ì«Ç›çûÇ›Ç™Ç≈Ç´Ç»Ç©Ç¡ÇΩÇÁ
	if (!map.Init())
	{
		map.Finalize(); DxLib_End();
		return -1;
	}

	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		ClearDrawScreen();

		map.Draw();

		ScreenFlip();
	}

	DxLib_End();
	return 0;
}