#pragma once

#ifndef __INITIALVALUE_H__

#define __INITIALVALUE_H__


char keyBuf[256];

float playerxCheckpoint = 1 * 64;//13,6がタイトルの初期位置
float playeryCheckpoint = 6 * 64;//384.391
int AdjustmentY = 10;//画像を拡大して描画したらずれてしまったので微調整
float playerx = playerxCheckpoint;//プレイヤーの初期座標
float playery = playeryCheckpoint;//プレイヤーの初期座標
int playerWhidth = 48;
int playerHeight = 48;

int fastx = 520;//プレイヤーの描画座標(この値は変動しない)
int px = 0;//プレイヤーがそのマスにいるかのカウント
int py = 0;//プレイヤーがそのマスにいるかのカウント

int pwidth = 0;//プレイヤーの左右の数値(目の前に壁があるかに使用
int pfront = 0;//プレイヤーのすぐ前(天井にジャンプで触れた等に使用)

int pheight2 = 0;//梯子を使た際の頭の判定

int speed = 5;//左右移動の速さ
int Gravity = 1;//プレイヤーにかかる重力
float MaxGravitydrop = 7;//最大落下速度
int JumpPower = 0;//ジャンプ力(これに重力がかかる)
int fastJumpPower = 18;//ジャンプボタンが押されたら付与される力
bool HitLadder = false;//梯子に触れているかの判定
bool GetOnLadder = false;//梯子に触れていてかつ梯子を使用するかの判定
int LadderSpeed = 3;//はしごを乗り降りする速さ


int Movex = 16;//目の前、下にどのブロックがあるかを判別するために使用;


bool Janpflg = false;//地上にいてジャンプできるかの判定
bool Ceillingflg = false;//天井に頭が触れたときの判定

int PlayerNumber = 0;//切り取った画像の何枚目を描画するかの数字
int PlayerMode = 1;//プレイヤーが待機(1)、歩く(2)、ジャンプ(3)のどれをしているかの判定
int AnimationCnt = 0;//何フレーム事にanimationを再生するかのカウント
bool deathflg = false;
int deathcnt = 20;//死亡アニメーションから何フレーム後にステージを読み込むか

float Frame[2] = { 15, 10 };//ゲーム自体のフレーム数(0が最速)/プレイヤー画像を次の画像に変えるフレーム数/ジャンプ台画像を次の画像に変えるフレーム数

int bw = 64;//プレイヤーの左右判定の確認用
int bh = 5;//プレイヤーの上判定の確認用




int Directionflg = 1;//画像の左右反転に使用
int playerimg[28];//プレイヤーの画像を格納する箱

int Mapimg[399];//切り取った画像の格納場所
bool fastset = false;//初回起動時のみ行う処理に使用

int img[] = { 0,0,0,0,0,0,0,0 };//プレイヤー



float Mapsize = 64;//あんま関係ない
static int Mapsizey = 10;//マップが何マスで構成されているかのカウント
static int Mapsizex = 300;//マップが何マスで構成されているかのカウント




int map[10][300] = { //この数字はMapsizex,yと同じ値にする(実際に描画する側)
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,215,216,216,217,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,235,236,236,236,236,237,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,235,236,236,236,236,236,236,236,236,236,237,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,235,239,  0,296,  0,  0,296,  0,219,237,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0   },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,235,236,236,237,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,235,236,236,236,236,236,236,237,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0   },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,195,276,276,276,276,277   },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,275,276,276,276,277,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,195,259,  0,  0,  0,  0,297   },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 44, 45, 46,  0,  0,275,276,276,276,277,  0,  0,  0,  0,  0,  0,295,  0,296,296,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,115,116,116,116,117,  0,  0,  0,115,116,116,116,117,  0,  0,115,116,116,116,117,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,275,276,276,276,277,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,275,277,  0,  0,  0,  0,  0,275,276,277,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,275,276,276,276,259,  0,  0,  0,  0,  0,297   },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,115,116,116,116,117,  0,  0,115,116,116,116,116,117,  0, 44, 45, 46,  0,  0,  0,  0,  0,  0,  0,295,  0,296,296,217,  0,  0,  0,  0,  0,  0,295,296,296,  0,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,135,136,136,136,137,  0,  0,  0,135,136,136,136,137,  0,  0,135,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,297,  0,  0,  0,  0,  0,295,  0,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,  0,  0,  0,  0,  0,  0,297   },
{  0,  0,  0,115,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,117,136,136,137,  0,  0,135,136,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,296,296,  0,279,276,276,276,276,276,276,259,  0,296,296,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,135,136,136,136,137,  0,  0,  0,135,136,136,136,137,  0,  0,135,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,297,  0,  0,  0,  0,  0,295,296,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,  0,  0,  0,  0,  0,  0,297   },
{  0,  0,  0,135,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,136,136,136,136,136,136,136,137,136,136,137,  0,  0,135,136,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,296,296,  0,296,296,  0,296,296,  0,296,296,296,  0,217,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,135,136,136,136,137,  0,  0,  0,135,136,136,136,137,  0,  0,135,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,297,  0,  0,278,  0,  0,  0,278,  0,  0,  0,278,  0,  0,278,  0,275,259,297,  0,  0,  0,  0,  0,295,  0,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,  0,  0,  0,  0,  0,  0,297   },
{  0,  0,  0,135,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,136,136,136,136,136,136,136,137,136,136,137,  0,  0,135,136,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,296,296,  0,296,296,  0,296,296,  0,296,296,  0,296,296,279,276,276,277,  0,  0,  0,  0,  0,  0,  0,  0,  0,135,136,136,136,137,  0,  0,  0,135,136,136,136,137,  0,  0,135,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,297,  0,  0,298,  0,  0,  0,298,  0,  0,  0,298,  0,  0,298,  0,295,296,297,  0,  0,  0,  0,  0,295,296,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,  0,  0,  0,  0,  0,  0,297   },
{  0,  0,  0,135,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,136,136,136,136,136,136,136,137,136,136,137,  0,  0,135,136,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,296,296,  0,296,296,  0,296,296,  0,296,296,296,  0,296,  0,296,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,135,136,136,136,137,  0,  0,  0,135,136,136,136,137,  0,  0,135,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,297,  0,  0,298,  0,  0,  0,298,  0,  0,  0,298,  0,  0,298,  0,295,  0,297,  0,  0,  0,  0,  0,295,  0,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,  0,  0,  0,  0,  0,  0,297   },

};

//シンプル床  115,6,7  135,6,7,
//115,116,116,116,117,

int Efemap[10][300] = { //この数字はMapsizex,yと同じ値にする(実際に描画する側)
{  0,  0,325,  0,  0,  0,  0,  0,  3,  0,  0,247,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,227,269,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,247,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,227,228,269,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,345,  0,  0,  0,  0,  0, 23,  0,  0,267,228,228,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 80,  0,  0,  0,  0, 80, 80,  0,  0, 80, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,267,228,269,  0,  0,  0,  0,  0,  0,  0,  0,267,228,228,269,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,  0,  0  },
{  0,  0,  0,  0,  0,  0,  0,  0, 43,  0,  0,  0,  0,  0, 19,166,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,320, 80,  0,  0,  0,  0, 80, 80,  0,  0, 80, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,185,  0,166,166,166,166,166,166,166,166,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 39,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  5,  0,  0,  0, 24, 25, 26,  0,  0,  0,  0, 40,  0,  0, 60,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 80,  0,  0,  0,  0, 80, 80,  0,  0, 80, 80,  0,  0,  0, 40,  0,  0,  0,  0,  0,  0,  0,  0,360,  0,  0,  0,  0,  0, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,381,  0,  0,  0,  0,183,165,  0,  0,  0,  0,  0, 40,  0,205,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,  0, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,186,  0,  0,  0, 37,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0, 24, 25, 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 80,  0,  0,  0,  0, 80, 80,  0,  0, 80, 80,  0,  0,  0,  0,  0,  0,  0,380,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,361,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,340,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 83,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,  0, 35,  0, 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,204,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 80, 18,  0,  0,165,  0,  0,  0,  0,  0,  0,100,  0,  0,  0,  0, 80, 80,  0,  0, 80, 80,227,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,183,183,183,183,183,183,183,183,183,183,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,100,100,  0,  0,100,100,247,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,180,181,181,181,181,181,181,181,181,182,  0,  0,  0,  0,  0,  0,  0,  0,165,  0,380,  0,165,  0,  0,  0,165,  0,380,165,  0,165,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,320,  0,  0,  0,227,229,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,228,228,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,165,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,228,228,228,  0,  0,  0,  0,  0,229,  0,  0,  0,  0,  0,  0,  0,200,  0,  0,  0,  0,  0,  0,  0,  0,202,227,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,  0,  0,115,116,116,116,117,  0,  0,  0,247,267,228,228,228,228,229,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,183,183,183,183,183,183,183,183,183,183,183,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  0,200,  0,  0,  0,  0,227,228,228,228,228,269,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,183,183,183,183,183,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,  0,  0,135,136,136,136,137,  0,  0,  0,247,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,250,251,251,251,251,251,251,251,251,251,252,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  0,200,  0,  0,  0,  0,247,  0,  0,  0,202,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,250,251,251,251,252,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },

};








/* 
int map[10][200] = { //この数字はMapsizex,yと同じ値にする(実際に描画する側)
{215,216,216,217,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,235,236,236,236,236,237,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,235,236,236,236,236,236,236,236,236,236,237,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,235,239,  0,296,  0,296,  0,219,237,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0   },
{235,236,236,237,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,235,236,236,236,236,236,237,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,195,276,276,276,276,277   },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,275,276,276,276,277,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,195,259,  0,  0,  0,  0,297   },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 44, 45, 46,  0,  0,275,276,276,276,277,  0,  0,  0,  0,  0,  0,295,  0,296,296,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,115,116,116,116,117,  0,  0,  0,115,116,116,116,117,  0,  0,115,116,116,116,117,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,275,276,276,276,277,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,275,277,  0,  0,  0,  0,  0,275,276,277,  0,  0,  0,  0,  0,  0,  0,  0,  0,275,276,276,276,276,259,  0,  0,  0,  0,  0,297   },
{  0,  0,  0,  0,  0,  0,115,116,116,116,117,  0,  0,115,116,116,116,116,117,  0, 44, 45, 46,  0,  0,  0,  0,  0,  0,  0,295,  0,296,296,217,  0,  0,  0,  0,  0,  0,295,296,296,  0,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,135,136,136,136,137,  0,  0,  0,135,136,136,136,137,  0,  0,135,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,297,  0,  0,  0,  0,  0,295,  0,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,297   },
{115,116,116,116,116,116,116,117,136,136,137,  0,  0,135,136,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,296,296,  0,279,276,276,276,276,276,276,259,  0,296,296,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,135,136,136,136,137,  0,  0,  0,135,136,136,136,137,  0,  0,135,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,297,  0,  0,  0,  0,  0,295,296,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,297   },
{135,136,136,136,136,136,136,137,136,136,137,  0,  0,135,136,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,296,296,  0,296,296,  0,296,296,  0,296,296,296,  0,217,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,135,136,136,136,137,  0,  0,  0,135,136,136,136,137,  0,  0,135,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,297,  0,  0,278,  0,  0,  0,278,  0,  0,  0,278,  0,  0,278,  0,275,259,297,  0,  0,  0,  0,  0,295,  0,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,297   },
{135,136,136,136,136,136,136,137,136,136,137,  0,  0,135,136,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,296,296,  0,296,296,  0,296,296,  0,296,296,  0,296,296,279,276,276,277,  0,  0,  0,  0,  0,  0,  0,  0,  0,135,136,136,136,137,  0,  0,  0,135,136,136,136,137,  0,  0,135,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,297,  0,  0,298,  0,  0,  0,298,  0,  0,  0,298,  0,  0,298,  0,295,296,297,  0,  0,  0,  0,  0,295,296,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,297   },
{135,136,136,136,136,136,136,137,136,136,137,  0,  0,135,136,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,296,296,  0,296,296,  0,296,296,  0,296,296,296,  0,296,  0,296,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,135,136,136,136,137,  0,  0,  0,135,136,136,136,137,  0,  0,135,136,136,136,137,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,297,  0,  0,298,  0,  0,  0,298,  0,  0,  0,298,  0,  0,298,  0,295,  0,297,  0,  0,  0,  0,  0,295,  0,297,  0,  0,  0,  0,  0,  0,  0,  0,  0,295,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,297   },

};

//シンプル床  115,6,7  135,6,7,
//115,116,116,116,117,

int Efemap[10][200] = { //この数字はMapsizex,yと同じ値にする(実際に描画する側)
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,227,269,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,247,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 80,  0,  0,  0,  0, 80, 80,  0,  0, 80, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,267,228,269,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,  0  },
{ 19,166,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,320, 80,  0,  0,  0,  0, 80, 80,  0,  0, 80, 80,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,185,  0,166,166,166,166,166,166,166,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{ 39,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  5,  0,  0,  0, 24, 25, 26,  0,  0,  0,  0, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 80,  0,  0,  0,  0, 80, 80,  0,  0, 80, 80,  0,  0,  0, 40,  0,  0,  0,  0,  0,  0,  0,  0,360,  0,  0,  0,  0,  0, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,381,  0,  0,  0,  0,183,165,  0,  0,  0,  0,320,  0,  0,205,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,186,  0,  0,  0, 37,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0, 24, 25, 26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 80,  0,  0,  0,  0, 80, 80,  0,  0, 80, 80,  0,  0,  0,  0,  0,  0,  0,380,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,361,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,340,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,204,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,165,  0,  0,  0,  0,  0,  0,100,  0,  0,  0,  0, 80, 80,  0,  0, 80, 80,227,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,183,183,183,183,183,183,183,183,183,183,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,100,100,  0,  0,100,100,247,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,180,181,181,181,181,181,181,181,181,182,  0,  0,  0,  0,  0,  0,  0,  0,165,  0,380,  0,165,  0,  0,  0,165,  0,380,165,  0,165,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{228,228,228,228,228,229,  0,  0,  0,  0,  0,228,228,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,165,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,228,228,228,  0,  0,  0,  0,  0,229,  0,  0,  0,  0,  0,  0,  0,200,  0,  0,  0,  0,  0,  0,  0,  0,202,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,183,183,183,183,183,183,183,183,183,183,183,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  0,200,  0,  0,  0,  0,  0,  0,  0,  0,202,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,183,183,183,183,183,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },
{  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,250,251,251,251,251,251,251,251,251,251,252,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  0,200,  0,  0,  0,  0,  0,  0,  0,  0,202,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,250,251,251,251,252,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0  },

};*/
//int Ecnt = 0;//データを管理するために付与する番号
/*
int ex[100] = { 0 };
int ey[100] = { 0 };
int ew[100] = { 1 };
int eh[100] = { 32 };
*/
int JanpdaiPower = 20;//ジャンプ台に使用する力
//座標の保管、番号の管理
int Efecnt = 0;

float Efex[200] = {0};
float Efey[200] = { 0 };
float Efew[200] = { 0 };
float Efeh[200] = { 0 };

//ここまで
//ｊもEfeに適用させたい
//アニメーションを再生するために画像データを取得する
int Efemapy[200] = { 0 };//左上X座標の格納場所
int Efemapx[200] = { 0 };//左上Y座標の格納場所
int EfeAnimecnt[200] = { 0 };//アニメのフレームをカウントする
int EfeNum[200] = { 0 };//下記EfeAnimeのどれを使用するかの選択
int EfeAnimeNumber[200] = { 0 };//アニメーションのn枚目の描画に使用
int aaa = 0; 
int EfeAnime[13][15] = { //アニメ画像の保存+敵の種類をこの番号で識別している
{ 999,999,999,999,999 },//0.決まってない
{ 165,163,164,165,999 },//1.ばね
{ 340,341,342,343,999 }, //2,敵(シンプル)
{ 360,361,362,363,999, 364,  365, 366,999}, //3,敵(左右移動＋踏んだらジャンプ)
{380, 381, 999},//4,敵(プロペラ)
{80, 999},//5,はしご(アニメーションはない)
{320,321,322,323,999,324,324,999},//6,敵(左右移動+踏んだら倒せる)
{40,41,42,999},//7,ハート
{ 361,362,363,360,999, 364,  365, 366,999},//8,敵2(左右移動+踏んだらジャンプ)
{ 63,999},//9,移動床
{381, 380, 999},//10,敵2(プロペラ)
{56,58,59,59,59,59,59,59,59,59},//11ゴール扉
{83,999}//12,移動床2
};
int EfeFrame[200] = { 0 }; //g増を何フレームで書き換えるか(一枚絵の場合は0)

int EfeAnimeflg[200] = { 0 };//配列のどの画像のアニメを変更させるか

int EfeAnimeFrame[200] = { 0 };//敵の反復運動のカウント

bool EfeLoopflg[200] = {0};//0ならアニメを再生しない,1なら常に再生＆ループ
int  EfeSpeed[200] = { 0 };//敵の移動速度
bool EfeXorY[200] = { 0 };//trueなら左右移動、falseなら上下移動
int EfeMoveFrame[200] = { 0 };//画像を何フレームで描画するか(途中で値が変わったりする)
int SetEfeFrame[200] = { 0 };//画像を何フレームで描画するかの初期値
bool Moveflg = 0;//ウ合意てよいかのフラグ


int GameMode = 1;//1,タイトル2,プレイ画面3,ED
bool Gollflg = false;//プレイヤーを動けなくしたり、プレイヤーを隠す

int GameStartAnimecnt = 0;//ゴールしてか数秒後にタイトルに戻るカウント

int totalMisscnt = 0;//何回ミスしたかのカウント

float StartTime = 0;//ゲームが始まった時間を記録
float ClearTime = 0;//ゲームが始まった時間から現在の時間を引いてプレイタイムを計測

bool GameStart = false;//タイトルでボタンが押されたら

bool FirstStart = false;//初回起動時ならデータをリセットする

int Risetcnt = 0;//特定のボタン長押しでタイトルに戻るカウント


//void aaaa(int);

#endif