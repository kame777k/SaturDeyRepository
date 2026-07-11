#pragma once
class FrameManager
{
private:
	//===================
	// フレームカウンター
	//===================
	int frameConuter;
public:
	//===================
	// コンストラクタ
	//===================
	FrameManager();
	//===================
	// 更新
	//===================
	void Update();
	//===================
	// フレームカウンターの取得
	//===================
	int GetFrameConuter() const;
};

