#include"IShape.h"
#include"Rectangle.h"
#include"Circle.h"
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include<memory>

int main()
{
	std::vector<std::unique_ptr<IShape>>shapes;

	shapes.push_back(std::move(std::make_unique<Circle>(5.0f)));

	shapes.push_back(std::move(std::make_unique<Rectangle>(5.0f, 10.0f)));

	for (std::unique_ptr<IShape>& shape : shapes)
	{
		shape->Size();
	}

	for (std::unique_ptr<IShape>& shape : shapes)
	{
		shape->Draw();
	}

	system("pause");

	return 0;
}