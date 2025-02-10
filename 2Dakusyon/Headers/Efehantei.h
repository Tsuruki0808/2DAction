#pragma once

#ifndef __EFEHANTEI_H__

#define __EFEHANTEI_H__

void Efehantei()
{

	for (int i = 0; i < Efecnt; i++)
	{

		//細かい当たり判定
		if (fastx + playerWhidth / 2.5 >= Efex[i] + (Efew[i]) - playerx && fastx - playerWhidth / 2.5 <= Efex[i] - Efew[i] + Mapsize - playerx &&
			playery + AdjustmentY >= Efey[i] + (Efeh[i]) && playery - playerHeight + AdjustmentY <= Efey[i] + Mapsize - Efeh[i] && PlayerMode != 4)
		{
			if (EfeNum[i] == 1)//ばねならEfebunmは画像を格納している箱
			{
				Janpflg = false;
				GetOnLadder = false;
				JumpPower = JanpdaiPower;//ジャンプする
				EfeAnimeflg[i] = 1;//アニメーションを変えるフラグ
			}
			else if (EfeNum[i] == 5)//はしごなら
			{
				HitLadder = true;
				PlayerMode = 3;
			}

			else if (EfeNum[i] == 3 || EfeNum[i] == 8)//横移動敵(踏みつけ可能)
			{
				if (playery + AdjustmentY <= Efey[i] + Mapsize - Efeh[i])//敵より上にいるなら(プレイヤーの足元が敵の頭の座標より上なら)
				{
					JumpPower = 20;//敵でジャンプする

					EfeAnimeNumber[i] = 5;//画像を通常時からやられ時に変更
					EfeFrame[i] = 10;//一時的にフレームを早くする	
				}
				else
				{
					Janpflg = false;
					PlayerMode = 4;
				}
			}

			else if (EfeNum[i] == 6)//横移動敵(踏みつけで倒せる)
			{
				if (playery + AdjustmentY <= Efey[i] + Mapsize - Efeh[i])//敵より上にいるなら(プレイヤーの足元が敵の頭の座標より上なら)
				{
					EfeMoveFrame[i] = 0;//踏んだら動かなくする
					JumpPower = 12;//敵でジャンプする
					EfeAnimecnt[i] = 100;//すぐに死亡アニメーションにしたい
					EfeAnimeNumber[i] = 5;//画像を通常時からやられ時に変更
					EfeFrame[i] = 20;//一時的にフレームを早くする	
				}
				else
				{


					Janpflg = false;
					PlayerMode = 4;

				}
			}

			else if (EfeNum[i] == 7)//ハートなら
			{
				playerxCheckpoint = Efex[i] - Mapsize * 3;//中間から再開した位置の微調整
				playeryCheckpoint = Efey[i] + Mapsize - 64;
			}
			else if (EfeNum[i] == 9 || EfeNum[i] == 12)//移動床に触れたとき(別のとこで細かい判定をとる)
			{

			}

			else if (EfeNum[i] == 11)//ゴール扉なら
			{
				EfeAnimeflg[i] = 1;
				Moveflg = true;
			}

			else //特殊な仕様がない場合(敵に触れたアクションが起きる)
			{
				Janpflg = false;
				PlayerMode = 4;

			}
			
		}
		//動く床は細かい判定が必要なのでここで判定
		if (EfeNum[i] == 9 || EfeNum[i] == 12)


		{
			//上から触れたら
			//MaxGravitydropで上下左右から触れたかのif文が被らないようにしている
			if (playery + AdjustmentY > Efey[i] + Efeh[i] - MaxGravitydrop / 2 && playery + AdjustmentY < Efey[i] + Efeh[i] + MaxGravitydrop &&// MaxGravitydrop + 1はめり込まないギリギリの高さ
				fastx + playerWhidth / 2.5 > Efex[i] + (Efew[i]) - playerx && fastx - playerWhidth / 2.5 < Efex[i] - Efew[i] + Mapsize - playerx)//動く床より上にいるなら
			{
			

					Janpflg = true;
					playerx += EfeSpeed[i];
				//
				
			}

			//右から移動床に触れたら			
			if (fastx + playerWhidth / 2.5 >= Efex[i] + (Efew[i]) - playerx && fastx + playerWhidth / 2.5 <= Efex[i] - Efew[i] + Mapsize - playerx &&
				playery + AdjustmentY > Efey[i] + (Efeh[i]) + MaxGravitydrop * 2 && playery - playerHeight + AdjustmentY < Efey[i] + Mapsize - Efeh[i] - MaxGravitydrop * 2)
			{


				if (EfeSpeed[i] < 0)
				{
					playerx += EfeSpeed[i];
				}
				if (PlayerMode != 1)
				{
					playerx -= speed;
				}

			}

			//左から移動床に触れたら
			else if (fastx - playerWhidth / 2.5 >= Efex[i] + (Efew[i]) - playerx && fastx - playerWhidth / 2.5 <= Efex[i] - Efew[i] + Mapsize - playerx &&
				playery + AdjustmentY > Efey[i] + (Efeh[i]) + MaxGravitydrop * 2 && playery - playerHeight + AdjustmentY < Efey[i] + Mapsize - Efeh[i] - MaxGravitydrop * 2)

			{


				if (EfeSpeed[i] > 0)
				{
					playerx += EfeSpeed[i];
				}
				if (PlayerMode != 1)
				{
					playerx += speed;
				}


			}


			//下から触れたら(おいおい)

			else if (playery - playerHeight + AdjustmentY > Efey[i] + (Efeh[i]) + MaxGravitydrop && playery - playerHeight - MaxGravitydrop< Efey[i] + Mapsize - Efeh[i] &&
				fastx + playerWhidth / 2.75 > Efex[i] + (Efew[i]) - playerx && fastx - playerWhidth / 2.75 < Efex[i] - Efew[i] + Mapsize - playerx && Ceillingflg == false)//動く床の下かつ、今回のジャンプで始めて天井に触れたのなら
			{
				
				Ceillingflg = true;
				JumpPower = 0;

			}


		}
	}
}

#endif