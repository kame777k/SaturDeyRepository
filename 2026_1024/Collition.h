#pragma once
#include"Config.h"
class Collition
{
private:
	int x;
	int y;
	int width;
	int height;

public:
	Collition();

	//矩形の位置と大きさを設定
	void SetRect(int x, int y);
	//矩形の位置だけを変更する
	void SetPosition(int x, int y);
	//矩形同士が重なっているか調べる
	bool IsHit(const Collition& other)const;
	//衝突した矩形を、指定された空き方向へ押し戻す
	void FixPosition(const Collition& block, unsigned char blockInfo);
	//Get関数
	int GetX()const;
	int GetY()const;
	int GetWidth()const;
	int GetHeight()const;
	int GetRight()const;
	int GetBottom()const;


};

