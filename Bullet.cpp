#include "Bullet.h"
void Bullet::Inti() {
		bul_.x = 0;
		bul_.y = 0;
		bul_speed_ = 5.0f;
		bul_radius_ = 5.0f;
		isShot_ = false ;
}
void Bullet::Update() {
		if (isShot_ == true) {
			bul_.y -= bul_speed_;
		}
		if (bul_.y <= 0) {
			isShot_ = false;
		}
}
void Bullet::Draw() {
		if (isShot_ == true) {
			Novice::DrawEllipse((int)bul_.x, (int)bul_.y, (int)bul_radius_,
				(int)bul_radius_, 1.0f, RED, kFillModeSolid);
		}
}