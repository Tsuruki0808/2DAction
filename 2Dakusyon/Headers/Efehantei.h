#pragma once

#ifndef __EFEHANTEI_H__

#define __EFEHANTEI_H__

void Efehantei()
{

	for (int i = 0; i < Efecnt; i++)
	{

		//�ׂ��������蔻��
		if (fastx + playerWhidth / 2.5 >= Efex[i] + (Efew[i]) - playerx && fastx - playerWhidth / 2.5 <= Efex[i] - Efew[i] + Mapsize - playerx &&
			playery + AdjustmentY >= Efey[i] + (Efeh[i]) && playery - playerHeight + AdjustmentY <= Efey[i] + Mapsize - Efeh[i] && PlayerMode != 4)
		{
			if (EfeNum[i] == 1)//�΂˂Ȃ�Efebunm�͉摜���i�[���Ă��锠
			{
				Janpflg = false;
				GetOnLadder = false;
				JumpPower = JanpdaiPower;//�W�����v����
				EfeAnimeflg[i] = 1;//�A�j���[�V������ς���t���O
			}
			else if (EfeNum[i] == 5)//�͂����Ȃ�
			{
				HitLadder = true;
				PlayerMode = 3;
			}

			else if (EfeNum[i] == 3 || EfeNum[i] == 8)//���ړ��G(���݂��\)
			{
				if (playery + AdjustmentY <= Efey[i] + Mapsize - Efeh[i])//�G����ɂ���Ȃ�(�v���C���[�̑������G�̓��̍��W����Ȃ�)
				{
					JumpPower = 20;//�G�ŃW�����v����

					EfeAnimeNumber[i] = 5;//�摜��ʏ펞������ꎞ�ɕύX
					EfeFrame[i] = 10;//�ꎞ�I�Ƀt���[���𑁂�����	
				}
				else
				{
					Janpflg = false;
					PlayerMode = 4;
				}
			}

			else if (EfeNum[i] == 6)//���ړ��G(���݂��œ|����)
			{
				if (playery + AdjustmentY <= Efey[i] + Mapsize - Efeh[i])//�G����ɂ���Ȃ�(�v���C���[�̑������G�̓��̍��W����Ȃ�)
				{
					EfeMoveFrame[i] = 0;//���񂾂瓮���Ȃ�����
					JumpPower = 12;//�G�ŃW�����v����
					EfeAnimecnt[i] = 100;//�����Ɏ��S�A�j���[�V�����ɂ�����
					EfeAnimeNumber[i] = 5;//�摜��ʏ펞������ꎞ�ɕύX
					EfeFrame[i] = 20;//�ꎞ�I�Ƀt���[���𑁂�����	
				}
				else
				{


					Janpflg = false;
					PlayerMode = 4;

				}
			}

			else if (EfeNum[i] == 7)//�n�[�g�Ȃ�
			{
				playerxCheckpoint = Efex[i] - Mapsize * 3;//���Ԃ���ĊJ�����ʒu�̔�����
				playeryCheckpoint = Efey[i] + Mapsize - 64;
			}
			else if (EfeNum[i] == 9 || EfeNum[i] == 12)//�ړ����ɐG�ꂽ�Ƃ�(�ʂ̂Ƃ��ōׂ���������Ƃ�)
			{

			}

			else if (EfeNum[i] == 11)//�S�[�����Ȃ�
			{
				EfeAnimeflg[i] = 1;
				Moveflg = true;
			}

			else //����Ȏd�l���Ȃ��ꍇ(�G�ɐG�ꂽ�A�N�V�������N����)
			{
				Janpflg = false;
				PlayerMode = 4;

			}
			
		}
		//�������ׂ͍������肪�K�v�Ȃ̂ł����Ŕ���
		if (EfeNum[i] == 9 || EfeNum[i] == 12)


		{
			//�ォ��G�ꂽ��
			//MaxGravitydrop�ŏ㉺���E����G�ꂽ����if�������Ȃ��悤�ɂ��Ă���
			if (playery + AdjustmentY > Efey[i] + Efeh[i] - MaxGravitydrop / 2 && playery + AdjustmentY < Efey[i] + Efeh[i] + MaxGravitydrop &&// MaxGravitydrop + 1�͂߂荞�܂Ȃ��M���M���̍���
				fastx + playerWhidth / 2.5 > Efex[i] + (Efew[i]) - playerx && fastx - playerWhidth / 2.5 < Efex[i] - Efew[i] + Mapsize - playerx)//����������ɂ���Ȃ�
			{
			

					Janpflg = true;
					playerx += EfeSpeed[i];
				//
				
			}

			//�E����ړ����ɐG�ꂽ��			
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

			//������ړ����ɐG�ꂽ��
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


			//������G�ꂽ��(��������)

			else if (playery - playerHeight + AdjustmentY > Efey[i] + (Efeh[i]) + MaxGravitydrop && playery - playerHeight - MaxGravitydrop< Efey[i] + Mapsize - Efeh[i] &&
				fastx + playerWhidth / 2.75 > Efex[i] + (Efew[i]) - playerx && fastx - playerWhidth / 2.75 < Efex[i] - Efew[i] + Mapsize - playerx && Ceillingflg == false)//�������̉����A����̃W�����v�Ŏn�߂ēV��ɐG�ꂽ�̂Ȃ�
			{
				
				Ceillingflg = true;
				JumpPower = 0;

			}


		}
	}
}

#endif