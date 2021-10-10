#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape()
{
	length = 0.0;
}
Shape::Shape(float l)
{
	length = l;
}
void Shape::Area()
{
	cout << "Virtual Area." << endl;
}
void Shape::Perameter()
{
	cout << "Virtual Perameter." << endl;
}