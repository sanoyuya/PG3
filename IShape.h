#pragma once
class IShape
{
public:
	virtual ~IShape() = default;
	virtual void Draw() = 0;
	virtual float Size() = 0;
};