#pragma once
#include "Headers/Efehantei.h"

#ifndef __FINDCOORIDINATES_H__

#define __FINDCOORIDINATES_H__


void FindCoordinates()//���g�̍��W���ǂ̃}�b�v�摜�ɐG��Ă��邩���ׂ�
{
	/**************************�}�b�v�̒��̂ǂ̃}�X�ɂ��邩�̔���****************************/


	//          00000
	//          0   0
	//          00*00  ���̕Ĉ�̂������̃u���b�N���擾���邽��

	for (int i = 0; i < Mapsizex; i++)//�����̃u���b�N��X���W�̎擾
	{
		if (playerx + fastx - Movex > Mapsize * i && playerx + fastx - Movex < Mapsize * (i + 1))
		{
			px = i;
			break;
		}
	}
	for (int i = 0; i < Mapsizey; i++)//�����̃u���b�N��Y���W�̎擾
	{
		if (playery > Mapsize * i && playery < Mapsize * (i + 1))
		{
			py = i;
			break;
		}


	}
	for (int i = 0; i < Mapsizey; i++)//���̂�����̍��W�̎擾
	{
		if (playery - 70 > Mapsize * i && playery - 70 < Mapsize * (i + 1))
		{
			pheight2 = i;
			break;
		}


	}

	/**************************�}�b�v�̒��̂ǂ̃}�X�ɂ��邩�̔��肱���܂�****************************/

	/***********************���E�A���̏�̃u���b�N���擾����ׂ�������****************************/
	//���if����X�������w�����ɂ��炵�A���肬��܂ŕǂɂ���悤�ɂ��Ă���
	// (��Lif�����ƃu���b�N�̂ЂƂO�̋�Ԃɂ����蔻�肪������)
	//�����̉��ɂ���u���b�N�̍��W
	for (int i = 0; i < Mapsizex; i++)
	{
		//�v���C���[�̍�����W�{�v���C���[�������Ă�������̂����O�̍��W��64*i�̂ǂ͈̔͂ɂ��邩�̔���
		if (playerx + fastx - (Movex * 2.5) > Mapsize * i && playerx + fastx - (Movex * 2.5) < Mapsize * (i + 1))//MoveX�ɂ�����l���傫����Εǂɂ��߂��Ȃ�(�߂�����Ƃ߂荞��ł��܂�)
		{
			pwidth = i;
			break;
		}
	}

	for (int i = 0; i < Mapsizex; i++)//���̂�����̔���
	{
		//�v���C���[�̍�����W�{�v���C���[�������Ă�������̂����O�̍��W��64*i�̂ǂ͈̔͂ɂ��邩�̔���
		if (playerx + fastx + Movex > Mapsize * i && playerx + fastx + Movex < Mapsize * (i + 1))
		{
			pfront = i;
			break;
		}
	}

	/***********************���E�A���̏�̃u���b�N���擾����ׂ������肱���܂�****************************/

	/*************�����}�b�v�̃}�X�ڂɉ����������̎��s*******************/
	if (map[py - 1][px] == 0)//�u���b�N�ɖ��܂��Ă��Ȃ��Ȃ�
	{


		if (map[py][px] == 0)//�󒆂Ȃ�
		{

			Janpflg = false;//�W�����v�t���O��true�ɂ���
			HitLadder = false;

		}
		if ((map[py][px] != 0 || map[py][pfront] != 0) && deathflg == false)//�n��Ȃ�
		{
			GetOnLadder = false;//��q�ňړ����Ă��邩�̔���(�n�ʂɐG�ꂽ���q����~���)
			Janpflg = true;//�W�����v�t���O��true�ɂ���			

		}

	}

	/*************�����}�b�v�̃}�X�ڂɉ����������̎��s�����܂�*******************/
	//���̏オ�u���b�N���������W�����v���Ă���Ȃ�
	if ((map[py - 1][px] != 0 || map[py - 1][pfront] != 0) && Janpflg == false)
	{

		if (Ceillingflg == false)//�V��ɐG�ꂽ�u�Ԃ����W�����v�̗͂�0�ɂ���
		{

			Ceillingflg = true;
			JumpPower = 0;

		}
	}

	if (playery > 800)//��������
	{
		ReloadScene();
	}

	Efehantei();

}


#endif
