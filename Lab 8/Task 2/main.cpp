#include <iostream>
#include "HugeInteger.h"
using namespace std;
int main()
{
	HugeInteger obj1;
	HugeInteger obj2;
	HugeInteger obj3;
	HugeInteger obj4;

	cout << "Input First Object: " << endl;
	cin >> obj1;
	cout << "Input Second Object: " << endl;
	cin >> obj2;
	cout << "First Object is: ";
	cout << obj1;
	cout << endl;
	cout << "Second Object is: ";
	cout << obj2;
	cout << endl;

	cout << "==> Performing Centain Operations <==" << endl;
	cout << "Addition of 2 objects: " << endl;
	obj3 = obj1 + obj2;
	cout << obj3 << endl;
	cout << "Substraction of 2 objects: " << endl;
	obj3 = obj1 - obj2;
	cout << obj3 << endl;

	if ((obj1 == obj2)==true) {
		cout << "Objects Are Equal" << endl;
	}
	else if ((obj1 > obj2) == true) {
		cout << "Object 1 is Greater Than Object 2" << endl;
	}
	else if ((obj1 < obj2) == true) {
		cout << "Object 2 is Greater Than Object 1" << endl;
	}
	else if ((obj1 >= obj2) == true) {
		cout << "Object 1 is Greater Than or Equal To Object 2" << endl;
	}
	else if ((obj1 <= obj2) == true) {
		cout << "Object 2 is Greater Than or Equal To Object 2" << endl;
	}
	else if ((obj1 != obj2) == true) {
		cout << "Objects Are not Equal" << endl;
	}

	cout << endl;
	obj1 = obj2;
	cout << "After Assignment Operator object 1: " << obj1 << endl;
	obj1 += obj2;
	cout << "After Addition Assignment Operator: " << obj1 << endl;
	cout << "Increment obj1" << endl;
	obj1++;
	cout << "After Increment Object 1: " << obj1 << endl;
	cout << "decrement object 2: " << endl;
	obj2--;
	cout << "After decrement Object 2: " << obj2 << endl;

	system("pause");
	return 0;
}