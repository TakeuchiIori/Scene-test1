#include "Title.h"

void Title::SetInit()
{
	x_ = 0;
	y_ = 0;
	w_ = 1280;
	h_ = 720;
	Background[10] = { Novice::LoadTexture("./image/Title.png") };

}
void Title::SetUpdate()
{
	
}

void Title::SetDraw()
{
	Novice::DrawSprite(x_, y_, Background[0], 1.0f, 1.0f, 0.0f, WHITE);
}
