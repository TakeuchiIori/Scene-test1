#include "InGame.h"

void InGame::SetInit()
{
	player_->SetInit();
	enemy_->SetInit();
	x_ = 0;
	y_ = 0;
	w_ = 1280;
	h_ = 720;
	isDed = 0;
	Background[1] = { Novice::LoadTexture("./image/Background1.png") };
}

void InGame::SetUpdate()
{
	player_->Update();
	enemy_->SetUpdate();
	enemy_->SetColision(player_->bul_->bul_.x, player_->bul_->bul_.y, player_->bul_->bul_radius_);
	enemy_->PlayerColision(player_->Getpos_().x, player_->Getpos_().y, player_->Getradius_());
	if (enemy_->GetisAlive_() == 0) {
		isDed = 1;
	}
}

void InGame::SetDraw()
{
	Novice::DrawSprite(x_, y_, Background[0], 1.0f, 1.0f, 0.0f, WHITE);
	player_->SetDraw();
	enemy_->SetDraw();
}
