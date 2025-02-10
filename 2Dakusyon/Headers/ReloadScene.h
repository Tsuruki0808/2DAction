#pragma once

#ifndef __RELOADSCENE_H__

#define  __RELOADSCENE_H__


void ReloadScene()
{
	
	if (FirstStart == true)//����N������(�^�Ȃ��ʂ̐^�񒆂Ƀv���C���[��z�u)
	{
		totalMisscnt = 0;
		playerxCheckpoint = 1 * 64;
		playeryCheckpoint = 6 * 64;
		fastx = 520;
	}
	else//�~�X����̃V�[���ēǂݍ��݂Ȃ�
	{
		totalMisscnt += 1;
		fastx = 218;
	}
	playerx = playerxCheckpoint;
	playery = playeryCheckpoint;//�v���C���[�̏������W
	py = 0;//�v���C���[�����݂ǂ̃}�b�v�̉摜�ɂ��邩
	px = 0;//�v���C���[�����݂ǂ̃}�b�v�̉摜�ɂ��邩
	Directionflg = 1;//�E�����ɕύX
	Movex = 16;//�ڂ̑O�A���ɂǂ̃u���b�N�����邩�𔻕ʂ��邽�߂Ɏg�p;
	Janpflg = false;//�n��ɂ��ăW�����v�ł��邩�̔���
	Gravity = 1;//�v���C���[�ɂ�����d��
	Ceillingflg = false;//�V��ɓ����G�ꂽ�Ƃ��̔���
	PlayerNumber = 0;//�؂������摜�̉����ڂ�`�悷�邩�̐���
	PlayerMode = 1;//�v���C���[���ҋ@(1)�A����(2)�A�W�����v(3)�̂ǂ�����Ă��邩�̔���
	Frame[0] = { 15 };//�Q�[�����̂̃t���[����(0���ő�)/�摜�����̉摜�ɕς���t���[����
	Frame[1] = { 10 };
	deathcnt = 20;//���̃J�E���g��0�ɂȂ�����V�[���̍ēǂݍ���
	deathflg = false;//���g�����S��Ԃ��ǂ����̃t���O
	Moveflg = false;//�����邩�ǂ����̃t���O
	Gollflg = false;//�S�[���������ǂ����̃t���O
	Risetcnt = 0;//�������ŃQ�[���𒆒f����J�E���g
	GameStart = false;//�^�C�g���Ńv���C���[���{�^�������������ǂ����̔���
	GameStartAnimecnt = 0;//�^�C�g���ŃX�y�[�X���������Ƃ��̃A�j���[�V�����̃J�E���g
	
	fastset = false;//�G�̃f�[�^��ۑ�����t���O(�V�[���ēǂݍ��݂̓x�Ɏ��s)

	for (int i = 0; i < Efecnt; i++)//�G�̉摜�f�[�^���ŏ��̏�Ԃɖ߂�
	{
		for (int j = 0; j < Efecnt; j++)
		{
			if (i == EfeNum[j] && EfeFrame[j] != 0) {
				Efemap[Efemapy[j]][Efemapx[j]] = EfeAnime[i][0];
			}
		}
	}


	for (int i = 0; i < Efecnt; i++)//�ۑ����Ă����G�f�[�^����x�폜
	{

		Efex[i] = 0;
		Efey[i] = 0;
		Efew[i] = 0;
		Efeh[i] = 0;
		EfeAnimecnt[i] = 0;
		EfeNum[i] = 0;
		EfeAnimeNumber[i] = 0;
		EfeFrame[i] = 0;
		EfeAnimeflg[i] = 0;
		EfeAnimeFrame[i] = 0;
		EfeLoopflg[i] = 0;
		EfeXorY[i] = 0;
		EfeMoveFrame[i] = 0;
		SetEfeFrame[i] = 0;

		Efemapy[i] = 0;
		Efemapx[i] = 0;
	}
	Efecnt = 0;


}

#endif