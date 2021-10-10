#include "Trapezium.h"
#include <iostream>
using namespace std;

Trapezium::Trapezium():Shape()
{
	base = 0.0;
	height = 0.0;
	side = 0.0;
}
Trapezium::Trapezium(float b, float h, float s, float l) :Shape(l)
{
	base = b;
	height = h;
	side = s;
}
void Trapezium::Area()
{
	float num = 0.0, den = 0.0;
	num = length * base;
	den = 2;
	cout << "Area of trapezium: " << (num / den) * height << endl;
}
void Trapezium::Perameter()
{
	cout << "Perameter of Trapezium: " << length + base + height + side << endl;
}
