#pragma once
#include <stdio.h >
#include <Novice.h>
#include <clamp.h>

unsigned int GetColor(int red ,int green,int blue,int alpha) {


	
	int xred =  clamp( red, 0, 255) << 24;
	int xgreen = clamp(green, 0, 255) << 16;
	int xblue = clamp(blue, 0, 255) << 8;
	int xalpha = clamp(alpha, 0, 255);

	return xred + xgreen + xblue + xalpha;

}
