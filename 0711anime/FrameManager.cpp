#include "FrameManager.h"

//=========================
//コンストラクタ
//=========================
FrameManager::FrameManager()
{
	//フレームカウンターを初期化
	frameConuter = 0;
}
//=========================
//更新
//=========================
void FrameManager::Update()
{
	frameConuter++;
}
//=========================
//現在フレーム取得
//=========================
int FrameManager::GetFrameConuter() const
{
	//フレームカウンターを返す
	return frameConuter;
}