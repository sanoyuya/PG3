#include "Circle.h"
#include <iostream>

Circle::Circle()
{
}

Circle::Circle(const float& radius)
{
}

void Circle::Draw()
{
	printf("‰~‚Ì–ÊÏ‚Í%f•½•ûƒ[ƒgƒ‹\n", Size());
}

float Circle::Size()
{
	return radius * radius * PI;
}