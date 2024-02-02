#include "Enemy.h"
void Enemy::SetInit(){
	ene_pos_.x = 50.0f;
	ene_pos_.y = 100.0f;
	ene_speedX_ = 5.0f;
	ene_speedY_ = 5.0f;
	ene_radius_ = 30.0f;
	frame_ = 0.0f;
	keep_speed_ = 0.0f;
	isAlive_ = true;
	isChangeScene_ = false;
}

void Enemy::SetUpdate() {
	ene_pos_.x  += ene_speedX_;
	if (ene_pos_.x > 1250.0f || ene_pos_.x < 30.0f) {
		 ene_speedX_ = -ene_speedX_;
		 keep_speed_ = ene_speedX_;
	}
}
void Enemy::SetColision(float bX_, float bY_, float radius_) {
	//弾と敵の当たり判定
	float distX = ene_pos_.x - bX_;
	float distY = ene_pos_.y - bY_;
	float dist = (distX * distX) + (distY * distY);
	float rad = ene_radius_ + radius_;
	//敵が生きていたら
	if (isAlive_ == true) {
		if (dist <=  rad * rad) {
			isAlive_ = false;
			ene_speedX_ = 0.0f;
		}
	}
	//敵が死んだら
	if (isAlive_ == false) {
		save_pos_.x = ene_pos_.x;
		save_pos_.y = ene_pos_.y;
		frame_++;
		isChangeScene_ = false;
		if (frame_ >= 120.0f) {
			isAlive_ = true;
			frame_ = 0.0f;
			if (keep_speed_ >= 0) {
				ene_speedX_ = 5.0f;
			}
			else if (keep_speed_ <= 0) {
				ene_speedX_ = -5.0f;
			}
		}
	}
}
void Enemy::SetDraw() {
	if (isAlive_ == true) {
		Novice::DrawEllipse((int)ene_pos_.x, (int)ene_pos_.y,
			(int)ene_radius_, (int)ene_radius_, 0.0f, BLACK, kFillModeSolid);
	}
	if(isAlive_ == false) {
		Novice::DrawEllipse((int)save_pos_.x, (int)save_pos_.y,
			(int)ene_radius_, (int)ene_radius_, 0.0f, 0xFF55F5FF, kFillModeWireFrame);
	}
}