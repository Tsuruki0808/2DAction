#pragma once
#include "Headers/DrawEfe.h"
#include "Headers/SetEfeDate.h"

#ifndef __SETDRAWING_H__

#define __SETDRAWING_H__


void SetDrawing()//�摜�̕`��
{
	ClearDrawScreen();	//��ʂ��N���A����

//	DrawBox(0,0,1040,1040,0xF00000, TRUE);//�摜�����߂ł������̊m�F�p
	for (int i = 0; i < Mapsizex; i++)
	{
		for (int j = 0; j < Mapsizey; j++)
		{
			//�w�i(����)�̕`��
			DrawExtendGraph(Mapsize * i - playerx, Mapsize * j, Mapsize * (i + 1) - playerx, Mapsize * (j + 1), Mapimg[map[j][i]], TRUE);		//�摜�̕`��
		    //�����蔻��̉���
			//	DrawBox(Efex[i] + (Efew[i]) - playerx, Efey[i] + Efeh[i], Efex[i] - Efew[i] + Mapsize - playerx, Efey[i] + Mapsize - Efeh[i], 0xfff00, TRUE);
			if (Efemap[Efemapy[i]][Efemapx[i]] == 59)//�����J������
			{
				playery = -1000;

				Gollflg = true;

				GameMode = 3;
			}
			SetEfeDate(j, i);

		}
	}
	fastset = true;

	DrawEfe();





	DrawExtendGraph(fastx - (playerWhidth * Directionflg), playery - (playerHeight * 2) + AdjustmentY,//�g�債�����瑫���̌��Ԃ��傫���Ȃ������������ɂ��炷
		fastx + (playerWhidth * Directionflg), playery + AdjustmentY, playerimg[PlayerNumber], TRUE);//�{���̃v���C���[���������̂ő傫���`��(�E����)

	
	/*
	DrawFormatString(0, 0, GetColor(255, 255, 255), "totalMisscnt = %d", totalMisscnt);
	DrawFormatString(0, 40, GetColor(255, 255, 255), "Time = %.3f", (GetNowCount() - StartTime) / 1000);
	DrawFormatString(0, 60, GetColor(255, 255, 255), "	Risetcnt = %d", Risetcnt);
	*/




	/*
		DrawFormatString(0, 0, GetColor(255, 255, 255), "x = %d", playerx);
		DrawFormatString(0, 20, GetColor(255, 255, 255), "y = %d", playery);
		DrawFormatString(0, 40, GetColor(255, 255, 255), "px = %d", px);
		DrawFormatString(0, 60, GetColor(255, 255, 255), "py = %d", py);
		DrawFormatString(0, 80, GetColor(255, 255, 255), "fastx = %d", fastx);
		DrawFormatString(0, 100, GetColor(255, 255, 255), "JumpPower = %d", JumpPower);
		DrawFormatString(0, 120, GetColor(255, 255, 255), "Janpflg = %d", Janpflg);
		DrawFormatString(0, 140, GetColor(255, 255, 255), "AnimationCnt = %d", AnimationCnt);
		DrawFormatString(0, 160, GetColor(255, 255, 255), "PlayerNumber = %d", PlayerNumber);
		DrawFormatString(0, 180, GetColor(255, 255, 255), "NowMap = %d", map[py][px]);//����
		DrawFormatString(0, 200, GetColor(255, 255, 255), "NowMap = %d", map[py -1][px]);//��
		DrawFormatString(0, 220, GetColor(255, 255, 255), "deathcnt  = %d", deathcnt);//�X�e�[�W�̍ēǂݍ��݂܂ł̎���
		DrawFormatString(0, 260, GetColor(255, 255, 255), "Efecnt  = %d", Efecnt);
		DrawFormatString(0, 280, GetColor(255, 255, 255), "Efemapy  = %d", Efemapy[0]);
		DrawFormatString(0, 300, GetColor(255, 255, 255), "Efemapx  = %d", Efemapx[0]);
		DrawFormatString(0, 320, GetColor(255, 255, 255), "EfeAnimeNumber  = %d", EfeAnimeNumber[0]);
		DrawFormatString(0, 340, GetColor(255, 255, 255), "aaa  = %d", aaa);
		DrawFormatString(0, 360, GetColor(255, 255, 255), "HitL  = %d", HitLadder);
		DrawFormatString(0, 380, GetColor(255, 255, 255), "GetL  = %d", GetOnLadder);
		DrawFormatString(0, 400, GetColor(255, 255, 0), "playerxCheckpoint  = %d", playerxCheckpoint);
		DrawFormatString(0, 420, GetColor(255, 255, 0), "playeryCheckpoint  = %d", playeryCheckpoint);
		DrawFormatString(0, 440, GetColor(255, 255, 0), "Moveflg  = %d", Moveflg);

		DrawBox((pwidth) * 64 - playerx, (py -1) * 64 +20, (pwidth) * 64 + bw - playerx, (py -1) * 64 + (25), 0x0000ff, TRUE);//���E�̓����蔻��pxpy(���̐u���b�N�̑O�𒲂ׂ�)
		DrawBox((pfront) * 64 - playerx, (py -1) * 64, (pfront) * 64 + bw - playerx, (py -1) * 64 + (bh), 0x00ff00, TRUE);//�V��̓����蔻��

		
		DrawBox((pfront) * 64 - playerx, (py) * 64, (pfront) * 64 + bw - playerx, (py) * 64 + bh, 0x00ff00, TRUE);

		
		DrawBox((px) * 64 - playerx, (py) * 64, (px) * 64 + bw - playerx, (py) * 64 + bh, 0xff0000, TRUE);	//�n�ʂ̔���pxpy(���̐ԃu���b�N�̉��𒲂ׂ�)
		*/
}



#endif