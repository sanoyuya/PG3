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
	printf("�~�̖ʐς�%f�������[�g��\n", Size());
}

float Circle::Size()
{
	return radius * radius * PI;
}