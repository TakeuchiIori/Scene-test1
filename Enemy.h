#pragma once
#include "Player.h"
class Enemy
{
private://メンバ変数
	Vector2 ene_pos_ = { 0.0f,0.0f };
	Vector2 save_pos_ = { 0.0f,0.0f };
	float ene_speedX_;
	float ene_speedY_;
	float ene_radius_;
	float frame_;
	float keep_speed_;
	bool isAlive_;

public://メンバ関数 : アクセッサ
	Vector2 Getene_pos_() { return ene_pos_; }
	Vector2 Getsave_pos_() { return save_pos_; }
	float Getsene_peedX_() { return ene_speedX_; }
	float Getene_speedY_() { return ene_speedY_; }
	float Getene_radius_() { return ene_radius_; }
	float Getframe_() { return frame_; }
	float Getkeep_speed_() { return keep_speed_; }
	bool GetisAlive_() { return isAlive_; }
	bool isChangeScene_;

	void SetInit();
	void SetUpdate();
	void SetColision(float bX_,float bY_,float radius_);
	void SetDraw();
};

