#include <iostream>
#include "Time.h"
using namespace std;
int main()
{
	char* temp = new char[3]{ "pm" };
	Time obj1; //default constructor
	Time obj2(12, 13,14); //parameterized constructor
	Time obj3(obj2); //copy constructor
	char* t;
	int h, m, s;
	cout << "Enter Hours: ";
	cin >> h;
	cout << endl;
	cout << "Enter Minutes: ";
	cin >> m;
	cout << endl;
	cout << "Enter Seconds: ";
	cin >> s;
	cout << endl;
	if (!obj1.InputTime(h, m, s)) {
		obj1.InputCompleteTime(23, 40, 56);
	}
	obj1.CopyTime(obj1);
	obj1.GetTime();
	obj1.RetrieveTime(h, m, s,t);
	obj1.ShowTime();
	if (obj1.IsEqual(obj2) == true) {
		cout << "Time is Equal" << endl;
	}
	else {
		cout << "Time is Not Equal" << endl;
	}
	obj1.~Time();

	system("pause");
	return 0;
}