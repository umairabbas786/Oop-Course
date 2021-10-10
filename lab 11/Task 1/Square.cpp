#include "Square.h"
#include <iostream>
using namespace std;

Square::Square():Shape()
{}
Square::Square(float l):Shape(l)
{}
void Square::Area()
{
	cout << "Area Of Square: " << length * length << endl;
}
void Square::Perameter()
{
	cout << "Perameter Of Square: " << 4 * length << endl;
}