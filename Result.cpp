#include "Result.h"

void Result::SetInit()
{
	x_ = 0;
	y_ = 0;
	w_ = 1280;
	h_ = 720;
}

void Result::SetUpdate()
{

}

void Result::SetDraw()
{
	Novice::DrawBox(x_, y_, 1280, 720, 0.0f, WHITE, kFillModeSolid);
}
