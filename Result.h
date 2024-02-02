#pragma once
#include "BaseScene.h"
class Result 
{
private:
	int x_;
	int y_;
	int w_;
	int h_;

public:
	int Getx_() { return x_; };
	int Gety_() { return y_; };
	int Getw_() { return w_; };
	int Geth_() { return h_; };
	void SetInit();
	void SetUpdate();
	void SetDraw();
};