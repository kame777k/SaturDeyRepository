#pragma once
namespace Config
{
	//マップチップの画像設定
	constexpr int MAP_CHIP_SIZE = 64;
	constexpr int MAP_CHIP_IMAGE_COLUMNS = 16;
	constexpr int MAP_CHIP_IMAGE_ROWS = 4;
	constexpr int MAP_CHIP_IMAGE_COUNT = MAP_CHIP_IMAGE_COLUMNS * MAP_CHIP_IMAGE_ROWS;

	//マップの描画開始位置
	constexpr int MAP_DRAW_ORIGIN_X = 0;
	constexpr int MAP_DRAW_ORIGIN_Y = 0;

	//CSVの値
	constexpr int MAP_EMPTY = 0;

	//マップファイル
	constexpr char MAP_CHIP_IMAGE_PATH[] = "";
	constexpr char MAP_HIT_CSV_PATH[] = "";
	constexpr char MAP_BACK_CSV_PATH[] = "";
	constexpr char MAP_BASE_CSV_PATH[] = "";
	constexpr char MAP_NEAR_CSV_PATH[] = "";



}