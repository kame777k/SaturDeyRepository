#include "Camera.h"
#include "Config.h"
#include "DxLib.h"

//==========================
//コンストラクタ
//==========================
Camera::Camera()
{
	x = 0.0f;
}

//============================
//更新
//============================
void Camera::Update()
{
	//Aキーが押されている場合は左に移動
	if (CheckHitKey(KEY_INPUT_A)){ x -= GameConst::CAMERA_SPEED;}

	//Dキーが押されている場合は右に移動
	if (CheckHitKey(KEY_INPUT_D)) { x += GameConst::CAMERA_SPEED;}

	//カメラの位置が画面外に出ないように制限
	if (x < 0) { x = 0;}
	if (x > GameConst::SCREEN_WIDTH) { x = GameConst::SCREEN_WIDTH;}
}

//============================
//X座標の取得
//============================
float Camera::GetX() const
{
	return x;
}