#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle():width(0), height(0)
{
}

Rectangle::Rectangle(const float& width, const float& height):width(width), height(height)
{
}

void Rectangle::Draw()
{
	printf("��`�̖ʐς�%fcm�������[�g��\n", Size());
}

float Rectangle::Size()
{
	return width * height;
}