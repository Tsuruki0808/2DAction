#pragma once

#ifndef __SETEFEDATE_H__

#define __SETEFEDATE_H__


void SetEfeDate(int j, int i)
{


	//�w�i(�G�Ȃǂ̓���ȃu���b�N)�̕`��
	if (Efemap[j][i] != 0)//�摜�̔ԍ����w�肳��Ă�����
	{
		//�A�j���[�V�����̉摜�͕ʂŕ\�L����̂ňꖇ�G�����`��
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
			DrawExtendGraph(Mapsize * i - playerx, Mapsize * j, Mapsize * (i + 1) - playerx, Mapsize * (j + 1), Mapimg[Efemap[j][i]], TRUE);		//�摜�̕`��
		}
	}

	//�G�̏����擾
	if (fastset == false)
	{
		
		//��������Ƃ�
		if (Efemap[j][i] == 183)
		{

			Efex[Efecnt] = Mapsize * i;//�\�����鍶��X���W
			Efey[Efecnt] = Mapsize * j;//�\�����鍶��Y���W
			Efew[Efecnt] = 10;//�ׂ��������蔻���ۑ�(Mapsize -0�̃T�C�Y)
			Efeh[Efecnt] = 32;//�ׂ��������蔻���ۑ�(Mapsize -32�̃T�C�Y)
			Efemapy[Efecnt] = j;//�摜���ǂ̏ꏊ�ɓ����Ă��邩��ۑ�����
			Efemapx[Efecnt] = i;//�摜���ǂ̏ꏊ�ɓ����Ă��邩��ۑ�����
			EfeNum[Efecnt] = 0;//�A�j�����g�p����ꍇ�A�ǂ̔z��̃f�[�^���g�p���邩���w�肷��
			SetEfeFrame[Efecnt] = 0;//��{�̃t���[����(�ۑ����Ă������Ƃňꎞ�I�ɒx�������葁�������肵�₷���Ȃ�)
			EfeFrame[Efecnt] = SetEfeFrame[Efecnt];//�A�j���̃C���X�g������������t���[�����̎w��
			EfeSpeed[Efecnt] = 0;//�G�̈ړ����x
			EfeLoopflg[Efecnt] = false;//0�Ȃ�A�j�����Đ���������A1�Ȃ����̃^�C�~���O�ň��Đ�
			EfeXorY[Efecnt] = true;//true�Ȃ獶�E�ړ��Afalse�Ȃ�㉺�ړ�
			EfeMoveFrame[Efecnt] = 0;//�����^�������t���[���s�����̃J�E���g
			Efecnt += 1;//�i�[����f�[�^�̏ꏊ�����ɂ���


		}
		//�ォ��Ƃ�
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
		//�V���v���G
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
		//���E�G
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
		//���E�G
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
		//�v���y���G
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
		//�v���y���G
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
		//�G(���E�ړ�+���񂾂�|����)
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


		//�W�����v��̏��̎擾
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


		//��q
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
		//��q(��)
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
		//��q(��)
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

		//�n�[�g(���ԃA�C�e��)
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

		//���E�ړ���1
		
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
		
		//�S�[����
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

		//���E�ړ���2
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