#pragma once
#include "Shape.h"
class Rectangle:public Shape
{
private:
	float width;
public:
	Rectangle();
	Rectangle(float,float);
	void Area();
	void Perameter();
};

