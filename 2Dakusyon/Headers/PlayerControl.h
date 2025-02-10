#pragma once

#include "Headers/ReloadScene.h"

#ifndef __PLAYERCONTROL_H__

#define __PLAYERCONTROL_H__

int Cr, PadInput;



void PlayerControl()
{
	
	

	char keyBuf[256];

	GetHitKeyStateAll(keyBuf);		//�L�[�̓��͏�Ԃ̎擾

	if (PlayerMode != 4 && Moveflg == false)//�~�X��ԂȂ�ړ��ł��Ȃ��悤�ɂ���
	{

		//���ړ�
		if (keyBuf[KEY_INPUT_LEFT] == 1 || keyBuf[KEY_INPUT_A] == 1)
		{

			Movex = -16;//���𒲂ׂ锻��̈ʒu�������	
			if (keyBuf[KEY_INPUT_RIGHT] != 1 && keyBuf[KEY_INPUT_D] != 1)//���E���������ɑΉ�
			{
				Directionflg = -1;//�E�����ɕύX
			}

			if (map[py -1][pwidth - 1] == 0 && (Janpflg == true || //���ɕǂ��Ȃ����n��ɂ���܂���
				map[py ][pwidth - 1] == 0))                // �󒆂̏ꍇ�ł������̐i�s�����Ƀu���b�N���Ȃ����
			{
				
					playerx -= speed;//�L�����𓮂���
					PlayerMode = 2;//�A�j���[�V������"����"�ɕύX
					aaa -= 1;
			}
			else if (Janpflg == true)//���ɐi�߂Ȃ��Ēn��ɂ���Ȃ�
			{
				PlayerMode = 1;//�A�j���[�V������"�ҋ@"�ɕύX
			}


		}

		//�E�ړ�
		if (keyBuf[KEY_INPUT_RIGHT] == 1 || keyBuf[KEY_INPUT_D] == 1)
		{ 
			Movex = 16;//���𒲂ׂ锻��̈ʒu�������
			if (keyBuf[KEY_INPUT_LEFT] != 1 && keyBuf[KEY_INPUT_A] != 1)//���E���������ɑΉ�
			{
				Directionflg = 1;//�E�����ɕύX
			}
			if (map[py -1][pwidth + 1] == 0 && (Janpflg == true ||//���ɕǂ��Ȃ����n��ɂ���܂���
				map[py -1 + 1][pwidth + 1] == 0))               // �󒆂̏ꍇ�ł������̐i�s�����Ƀu���b�N���Ȃ����

			{
				aaa += 1;
					playerx += speed;//�L�����𓮂���		
					PlayerMode = 2;//�A�j���[�V������"����"�ɕύX
				
			}
			else if (Janpflg == true)//�E�ɐi�߂Ȃ��Ēn��ɂ���Ȃ�
			{
				PlayerMode = 1;//�A�j���[�V������"�ҋ@"�ɕύX
			}

		}

		//��q��ړ�
		if ((CheckHitKey(KEY_INPUT_UP) || CheckHitKey(KEY_INPUT_W)) && map[pheight2][pfront] == 0 && HitLadder == true)
		
		{
			if (map[pheight2][px] == 0 && map[pheight2][pfront] == 0)
			{

				GetOnLadder = true;
				playery -= LadderSpeed;
			}
		}
		//��q���ړ�
		if ((CheckHitKey(KEY_INPUT_DOWN) || CheckHitKey(KEY_INPUT_S)) && HitLadder == true && (map[py][px] == 0 && map[py][pfront] == 0))

		{
			GetOnLadder = true;
			playery += LadderSpeed;
		}

		if (keyBuf[KEY_INPUT_SPACE] == 1 && (Janpflg == true || GetOnLadder == true) && Ceillingflg == false && (map[pheight2][px] == 0 || map[pheight2][pfront] == 0))//�W�����v�{�^����������Ă��n��ɂ��Ă��������łȂ����(��q�ɕ߂܂��ĂĂ��\)
		{
			PlayerNumber = 21;
			Ceillingflg = false;
			HitLadder = false;
			Janpflg = false;//�W�����v���ɂ���
			JumpPower = fastJumpPower;//�W�����v��
		}

	}
	if ((((keyBuf[KEY_INPUT_RIGHT] == 0 && keyBuf[KEY_INPUT_D] == 0) &&//�A�j���[�V�����Ɉ�a�����Ȃ��悤�ɂ���
		 ( keyBuf[KEY_INPUT_LEFT] == 0 && keyBuf[KEY_INPUT_A] == 0)) ||
		 ((keyBuf[KEY_INPUT_RIGHT] == 1 || keyBuf[KEY_INPUT_D] == 1) &&
		  (keyBuf[KEY_INPUT_LEFT] == 1 || keyBuf[KEY_INPUT_A] == 1))) &&Janpflg == true)//�����G���Ă��Ȃ��Ēn��ɂ���Ȃ�
	{
		PlayerMode = 1;//�A�j���[�V������"�ҋ@"�ɕύX	
	}

	if (keyBuf[KEY_INPUT_Q] == 1)
	{
		Risetcnt += 1;
		if (Risetcnt > 100)
		{
			FirstStart = true;
			GameMode = 1;
			ReloadScene();
		}
		//WaitTimer(100);
	}
	else
	{
		Risetcnt = 0;
	}

	
}



#endif