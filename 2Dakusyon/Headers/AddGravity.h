#pragma once

#ifndef __ADDGRAVITY_H__

#define __ADDGRAVITY_H__



void AddGravity()//�d�͂�������
{
	if (HitLadder == true && GetOnLadder == true)
	{
		Janpflg = true;
	}



	//�v���C���[���󒆂ɂ���Ȃ�
	if (Janpflg == false)
	{
		//playery��d�͂𑫂��Ă����A�ő��-5�̏d�͂�������
		playery -= JumpPower; //���݂̃W�����v�͂𑫂�
		JumpPower -= Gravity;//�W�����v�͂ɏd�͂�K�p����
		GetOnLadder = false;
		if (JumpPower < -MaxGravitydrop)//�W�����v�͂��ő�d�͂̒l�ɂȂ����炻��ȏ�l���ς��Ȃ��悤�ɂ���
		{
			JumpPower = -MaxGravitydrop;
		}
		if (PlayerMode != 4)
		{
			PlayerMode = 3;//�A�j���[�V������"�W�����v"�ɕύX
		}
	}
	else if (PlayerMode != 4)//�n��ɂ���Ȃ�(�~�X�A�j���[�V�������Ȃ�K�p���Ȃ�)
	{

		Ceillingflg = false;//�V��ɐG�ꂽ���ɃW�����v�̗͂�0�ɂ���t���O
		JumpPower = 0;//�n�ʂɐG��Ă���̂ŏd�͂�0�ɂ���
	}
	if (JumpPower > 0)//��ɉ���������V��ɐG���悤�ɂ���
	{
		Ceillingflg = false;
	}
}




#endif