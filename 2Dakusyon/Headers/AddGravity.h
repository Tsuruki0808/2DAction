#pragma once

#ifndef __ADDGRAVITY_H__

#define __ADDGRAVITY_H__



void AddGravity()//重力を加える
{
	if (HitLadder == true && GetOnLadder == true)
	{
		Janpflg = true;
	}



	//プレイヤーが空中にいるなら
	if (Janpflg == false)
	{
		//playery二重力を足していき、最大で-5の重力がかかる
		playery -= JumpPower; //現在のジャンプ力を足す
		JumpPower -= Gravity;//ジャンプ力に重力を適用する
		GetOnLadder = false;
		if (JumpPower < -MaxGravitydrop)//ジャンプ力が最大重力の値になったらそれ以上値が変わらないようにする
		{
			JumpPower = -MaxGravitydrop;
		}
		if (PlayerMode != 4)
		{
			PlayerMode = 3;//アニメーションを"ジャンプ"に変更
		}
	}
	else if (PlayerMode != 4)//地上にいるなら(ミスアニメーション中なら適用しない)
	{

		Ceillingflg = false;//天井に触れた時にジャンプの力を0にするフラグ
		JumpPower = 0;//地面に触れているので重力を0にする
	}
	if (JumpPower > 0)//上に加速したら天井に触れるようにする
	{
		Ceillingflg = false;
	}
}




#endif