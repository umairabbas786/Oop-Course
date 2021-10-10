#include <iostream>
#include "DynamicArray.h"
using namespace std;
int main()
{
	DynamicArray obj1;
	obj1.InsertValueAtEnd(1);
	obj1.InsertValueAtEnd(13);
	obj1.InsertValueAtEnd(134);
	obj1.InsertValueAtEnd(11);
	obj1.Print(); // 1,13,134,11
	DynamicArray obj2(obj1), obj3 = obj1;
	obj2.Print(); // 1,13,134,11
	obj3.Print(); // 1,13,134,11
	obj2.InsertValueAtEnd(200);
	obj1.InsertValueAtEnd(2);
	obj3.DeleteValue(13);
	obj1.Print(); // 1,13,134,11,2
	obj2.Print(); // 1,13,134,11,200
	obj3.Print(); // 1,134,11
	obj1.Add(1);
	obj2.Subtract(3);
	obj3.Multiply(2);
	obj1.Print(); // 2,14,135,12,3
	obj2.Print(); // -2,10,131,8,197
	obj3.Print(); // 2,268,22
	obj1.Subtract(1);
	obj2.Add(3);
	obj1.Print(); // 1,13,134,11,2
	obj2.Print(); // 1,13,134,11,200
	DynamicArray obj4 = obj1.MergeArray(obj2);
	obj4.Print(); // 1,13,134,11,2,200




	system("pause");
	return 0;
}