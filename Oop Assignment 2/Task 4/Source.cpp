#include <iostream>
#include "LibraryBook.h"
#include "Date.h"
#include "Name.h"
using namespace std;
int main()
{
	char* temp1 = new char[10]{"4Ab3"};
	char* temp2 = new char[10]{"Devil"};
	char* temp3 = new char[10]{"abc345"};
	char* temp4 = new char[10]{"DareDevil"};
	char* temp5 = new char[10]{"Umair"};
	char* temp7 = new char[10]{ "Aamir" };
	char* temp6 = new char[10]{"Abbas"};

	LibraryBook obj2(temp1, temp2, 1);
	LibraryBook obj1(obj2);

	obj1.Set_Isbn(temp3);
	obj1.Set_Title(temp4);
	obj1.Set_Quantity(3);
	cout << "ISBN #: "<< obj1.Get_Isbn();
	cout << endl;
	cout << "Title: "<<obj1.Get_Title();
	cout << endl;
	cout << "Quantity: "<<obj1.Get_Quantity();
	cout << endl;
	
	Name n1;
	obj1.Author(n1);
	Name n2;
	obj1.Publisher(n2);
	Date d;
	obj1.LastIssue(d);

	system("pause");
	return 0;
}