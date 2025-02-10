#pragma once
#ifndef __DRAWEFE_H__

#define  __DRAWEFE_H__

void DrawEfe()
{

	for (int i = 0; i < Efecnt; i++)
	{
		//	DrawBox(Efex[i] + (Efew[i]) - playerx,Efey[i] + Efeh[i],Efex[i] - Efew[i] + Mapsize - playerx,Efey[i] + Mapsize - Efeh[i], 0xfff00, TRUE);	
        //	DrawBox(Efex[i] + (Efew[i]) - playerx,Efey[i] + Efeh[i],Efex[i] - Efew[i] + Mapsize - playerx,Efey[i] + Mapsize , 0xffff00, TRUE);
	
		if (EfeNum[i] != 0)//アニメーション画像はすべてこちらで描画
		{

			DrawExtendGraph(Efex[i] - playerx,
				Efey[i],
				Efex[i] + Mapsize - playerx,
				Efey[i] + Mapsize,
				Mapimg[Efemap[Efemapy[i]][Efemapx[i]]]//Mapimg[Efemap[Efemapy[i]][Efemapx[i]]],
				, TRUE);		//画像の描画
		}



		if (EfeAnimeflg[i] == 1 || EfeLoopflg[i] == true)//画像の再生(フラグがオンになったら一回だけorループフラグが真なら再生を続ける)
		{
			if (EfeNum[i] == 6 && EfeAnimeNumber[i] == 7)//踏んだら倒せる敵のみ
			{
				Efey[i] -= 1000;
			}
			
			if (EfeAnimecnt[i] >= EfeFrame[i])//適用に格納したほうがいい
			{

				if (EfeAnime[EfeNum[i]][EfeAnimeNumber[i]] == 999)
				{
					EfeFrame[i] = SetEfeFrame[i];
					EfeAnimeNumber[i] = 0;
					EfeAnimeflg[i] = 0;
				}
				Efemap[Efemapy[i]][Efemapx[i]] = EfeAnime[EfeNum[i]][EfeAnimeNumber[i]];
				EfeAnimeNumber[i] += 1;

				EfeAnimecnt[i] = 0;
			}
			EfeAnimecnt[i] += 1;
		}



			if (EfeMoveFrame[i] != 0)//敵を動かす
			{
				//動く敵の制御(動きの数字を配列に入れる)		
			//	aaa += 1;
				EfeAnimeFrame[i] += 1;//何カウントで反転するか等
				if (EfeMoveFrame[i] / 2 == EfeAnimeFrame[i])//半分<最大
				{
					EfeSpeed[i] = EfeSpeed[i] * -1;

				}
				else if (EfeMoveFrame[i] < EfeAnimeFrame[i])//最大＜
				{
					EfeSpeed[i] = EfeSpeed[i] * -1;

					EfeAnimeFrame[i] = 0;
				}

				if (EfeXorY[i] == true)
				{
					Efex[i] += EfeSpeed[i];
				}
				else
				{
					Efey[i] += EfeSpeed[i];
				}
			}

		
	}
}

#endif