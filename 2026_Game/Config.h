#pragma once
//ヘッダー名：コンファイング = 使うものをまとめとくもの

//関連する要素をグループ化できる
namespace GameConst
{
	//コンパイル時より前に読み込む
	constexpr int SCREEN_WIDTH = 1280;	//画面横幅
	constexpr int SCREEN_HEIGHT = 720;	//画面縦幅

	constexpr float CAMERA_SPEED = 5.0f;	//カメラの移動速度
}