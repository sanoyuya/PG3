#pragma once
#include "IShape.h"

class Circle:public IShape
{
private:

	float radius;
	const float PI = 3.141592654f;

public:

	Circle();
	Circle(const float& radius);
	void Draw() override;
	float Size() override;

};