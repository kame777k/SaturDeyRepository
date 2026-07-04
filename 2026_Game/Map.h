#pragma once
//マップやオブジェクトを動かしているのではなく、カメラの位置を再計算している
class Map
{
private:
	float worldX;
	float worldY;
public:
	//========================
	//コンストラクタ
	//========================
	Map(float worldX, float worldY);
	//========================
	//描画
	//========================
	void Draw(float cameraX);


};