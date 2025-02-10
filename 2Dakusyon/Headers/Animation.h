#pragma once
#include "Headers/ReloadScene.h"
#ifndef __ANIMATION_H__

#define __ANIMATION_H__



void Animation()//キャラの画像を変える
{
	if (deathflg == true)//死亡animationを一度実行したらほかのアニメーションに移行しないようにする
	{
		PlayerMode = 4;
		GetOnLadder = false;
		HitLadder = false;
	}
	if (PlayerMode == 1)
	{
		Frame[1] = 20;
	}
	else
	{
		Frame[1] = 10;
		//AnimationCnt = 0;
	}

	AnimationCnt += 1;//カウント用
	if (AnimationCnt > Frame[1])//カウントがframe[1]より多くなったら
	{
		if (PlayerMode == 1 && GetOnLadder == false)//"待機"アニメ
		{
			
			switch (PlayerNumber) {//画像の住所
			case  0:
				PlayerNumber = 1;
				break;
			case  1:
				PlayerNumber = 2;
				break;
			case  2:
				PlayerNumber = 0;
				break;

			default:
				PlayerNumber = 0;

			}
		}//待機アニメここまで
		else if (PlayerMode == 2 && GetOnLadder == false)//"走る"アニメ
		{
			
			switch (PlayerNumber) {//画像の住所
			case  7:
				PlayerNumber = 8;
				break;
			case  8:
				PlayerNumber = 9;
				break;
			case  9:
				PlayerNumber = 10;
				break;
			case  10:
				PlayerNumber = 14;
				break;
			case  14:
				PlayerNumber = 15;
				break;
			case  15:
				PlayerNumber = 16;
				break;
			case  16:
				PlayerNumber = 17;
				break;


			default:
				PlayerNumber = 7;

			}
		}//走るアニメここまで
		else if (PlayerMode == 3 || GetOnLadder == true)//"ジャンプ"アニメ
		{
			
			switch (PlayerNumber) {//画像の住所
			case  21:
				PlayerNumber = 22;
				break;
			case  22:
				PlayerNumber = 23;
				break;
			case  23:
				PlayerNumber = 24;
				break;
			case  24:
				PlayerNumber = 25;
				break;
			case  25:
				PlayerNumber = 26;
				break;
			case  26:
				PlayerNumber = 27;
				break;
			case  27:
				PlayerNumber = 27;
				break;


			default:
				PlayerNumber = 21;

			}
		}//ノックバックアニメここまで
		else if (PlayerMode == 4)//"ジャンプ"アニメ
		{

			switch (PlayerNumber) {//画像の住所
			case  2:
				PlayerNumber = 3;
				break;
			case  3:
				PlayerNumber = 4;
				break;
			case  4:
				PlayerNumber = 4;
				break;


			default:
				PlayerNumber = 2;

			}
		}//ノックバックアニメここまで
		AnimationCnt = 0;//カウントリセット
	}
	
	if (PlayerMode == 4)
	{
		deathcnt -= 1;
		Janpflg = false;
		if (deathflg == false)//初回の設定
		{
			AnimationCnt += 100;
			playery -= 3;
			PlayerNumber = 2;//アニメーション画像の指定
			Frame[0] = 40;//フレームを遅くする
			Frame[1] = Frame[1] * 0.5;//animationはフレームを速くする
			JumpPower = 10;//ノックバック

			deathflg = true;//初回の設定完了
		}
	
			if (map[py -1][pfront - (1 * Directionflg)] == 0)//後ろにブロックがないなら
			{
				playerx -= 3 * Directionflg;
			}


		
	
		if (deathcnt < 0)//一定期間たったら
		{
			ReloadScene();
		}



	}

}



#endif