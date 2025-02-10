#include "Dxlib.h"
#include "Headers/InitialValue.h"

#include "Headers/PlayerControl.h"
#include"Headers/SetEfeDate.h"
#include "Headers/Animation.h"
#include "Headers/AddGravity.h"
#include "Headers/ReloadScene.h"
#include "Headers/SetDrawing.h"
#include "Headers/DrawEfe.h"
#include "Headers/Efehantei.h"
#include "Headers/FindCoordinates.h"

int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevinstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetGraphMode(1040, 640, 32);			//ウィンドウサイズとカラービット数の指定
	ChangeWindowMode(false); 				//ウィンドウモードをON
	if (DxLib_Init() == -1) return -1;	//DXライブラリの初期化、エラーで終了
	SetDrawScreen(DX_SCREEN_BACK);		//裏画面へ描画（ダブルバッファ）

	LoadDivGraph("UnityChan.png", 28, 7, 4, 64, 64, playerimg);
	LoadDivGraph("monochrome_tilemap_transparent_packed.png", 400, 20, 20, 16, 16, Mapimg);

	while (1) {

		


		switch (GameMode) {
		case  1://タイトル

			if (FirstStart == true)
			{
				ReloadScene();
				FirstStart = false;

			}

			SetDrawing();//画像の描画

			Animation();//キャラ画像を動かす
			DrawFormatString(320, 200, GetColor(255, 255, 255), "2Dアクションゲーム");
			DrawFormatString(320, 250, GetColor(255, 255, 255), "スペースを押してください");



			GetHitKeyStateAll(keyBuf);		//キーの入力状態の取得


			if (keyBuf[KEY_INPUT_SPACE] == 1)//ゲームスタート&タイム測定開始
			{
				GameStart = true;
				StartTime = GetNowCount();
			}

			if (GameStart == true)
			{
				//タイトルからゲームが遊べる状態まで遷移
				fastx -= speed / 2;
				playerx += speed;
				PlayerMode = 2;
				GameStartAnimecnt += 1;

				if (GameStartAnimecnt > 150)
				{
					PlayerNumber = 7;
					GameStart = false;
					GameMode = 2;
					playerxCheckpoint = 13 * 64;
					playeryCheckpoint = 300;
				}
			}
			break;
		case  2://プレイ中

			SetDrawing();//画像の描画

			FindCoordinates();//現在プレイヤーのいる座標がどのマップに当たるかの計算

			PlayerControl();//プレイヤーの入力受付

			AddGravity();//重力を加える

			Animation();//キャラ画像を動かす

			break;
		case  3://クリア画面
			if (FirstStart == false)//タイトルから使いまわし
			{
				ClearTime = GetNowCount() - StartTime;
				DrawFormatString(500, 200, GetColor(255, 255, 255), "ゲームクリア");

				DrawFormatString(500, 240, GetColor(255, 255, 255), "合計ミス数:%d", totalMisscnt);
				DrawFormatString(500, 260, GetColor(255, 255, 255), "クリアタイム:%.3f ", ClearTime / 1000);

				DrawFormatString(500, 300, GetColor(255, 255, 255), "スペースを押してください");

				FirstStart = true;
			}

			GetHitKeyStateAll(keyBuf);		//キーの入力状態の取得


			if (keyBuf[KEY_INPUT_SPACE])
			{
				GameMode = 1;
				WaitTimer(300);
				//FirstStart = true;//ゲームの再読み込みを行うフラグ
			}
			break;
		}

		DrawFormatString(0, 0, GetColor(255, 255, 255), "Escで終了");


		ScreenFlip();		//裏画面の内容を表画面に反映
		WaitTimer(Frame[0]);		//一定時間待つ　※これがないと一瞬で描画されてしまう
		if (ProcessMessage() == -1) break; 				//Windowsの処理でエラーあれば終了
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) break;	//ESCキーで終了
	}
	DxLib_End();	//DXライブラリの終了処理
	return 0;		//終了
}












