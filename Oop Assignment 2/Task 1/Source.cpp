#include <iostream>
#include "Date.h"
using namespace std;
int main()
{
	Date obj1; 
	Date obj2(10, 3, 2010); //parameterized constructor
	Date obj3(obj2); //copy constructor
	int d, m, y;
	cout << "Enter Day: ";
	cin >> d;
	cout << endl;
	cout << "Enter Month: ";
	cin >> m;
	cout << endl;
	cout << "Enter Year: ";
	cin >> y;
	cout << endl;
	if (!obj1.InputDate(d, m, y)) {
		obj1.InputCompleteDate(10, 03, 2000);
	}
	obj1.CopyDate(obj2);
	obj1.GetDate();
	obj1.RetrieveDate(d, m, y);
	cout << "After Retrieving Date is: " << obj1.Get_Day() << "-" << obj1.Get_Month() << "-" << obj1.Get_Year() << endl;
	obj1.ShowDate();
	if (obj1.IsEqual(obj2) == true) {
		cout << "Dates Are Equal" << endl;
	}
	else {
		cout << "Dates Are Not Equal" << endl;
	}
	if (obj1.IsLeapYear() == true) {
		cout << y << " Is A Leap Year" << endl;
	}
	else {
		cout << y << " Is Not a Leap Year" << endl;
	}
	obj1.~Date();

	system("pause");
	return 0;
}