#include <iostream>
#include "Name.h"
using namespace std;

int NameCompare(Name name1, Name name2) {
	int len1 = name1.NameLength();
	int len2 = name2.NameLength();
	int minlen = 0;
	if (len1 < len2) {
		minlen = len1;
	}
	else {
		minlen = len2;
	}

	if (len1 > len2) {
		return 1;
	}
	else if (len1 == len2) {
		for (int i = 0; i < minlen; i++) {
			if (name1.Fullname()[i] > name2.Fullname()[i]) {
				return 1;
				break;
			}
			else if (name1.Fullname()[i] < name2.Fullname()[i]) {
				return -1;
				break;
			}
			else {
				return 0;
			}
		}
	}
	else {
		return 1;
	}
}

int main()
{
	char* fname = new char[20];
	cout << "Enter First Name: " << endl;
	cin >> fname;
	char* lname = new char[20];
	cout << "Enter Last Name: " << endl;
	cin >> lname;
	Name obj(fname, lname);
	Name obj2(obj);
	Name obj3;
	obj3.Set_FirstName(fname);
	obj3.Set_LastName(lname);
	cout << "First Name: " << obj3.Get_FirstName() << endl;
	cout << "Last Name: " << obj3.Get_LastName() << endl;
	cout << "NAme LEngth: " << obj3.NameLength() << endl;
	obj3.CamelCase();
	cout << "Name After Camel Case: " << obj3.Get_FirstName() << " " << obj3.Get_LastName() << endl;
	obj3.ToUpper();
	cout << "Name in Upper Case: " << obj3.Get_FirstName() << " " << obj3.Get_LastName() << endl;
	obj3.ToLower();
	cout << "Name in Lower Case: " << obj3.Get_FirstName() << " " << obj3.Get_LastName() << endl;
	obj3.SwapNames();
	cout << "After Swapping: " << endl;
	cout << "first name: " << obj3.Get_FirstName() << endl;
	cout << "last name: " << obj3.Get_LastName() << endl;
	obj3.SwapNames();
	cout << "full name is: " << obj3.Fullname() << endl;

	Name name1, name2;
	cout << "==> For Name Comparison Lexicographicallyn <==" << endl;
	cout << "Enter Name 1" << endl;
	char* arr1 = new char[20];
	cout << "Enter First Name: " << endl;
	cin >> arr1;
	char* arr2 = new char[20];
	cout << "Enter Second Name: " << endl;
	cin >> arr2;

	name1.Set_FirstName(arr1);
	name1.Set_LastName(arr2);

	cout << "Enter Name 1" << endl;
	char* arr3 = new char[20];
	cout << "Enter First Name: " << endl;
	cin >> arr3;
	char* arr4 = new char[20];
	cout << "Enter Second Name: " << endl;
	cin >> arr4;

	name2.Set_FirstName(arr3);
	name2.Set_LastName(arr4);

	if (NameCompare(name1, name2) == 0) {
		cout << "Both Names Are Identical" << endl;
	}
	else if (NameCompare(name1, name2) > 0) {
		cout << "name1 is Lexicographically After name2" << endl;
	}
	else if (NameCompare(name1, name2) < 0) {
		cout << "name1 is Lexicographically Before name2" << endl;
	}


	system("pause");
	return 0;
}