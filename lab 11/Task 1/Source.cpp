#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Trapezium.h"
using namespace std;
int main()
{
	Shape* shape;
	Square obj(10);
	Rectangle obj1(10, 7);
	Trapezium obj2(5, 10, 15, 5);

	obj.Area();
	obj1.Area();
	obj2.Area();
	shape = &obj;
	shape->Area();
	obj.Perameter();
	obj1.Perameter();
	obj2.Perameter();
	shape = &obj1;
	shape->Perameter();








	system("pause");
	return 0;
}