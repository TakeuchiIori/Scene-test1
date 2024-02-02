#pragma once
#include <Novice.h>
#include "Vector2.h"
#include "Bullet.h"
class Player
{
private://メンバ変数
	Vector2 pos_ = { 0.0f,0.0f, };
	float speedX_;
	float speedY_;
	float radius_;

	
public://メンバ関数 : アクセッサ
	Vector2 Getpos_() { return pos_; }
	float GetspeedX_() { return speedX_; }
	float getspeedY_() { return speedY_; }
	float Getradius_() { return radius_; }
	void SetInit();
	void SetMove();
	void SetShot();
	void Update();
	void SetDraw();
	Bullet* bul_ = new Bullet;
};

