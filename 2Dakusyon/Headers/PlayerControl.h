#pragma once

#include "Headers/ReloadScene.h"

#ifndef __PLAYERCONTROL_H__

#define __PLAYERCONTROL_H__

int Cr, PadInput;



void PlayerControl()
{
	
	

	char keyBuf[256];

	GetHitKeyStateAll(keyBuf);		//キーの入力状態の取得

	if (PlayerMode != 4 && Moveflg == false)//ミス状態なら移動できないようにする
	{

		//左移動
		if (keyBuf[KEY_INPUT_LEFT] == 1 || keyBuf[KEY_INPUT_A] == 1)
		{

			Movex = -16;//床を調べる判定の位置を微調整	
			if (keyBuf[KEY_INPUT_RIGHT] != 1 && keyBuf[KEY_INPUT_D] != 1)//左右同時押しに対応
			{
				Directionflg = -1;//右向きに変更
			}

			if (map[py -1][pwidth - 1] == 0 && (Janpflg == true || //横に壁がないかつ地上にいるまたは
				map[py ][pwidth - 1] == 0))                // 空中の場合ですぐ下の進行方向にブロックがなければ
			{
				
					playerx -= speed;//キャラを動かす
					PlayerMode = 2;//アニメーションを"歩く"に変更
					aaa -= 1;
			}
			else if (Janpflg == true)//左に進めなくて地上にいるなら
			{
				PlayerMode = 1;//アニメーションを"待機"に変更
			}


		}

		//右移動
		if (keyBuf[KEY_INPUT_RIGHT] == 1 || keyBuf[KEY_INPUT_D] == 1)
		{ 
			Movex = 16;//床を調べる判定の位置を微調整
			if (keyBuf[KEY_INPUT_LEFT] != 1 && keyBuf[KEY_INPUT_A] != 1)//左右同時押しに対応
			{
				Directionflg = 1;//右向きに変更
			}
			if (map[py -1][pwidth + 1] == 0 && (Janpflg == true ||//横に壁がないかつ地上にいるまたは
				map[py -1 + 1][pwidth + 1] == 0))               // 空中の場合ですぐ下の進行方向にブロックがなければ

			{
				aaa += 1;
					playerx += speed;//キャラを動かす		
					PlayerMode = 2;//アニメーションを"歩く"に変更
				
			}
			else if (Janpflg == true)//右に進めなくて地上にいるなら
			{
				PlayerMode = 1;//アニメーションを"待機"に変更
			}

		}

		//梯子上移動
		if ((CheckHitKey(KEY_INPUT_UP) || CheckHitKey(KEY_INPUT_W)) && map[pheight2][pfront] == 0 && HitLadder == true)
		
		{
			if (map[pheight2][px] == 0 && map[pheight2][pfront] == 0)
			{

				GetOnLadder = true;
				playery -= LadderSpeed;
			}
		}
		//梯子下移動
		if ((CheckHitKey(KEY_INPUT_DOWN) || CheckHitKey(KEY_INPUT_S)) && HitLadder == true && (map[py][px] == 0 && map[py][pfront] == 0))

		{
			GetOnLadder = true;
			playery += LadderSpeed;
		}

		if (keyBuf[KEY_INPUT_SPACE] == 1 && (Janpflg == true || GetOnLadder == true) && Ceillingflg == false && (map[pheight2][px] == 0 || map[pheight2][pfront] == 0))//ジャンプボタンが押されてかつ地上にいてかつ落下中でなければ(梯子に捕まってても可能)
		{
			PlayerNumber = 21;
			Ceillingflg = false;
			HitLadder = false;
			Janpflg = false;//ジャンプ中にする
			JumpPower = fastJumpPower;//ジャンプ力
		}

	}
	if ((((keyBuf[KEY_INPUT_RIGHT] == 0 && keyBuf[KEY_INPUT_D] == 0) &&//アニメーションに違和感がないようにする
		 ( keyBuf[KEY_INPUT_LEFT] == 0 && keyBuf[KEY_INPUT_A] == 0)) ||
		 ((keyBuf[KEY_INPUT_RIGHT] == 1 || keyBuf[KEY_INPUT_D] == 1) &&
		  (keyBuf[KEY_INPUT_LEFT] == 1 || keyBuf[KEY_INPUT_A] == 1))) &&Janpflg == true)//何も触っていなくて地上にいるなら
	{
		PlayerMode = 1;//アニメーションを"待機"に変更	
	}

	if (keyBuf[KEY_INPUT_Q] == 1)
	{
		Risetcnt += 1;
		if (Risetcnt > 100)
		{
			FirstStart = true;
			GameMode = 1;
			ReloadScene();
		}
		//WaitTimer(100);
	}
	else
	{
		Risetcnt = 0;
	}

	
}



#endif