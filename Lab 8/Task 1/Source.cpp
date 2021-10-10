#include <iostream>
#include "SalonEmployee.h"
using namespace std;

void Print(SalonEmployee obj)
{
	cout << "Id: " << obj.GetId() << endl;
	cout << "Name: " << obj.GetName() << endl;
	cout << "Gender: " << obj.GetGender() << endl;
	cout << "Contact: " << obj.GetContact() << endl;
	cout << "Salary: " << obj.GetSalary() << endl;
	cout << "Shift: " << obj.GetShift() << endl;
}

int main()
{
	int id = 0;
	cout << "Enter Id: " << endl;
	cin >> id;
	char* name = new char[20];
	cout << "Enter Name: " << endl;
	cin >> name;
	char* gender = new char[20];
	cout << "Enter Gender: " << endl;
	cin >> gender;
	char* contact = new char[20];
	cout << "Enter Contact Number: " << endl;
	cin >> contact;
	double salary;
	cout << "Enter Salary: " << endl;
	cin >> salary;
	char* shift = new char[20];
	cout << "Enter Shift: " << endl;
	cin >> shift;

	SalonEmployee obj(id,name,gender,contact,salary,shift);
	SalonEmployee obj1(obj);
	obj1.SetId(id);
	obj1.SetName(name);
	obj1.SetGender(gender);
	obj1.SetContact(contact);
	obj1.SetSalary(salary);
	obj1.SetShift(shift);

	Print(obj1);




	system("pause");
	return 0;
}