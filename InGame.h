#pragma once
#include "BaseScene.h"
#include "Player.h"
#include "Enemy.h"
class InGame 
{
private:
	Player* player_ = new Player;
	Enemy* enemy_ = new Enemy;
	int x_;
	int y_;
	int w_;
	int h_;
	int isDed;
	int Background[1] = { Novice::LoadTexture("./image/Background1.png") };

public:
	int Getx_() { return x_; };
	int Gety_() { return y_; };
	int Getw_() { return w_; };
	int Geth_() { return h_; };
	int GetisDed() { return isDed; };
	void SetInit();
	void SetUpdate();
	void SetDraw();
};