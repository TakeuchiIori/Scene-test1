#pragma once
#include "BaseScene.h"
#include <list>
class Title 
{
private:
	int x_;
	int y_;
	int w_;
	int h_;

	int Background[10] = { Novice::LoadTexture("./image/Title.png"),Novice::LoadTexture("./image/Background1.png"), };
public:
	int Getx_() { return x_; };
	int Gety_() { return y_; };
	int Getw_() { return w_; };
	int Geth_() { return h_; };
	void SetInit();
	void SetUpdate();
	void SetDraw();

};

