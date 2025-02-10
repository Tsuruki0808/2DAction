#pragma once

#ifndef __SETEFEDATE_H__

#define __SETEFEDATE_H__


void SetEfeDate(int j, int i)
{


	//背景(敵などの特殊なブロック)の描画
	if (Efemap[j][i] != 0)//画像の番号が指定されていたら
	{
		//アニメーションの画像は別で表記するので一枚絵だけ描画
		if ((Efemap[j][i] < EfeAnime[0][0] || EfeAnime[0][3] < Efemap[j][i]) &&
			(Efemap[j][i] < EfeAnime[1][0] || EfeAnime[1][3] < Efemap[j][i]) &&
			(Efemap[j][i] < EfeAnime[2][0] || EfeAnime[2][3] < Efemap[j][i]) &&
			(Efemap[j][i] < EfeAnime[3][0] || EfeAnime[3][8] < Efemap[j][i]) &&
			(Efemap[j][i] < EfeAnime[4][0] || EfeAnime[4][2] < Efemap[j][i]) &&
			(Efemap[j][i] < EfeAnime[6][0] || EfeAnime[6][6] < Efemap[j][i]) &&
			(Efemap[j][i] < EfeAnime[7][0] || EfeAnime[7][4] < Efemap[j][i]) &&
			(Efemap[j][i] < EfeAnime[11][0] || EfeAnime[11][7] < Efemap[j][i]) &&
			(Efemap[j][i] != 63) &&
			(Efemap[j][i] != 83))
		{
			DrawExtendGraph(Mapsize * i - playerx, Mapsize * j, Mapsize * (i + 1) - playerx, Mapsize * (j + 1), Mapimg[Efemap[j][i]], TRUE);		//画像の描画
		}
	}

	//敵の情報を取得
	if (fastset == false)
	{
		
		//したからとげ
		if (Efemap[j][i] == 183)
		{

			Efex[Efecnt] = Mapsize * i;//表示する左上X座標
			Efey[Efecnt] = Mapsize * j;//表示する左上Y座標
			Efew[Efecnt] = 10;//細かい当たり判定を保存(Mapsize -0のサイズ)
			Efeh[Efecnt] = 32;//細かい当たり判定を保存(Mapsize -32のサイズ)
			Efemapy[Efecnt] = j;//画像がどの場所に入っているかを保存する
			Efemapx[Efecnt] = i;//画像がどの場所に入っているかを保存する
			EfeNum[Efecnt] = 0;//アニメを使用する場合、どの配列のデータを使用するかを指定する
			SetEfeFrame[Efecnt] = 0;//基本のフレーム数(保存しておくことで一時的に遅くしたり早くしたりしやすくなる)
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];//アニメのイラストを書き換えるフレーム数の指定
			EfeSpeed[Efecnt] = 0;//敵の移動速度
			EfeLoopflg[Efecnt] = false;//0ならアニメを再生し続ける、1なら特定のタイミングで一回再生
			EfeXorY[Efecnt] = true;//trueなら左右移動、falseなら上下移動
			EfeMoveFrame[Efecnt] = 0;//反復運動を何フレーム行うかのカウント
			Efecnt += 1;//格納するデータの場所を次にする


		}
		//上からとげ
		if (Efemap[j][i] == 166)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 10;
			Efeh[Efecnt] = 0;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 0;
			SetEfeFrame[Efecnt] = 0;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeSpeed[Efecnt] = 0;
			EfeLoopflg[Efecnt] = false;
			EfeMoveFrame[Efecnt] = 0;
			EfeXorY[Efecnt] = true;
			Efecnt += 1;
		}
		//シンプル敵
		if (Efemap[j][i] == 340)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 16;
			Efeh[Efecnt] = 16;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 2;
			SetEfeFrame[Efecnt] = 50;
			EfeSpeed[Efecnt] = 0;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeLoopflg[Efecnt] = true;
			EfeMoveFrame[Efecnt] = 200;
			EfeXorY[Efecnt] = false;
			Efecnt += 1;

		}
		//左右敵
		if (Efemap[j][i] == 360)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 8;
			Efeh[Efecnt] = 16;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 3;
			SetEfeFrame[Efecnt] = 50;
			EfeSpeed[Efecnt] = -1;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeLoopflg[Efecnt] = true;
			EfeMoveFrame[Efecnt] = 300;
			EfeXorY[Efecnt] = true;
			Efecnt += 1;

		}
		//左右敵
		if (Efemap[j][i] == 361)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j + 32;
			Efew[Efecnt] = 8;
			Efeh[Efecnt] = 16;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 8;
			SetEfeFrame[Efecnt] = 50;
			EfeSpeed[Efecnt] = 1;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeLoopflg[Efecnt] = true;
			EfeMoveFrame[Efecnt] = 1175;
			EfeXorY[Efecnt] = true;
			Efecnt += 1;

		}
		//プロペラ敵
		if (Efemap[j][i] == 380)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 16;
			Efeh[Efecnt] = 16;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 4;
			SetEfeFrame[Efecnt] = 30;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeSpeed[Efecnt] = -1;
			EfeLoopflg[Efecnt] = true;
			EfeMoveFrame[Efecnt] = 400;
			EfeXorY[Efecnt] = false;
			Efecnt += 1;

		}
		//プロペラ敵
		if (Efemap[j][i] == 381)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 16;
			Efeh[Efecnt] = 16;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 10;
			SetEfeFrame[Efecnt] = 30;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeSpeed[Efecnt] = 1;
			EfeLoopflg[Efecnt] = true;
			EfeMoveFrame[Efecnt] = 400;
			EfeXorY[Efecnt] = false;
			Efecnt += 1;

		}
		//敵(左右移動+踏んだら倒せる)
		if (Efemap[j][i] == 320)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 16;
			Efeh[Efecnt] = 16;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 6;
			SetEfeFrame[Efecnt] = 30;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeSpeed[Efecnt] = -1;
			EfeLoopflg[Efecnt] = true;
			EfeMoveFrame[Efecnt] = 500;
			EfeXorY[Efecnt] = true;
			Efecnt += 1;

		}


		//ジャンプ台の情報の取得
		if (Efemap[j][i] == 165)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 0;
			Efeh[Efecnt] = 8;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 1;
			SetEfeFrame[Efecnt] = 7;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeLoopflg[Efecnt] = false;
			EfeMoveFrame[Efecnt] = 0;
			EfeXorY[Efecnt] = true;
			Efecnt += 1;
		}


		//梯子
		if (Efemap[j][i] == 80)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 16;
			Efeh[Efecnt] = 0;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 5;
			SetEfeFrame[Efecnt] = 0;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeLoopflg[Efecnt] = false;
			EfeMoveFrame[Efecnt] = 0;
			EfeXorY[Efecnt] = true;
			Efecnt += 1;
		}
		//梯子(上)
		if (Efemap[j][i] == 60)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 16;
			Efeh[Efecnt] = 50;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 5;
			SetEfeFrame[Efecnt] = 0;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeLoopflg[Efecnt] = false;
			EfeMoveFrame[Efecnt] = 0;
			EfeXorY[Efecnt] = true;
			Efecnt += 1;
		}
		//梯子(下)
		if (Efemap[j][i] == 100)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 16;
			Efeh[Efecnt] = 16;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 5;
			SetEfeFrame[Efecnt] = 0;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeLoopflg[Efecnt] = false;
			EfeMoveFrame[Efecnt] = 0;
			EfeXorY[Efecnt] = true;
			Efecnt += 1;
		}

		//ハート(中間アイテム)
		if (Efemap[j][i] == 40)
		{
			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 16;
			Efeh[Efecnt] = 16;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 7;
			SetEfeFrame[Efecnt] = 15;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeSpeed[Efecnt] = -1;
			EfeLoopflg[Efecnt] = true;
			EfeMoveFrame[Efecnt] = 0;
			EfeXorY[Efecnt] = true;
			Efecnt += 1;

		}

		//左右移動床1
		
		if (Efemap[j][i] == 63)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 2;
			Efeh[Efecnt] = 10;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 9;
			SetEfeFrame[Efecnt] = 0;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeSpeed[Efecnt] = 1;
			EfeLoopflg[Efecnt] = true;
			EfeMoveFrame[Efecnt] = 950;
			EfeXorY[Efecnt] = true;
			Efecnt += 1;

		}
		
		//ゴール扉
		if (Efemap[j][i] == 56)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 30;
			Efeh[Efecnt] = 0;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 11;
			SetEfeFrame[Efecnt] = 30;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeLoopflg[Efecnt] = false;
			EfeMoveFrame[Efecnt] = 0;
			EfeXorY[Efecnt] = true;
			Efecnt += 1;
		}

		//左右移動床2
		if (Efemap[j][i] == 83)
		{

			Efex[Efecnt] = Mapsize * i;
			Efey[Efecnt] = Mapsize * j;
			Efew[Efecnt] = 2;
			Efeh[Efecnt] = 10;
			Efemapy[Efecnt] = j;
			Efemapx[Efecnt] = i;
			EfeNum[Efecnt] = 12;
			SetEfeFrame[Efecnt] = 0;
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];
			EfeSpeed[Efecnt] = -1;
			EfeLoopflg[Efecnt] = true;
			EfeMoveFrame[Efecnt] = 300;
			EfeXorY[Efecnt] = true;
			Efecnt += 1;

		}
	

	}



}


#endif