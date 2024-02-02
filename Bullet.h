#pragma once
#include "Vector2.h"
#include <Novice.h>

class Bullet
{
public://メンバ変数
	
	Vector2 bul_;
	float bul_speed_;
	float bul_radius_;
	bool isShot_;

public://メンバ関数
	void Inti();
	void Update();
	void Draw();
};

