#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle():Shape()
{
	width = 0.0;
}
Rectangle::Rectangle(float w, float l):Shape(l)
{
	width = w;
}
void Rectangle::Area()
{
	cout << "Area of Rectangle: " << length * width << endl;
}
void Rectangle::Perameter()
{
	cout << "Perameter Of Rectangle: " << 2*(length + width) << endl;
}
