#pragma once
#include "Shape.h"
class Trapezium:public Shape
{
private:
	float base;
	float height;
	float side;
public:
	Trapezium();
	Trapezium(float,float,float,float);
	void Area();
	void Perameter();
};

