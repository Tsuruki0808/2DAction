#pragma once
#ifndef __DRAWEFE_H__

#define  __DRAWEFE_H__

void DrawEfe()
{

	for (int i = 0; i < Efecnt; i++)
	{
		//	DrawBox(Efex[i] + (Efew[i]) - playerx,Efey[i] + Efeh[i],Efex[i] - Efew[i] + Mapsize - playerx,Efey[i] + Mapsize - Efeh[i], 0xfff00, TRUE);	
        //	DrawBox(Efex[i] + (Efew[i]) - playerx,Efey[i] + Efeh[i],Efex[i] - Efew[i] + Mapsize - playerx,Efey[i] + Mapsize , 0xffff00, TRUE);
	
		if (EfeNum[i] != 0)//�A�j���[�V�����摜�͂��ׂĂ�����ŕ`��
		{

			DrawExtendGraph(Efex[i] - playerx,
				Efey[i],
				Efex[i] + Mapsize - playerx,
				Efey[i] + Mapsize,
				Mapimg[Efemap[Efemapy[i]][Efemapx[i]]]//Mapimg[Efemap[Efemapy[i]][Efemapx[i]]],
				, TRUE);		//�摜�̕`��
		}



		if (EfeAnimeflg[i] == 1 || EfeLoopflg[i] == true)//�摜�̍Đ�(�t���O���I���ɂȂ������񂾂�or���[�v�t���O���^�Ȃ�Đ��𑱂���)
		{
			if (EfeNum[i] == 6 && EfeAnimeNumber[i] == 7)//���񂾂�|����G�̂�
			{
				Efey[i] -= 1000;
			}
			
			if (EfeAnimecnt[i] >= EfeFrame[i])//�K�p�Ɋi�[�����ق�������
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



			if (EfeMoveFrame[i] != 0)//�G�𓮂���
			{
				//�����G�̐���(�����̐�����z��ɓ����)		
			//	aaa += 1;
				EfeAnimeFrame[i] += 1;//���J�E���g�Ŕ��]���邩��
				if (EfeMoveFrame[i] / 2 == EfeAnimeFrame[i])//����<�ő�
				{
					EfeSpeed[i] = EfeSpeed[i] * -1;

				}
				else if (EfeMoveFrame[i] < EfeAnimeFrame[i])//�ő偃
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