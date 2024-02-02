#include "Player.h"
void Player::SetInit() {
	
	bul_->Inti();
	pos_.x = 640.0f;
	pos_.y = 360.0f;
	speedX_ = 6.0f;
	speedY_ = 6.0f;
	radius_ = 25.0f;
}

void Player::SetMove()
{
	if (Novice::CheckHitKey(DIK_W)) {
		pos_.y -= speedY_;
	}
	if (Novice::CheckHitKey(DIK_S)) {
		pos_.y += speedY_;
	}
	if (Novice::CheckHitKey(DIK_A)) {
		pos_.x -= speedX_;
	}
	if (Novice::CheckHitKey(DIK_D)) {
		pos_.x += speedX_;
	}

}
void Player::SetShot()
{
	if (Novice::CheckHitKey(DIK_SPACE) && bul_->isShot_ == false) {
		bul_->bul_.x = pos_.x;
		bul_->bul_.y = pos_.y - 20.0f;
		bul_->isShot_ = true;
	}
}
void Player::Update() {
	 SetMove();
	bul_->Update();
	 SetShot();
}



void Player::SetDraw() {
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y,
		(int)radius_, (int)radius_, 0.0f, BLUE, kFillModeSolid);
	bul_->Draw();
}