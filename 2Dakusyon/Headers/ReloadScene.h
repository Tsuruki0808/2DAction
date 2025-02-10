#pragma once

#ifndef __RELOADSCENE_H__

#define  __RELOADSCENE_H__


void ReloadScene()
{
	
	if (FirstStart == true)//初回起動時か(真なら画面の真ん中にプレイヤーを配置)
	{
		totalMisscnt = 0;
		playerxCheckpoint = 1 * 64;
		playeryCheckpoint = 6 * 64;
		fastx = 520;
	}
	else//ミスからのシーン再読み込みなら
	{
		totalMisscnt += 1;
		fastx = 218;
	}
	playerx = playerxCheckpoint;
	playery = playeryCheckpoint;//プレイヤーの初期座標
	py = 0;//プレイヤーが現在どのマップの画像にいるか
	px = 0;//プレイヤーが現在どのマップの画像にいるか
	Directionflg = 1;//右向きに変更
	Movex = 16;//目の前、下にどのブロックがあるかを判別するために使用;
	Janpflg = false;//地上にいてジャンプできるかの判定
	Gravity = 1;//プレイヤーにかかる重力
	Ceillingflg = false;//天井に頭が触れたときの判定
	PlayerNumber = 0;//切り取った画像の何枚目を描画するかの数字
	PlayerMode = 1;//プレイヤーが待機(1)、歩く(2)、ジャンプ(3)のどれをしているかの判定
	Frame[0] = { 15 };//ゲーム自体のフレーム数(0が最速)/画像を次の画像に変えるフレーム数
	Frame[1] = { 10 };
	deathcnt = 20;//このカウントが0になったらシーンの再読み込み
	deathflg = false;//自身が死亡状態かどうかのフラグ
	Moveflg = false;//動けるかどうかのフラグ
	Gollflg = false;//ゴールしたかどうかのフラグ
	Risetcnt = 0;//長押しでゲームを中断するカウント
	GameStart = false;//タイトルでプレイヤーがボタンを押したかどうかの判定
	GameStartAnimecnt = 0;//タイトルでスペースを押したときのアニメーションのカウント
	
	fastset = false;//敵のデータを保存するフラグ(シーン再読み込みの度に実行)

	for (int i = 0; i < Efecnt; i++)//敵の画像データを最初の状態に戻す
	{
		for (int j = 0; j < Efecnt; j++)
		{
			if (i == EfeNum[j] && EfeFrame[j] != 0) {
				Efemap[Efemapy[j]][Efemapx[j]] = EfeAnime[i][0];
			}
		}
	}


	for (int i = 0; i < Efecnt; i++)//保存していた敵データを一度削除
	{

		Efex[i] = 0;
		Efey[i] = 0;
		Efew[i] = 0;
		Efeh[i] = 0;
		EfeAnimecnt[i] = 0;
		EfeNum[i] = 0;
		EfeAnimeNumber[i] = 0;
		EfeFrame[i] = 0;
		EfeAnimeflg[i] = 0;
		EfeAnimeFrame[i] = 0;
		EfeLoopflg[i] = 0;
		EfeXorY[i] = 0;
		EfeMoveFrame[i] = 0;
		SetEfeFrame[i] = 0;

		Efemapy[i] = 0;
		Efemapx[i] = 0;
	}
	Efecnt = 0;


}

#endif