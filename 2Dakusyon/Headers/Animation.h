#pragma once
#include "Headers/ReloadScene.h"
#ifndef __ANIMATION_H__

#define __ANIMATION_H__



void Animation()//�L�����̉摜��ς���
{
	if (deathflg == true)//���Sanimation����x���s������ق��̃A�j���[�V�����Ɉڍs���Ȃ��悤�ɂ���
	{
		PlayerMode = 4;
		GetOnLadder = false;
		HitLadder = false;
	}
	if (PlayerMode == 1)
	{
		Frame[1] = 20;
	}
	else
	{
		Frame[1] = 10;
		//AnimationCnt = 0;
	}

	AnimationCnt += 1;//�J�E���g�p
	if (AnimationCnt > Frame[1])//�J�E���g��frame[1]��葽���Ȃ�����
	{
		if (PlayerMode == 1 && GetOnLadder == false)//"�ҋ@"�A�j��
		{
			
			switch (PlayerNumber) {//�摜�̏Z��
			case  0:
				PlayerNumber = 1;
				break;
			case  1:
				PlayerNumber = 2;
				break;
			case  2:
				PlayerNumber = 0;
				break;

			default:
				PlayerNumber = 0;

			}
		}//�ҋ@�A�j�������܂�
		else if (PlayerMode == 2 && GetOnLadder == false)//"����"�A�j��
		{
			
			switch (PlayerNumber) {//�摜�̏Z��
			case  7:
				PlayerNumber = 8;
				break;
			case  8:
				PlayerNumber = 9;
				break;
			case  9:
				PlayerNumber = 10;
				break;
			case  10:
				PlayerNumber = 14;
				break;
			case  14:
				PlayerNumber = 15;
				break;
			case  15:
				PlayerNumber = 16;
				break;
			case  16:
				PlayerNumber = 17;
				break;


			default:
				PlayerNumber = 7;

			}
		}//����A�j�������܂�
		else if (PlayerMode == 3 || GetOnLadder == true)//"�W�����v"�A�j��
		{
			
			switch (PlayerNumber) {//�摜�̏Z��
			case  21:
				PlayerNumber = 22;
				break;
			case  22:
				PlayerNumber = 23;
				break;
			case  23:
				PlayerNumber = 24;
				break;
			case  24:
				PlayerNumber = 25;
				break;
			case  25:
				PlayerNumber = 26;
				break;
			case  26:
				PlayerNumber = 27;
				break;
			case  27:
				PlayerNumber = 27;
				break;


			default:
				PlayerNumber = 21;

			}
		}//�m�b�N�o�b�N�A�j�������܂�
		else if (PlayerMode == 4)//"�W�����v"�A�j��
		{

			switch (PlayerNumber) {//�摜�̏Z��
			case  2:
				PlayerNumber = 3;
				break;
			case  3:
				PlayerNumber = 4;
				break;
			case  4:
				PlayerNumber = 4;
				break;


			default:
				PlayerNumber = 2;

			}
		}//�m�b�N�o�b�N�A�j�������܂�
		AnimationCnt = 0;//�J�E���g���Z�b�g
	}
	
	if (PlayerMode == 4)
	{
		deathcnt -= 1;
		Janpflg = false;
		if (deathflg == false)//����̐ݒ�
		{
			AnimationCnt += 100;
			playery -= 3;
			PlayerNumber = 2;//�A�j���[�V�����摜�̎w��
			Frame[0] = 40;//�t���[����x������
			Frame[1] = Frame[1] * 0.5;//animation�̓t���[���𑬂�����
			JumpPower = 10;//�m�b�N�o�b�N

			deathflg = true;//����̐ݒ芮��
		}
	
			if (map[py -1][pfront - (1 * Directionflg)] == 0)//���Ƀu���b�N���Ȃ��Ȃ�
			{
				playerx -= 3 * Directionflg;
			}


		
	
		if (deathcnt < 0)//�����Ԃ�������
		{
			ReloadScene();
		}



	}

}



#endif