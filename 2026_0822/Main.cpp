#include "Dxlib.h"
#include "Game.h"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    //ゲームの実体化（インストラクタ）
    Game game;

    //ゲームの初期化を失敗したら終了
    if (!game.Init())
    {
        return -1;
    }
    //ゲームループ
    game.Run();

    return 0;
}