#include "Dxlib.h"
#include "Headers/InitialValue.h"

#include "Headers/PlayerControl.h"
#include"Headers/SetEfeDate.h"
#include "Headers/Animation.h"
#include "Headers/AddGravity.h"
#include "Headers/ReloadScene.h"
#include "Headers/SetDrawing.h"
#include "Headers/DrawEfe.h"
#include "Headers/Efehantei.h"
#include "Headers/FindCoordinates.h"

int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevinstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetGraphMode(1040, 640, 32);			//�E�B���h�E�T�C�Y�ƃJ���[�r�b�g���̎w��
	ChangeWindowMode(false); 				//�E�B���h�E���[�h��ON
	if (DxLib_Init() == -1) return -1;	//DX���C�u�����̏������A�G���[�ŏI��
	SetDrawScreen(DX_SCREEN_BACK);		//����ʂ֕`��i�_�u���o�b�t�@�j

	LoadDivGraph("UnityChan.png", 28, 7, 4, 64, 64, playerimg);
	LoadDivGraph("monochrome_tilemap_transparent_packed.png", 400, 20, 20, 16, 16, Mapimg);

	while (1) {

		


		switch (GameMode) {
		case  1://�^�C�g��

			if (FirstStart == true)
			{
				ReloadScene();
				FirstStart = false;

			}

			SetDrawing();//�摜�̕`��

			Animation();//�L�����摜�𓮂���
			DrawFormatString(320, 200, GetColor(255, 255, 255), "2D�A�N�V�����Q�[��");
			DrawFormatString(320, 250, GetColor(255, 255, 255), "�X�y�[�X�������Ă�������");



			GetHitKeyStateAll(keyBuf);		//�L�[�̓��͏�Ԃ̎擾


			if (keyBuf[KEY_INPUT_SPACE] == 1)//�Q�[���X�^�[�g&�^�C������J�n
			{
				GameStart = true;
				StartTime = GetNowCount();
			}

			if (GameStart == true)
			{
				//�^�C�g������Q�[�����V�ׂ��Ԃ܂őJ��
				fastx -= speed / 2;
				playerx += speed;
				PlayerMode = 2;
				GameStartAnimecnt += 1;

				if (GameStartAnimecnt > 150)
				{
					PlayerNumber = 7;
					GameStart = false;
					GameMode = 2;
					playerxCheckpoint = 13 * 64;
					playeryCheckpoint = 300;
				}
			}
			break;
		case  2://�v���C��

			SetDrawing();//�摜�̕`��

			FindCoordinates();//���݃v���C���[�̂�����W���ǂ̃}�b�v�ɓ����邩�̌v�Z

			PlayerControl();//�v���C���[�̓��͎�t

			AddGravity();//�d�͂�������

			Animation();//�L�����摜�𓮂���

			break;
		case  3://�N���A���
			if (FirstStart == false)//�^�C�g������g���܂킵
			{
				ClearTime = GetNowCount() - StartTime;
				DrawFormatString(500, 200, GetColor(255, 255, 255), "�Q�[���N���A");

				DrawFormatString(500, 240, GetColor(255, 255, 255), "���v�~�X��:%d", totalMisscnt);
				DrawFormatString(500, 260, GetColor(255, 255, 255), "�N���A�^�C��:%.3f ", ClearTime / 1000);

				DrawFormatString(500, 300, GetColor(255, 255, 255), "�X�y�[�X�������Ă�������");

				FirstStart = true;
			}

			GetHitKeyStateAll(keyBuf);		//�L�[�̓��͏�Ԃ̎擾


			if (keyBuf[KEY_INPUT_SPACE])
			{
				GameMode = 1;
				WaitTimer(300);
				//FirstStart = true;//�Q�[���̍ēǂݍ��݂��s���t���O
			}
			break;
		}

		DrawFormatString(0, 0, GetColor(255, 255, 255), "Esc�ŏI��");


		ScreenFlip();		//����ʂ̓��e��\��ʂɔ��f
		WaitTimer(Frame[0]);		//��莞�ԑ҂@�����ꂪ�Ȃ��ƈ�u�ŕ`�悳��Ă��܂�
		if (ProcessMessage() == -1) break; 				//Windows�̏����ŃG���[����ΏI��
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) break;	//ESC�L�[�ŏI��
	}
	DxLib_End();	//DX���C�u�����̏I������
	return 0;		//�I��
}












