#pragma once
#include "Headers/Efehantei.h"

#ifndef __FINDCOORIDINATES_H__

#define __FINDCOORIDINATES_H__


void FindCoordinates()//自身の座標がどのマップ画像に触れているか調べる
{
	/**************************マップの中のどのマスにいるかの判定****************************/


	//          00000
	//          0   0
	//          00*00  左の米印のすぐ下のブロックを取得するため

	for (int i = 0; i < Mapsizex; i++)//足元のブロックのX座標の取得
	{
		if (playerx + fastx - Movex > Mapsize * i && playerx + fastx - Movex < Mapsize * (i + 1))
		{
			px = i;
			break;
		}
	}
	for (int i = 0; i < Mapsizey; i++)//足元のブロックのY座標の取得
	{
		if (playery > Mapsize * i && playery < Mapsize * (i + 1))
		{
			py = i;
			break;
		}


	}
	for (int i = 0; i < Mapsizey; i++)//頭のすぐ上の座標の取得
	{
		if (playery - 70 > Mapsize * i && playery - 70 < Mapsize * (i + 1))
		{
			pheight2 = i;
			break;
		}


	}

	/**************************マップの中のどのマスにいるかの判定ここまで****************************/

	/***********************左右、頭の上のブロックを取得する細かい判定****************************/
	//上のif文のXを少し背中側にずらし、ぎりぎりまで壁によれるようにしている
	// (上記if文だとブロックのひとつ前の空間にあたり判定がある状態)
	//自分の横にあるブロックの座標
	for (int i = 0; i < Mapsizex; i++)
	{
		//プレイヤーの左上座標＋プレイヤーが向いている方向のすぐ前の座標が64*iのどの範囲にいるかの判定
		if (playerx + fastx - (Movex * 2.5) > Mapsize * i && playerx + fastx - (Movex * 2.5) < Mapsize * (i + 1))//MoveXにかける値が大きければ壁により近くなる(近すぎるとめり込んでしまう)
		{
			pwidth = i;
			break;
		}
	}

	for (int i = 0; i < Mapsizex; i++)//頭のすぐ上の判定
	{
		//プレイヤーの左上座標＋プレイヤーが向いている方向のすぐ前の座標が64*iのどの範囲にいるかの判定
		if (playerx + fastx + Movex > Mapsize * i && playerx + fastx + Movex < Mapsize * (i + 1))
		{
			pfront = i;
			break;
		}
	}

	/***********************左右、頭の上のブロックを取得する細かい判定ここまで****************************/

	/*************足元マップのマス目に応じた処理の実行*******************/
	if (map[py - 1][px] == 0)//ブロックに埋まっていないなら
	{


		if (map[py][px] == 0)//空中なら
		{

			Janpflg = false;//ジャンプフラグをtrueにする
			HitLadder = false;

		}
		if ((map[py][px] != 0 || map[py][pfront] != 0) && deathflg == false)//地上なら
		{
			GetOnLadder = false;//梯子で移動しているかの判定(地面に触れたら梯子から降りる)
			Janpflg = true;//ジャンプフラグをtrueにする			

		}

	}

	/*************足元マップのマス目に応じた処理の実行ここまで*******************/
	//頭の上がブロックかつ自分がジャンプしているなら
	if ((map[py - 1][px] != 0 || map[py - 1][pfront] != 0) && Janpflg == false)
	{

		if (Ceillingflg == false)//天井に触れた瞬間だけジャンプの力を0にする
		{

			Ceillingflg = true;
			JumpPower = 0;

		}
	}

	if (playery > 800)//落下判定
	{
		ReloadScene();
	}

	Efehantei();

}


#endif
