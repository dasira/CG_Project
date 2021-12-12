#include "pch.h"

float clamp(float min, float mid, float max)
{
	return max > mid ? ((min < mid) ? mid : min) : max;
}

float radian(float angle)
{
	return  angle * 3.141592 / 180;
}
