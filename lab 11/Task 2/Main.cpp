#include <iostream>
#include "Person.h"
#include "Account.h"
#include "Client.h"
#include "Manager.h"
using namespace std;
Client* Manager::clientarray;
int Manager::totalclients;
Manager* Manager::instance;
int main()
{
	char* name = new char[6]{ "Umair" };
	char* cnic = new char[16]{ "38404-2242015-3" };
	char* address = new char[7]{ "Lahore" };
	char* accnum = new char[5]{ "786U" };
	char* acctype = new char[7]{ "saving" };
	char* accnum1 = new char[5]{ "1E4U" };
	char* acctype1 = new char[8]{ "Current" };
	char* employ = new char[6]{ "Blank" };

	cout << endl;

	Account obj1;
	obj1.Set_Account_Number(accnum);
	obj1.Set_Account_Type(acctype);
	obj1.Set_Balance(3000);
	obj1.Display();

	cout << endl;

	Client a, b, c;
	a.Set_Name(name);
	a.Set_Cnic(cnic);
	a.Set_Address(address);
	a.Set_Employ(employ);
	b.Set_Name(name);
	b.Set_Cnic(cnic);
	b.Set_Address(address);
	b.Set_Employ(employ);
	c.Set_Name(name);
	c.Set_Cnic(cnic);
	c.Set_Address(address);
	c.Set_Employ(employ);
	Client* arr = new Client[1]{ a };
	Client* arr1 = new Client[1]{ b };
	Client* arr2 = new Client[1]{ c };

	Client obj2;
	obj2.Set_Name(name);
	obj2.Set_Cnic(cnic);
	obj2.Set_Address(address);
	obj2.Set_Employ(employ);
	obj2.Update_Account_Info(accnum1, acctype1, 8000);
	obj2.Display();
	obj2.Deposit(5000);

	cout << endl;
	cout << "Updated Account: " << endl;
	obj2.ref.Display();
	cout << endl;

	Manager obj3;
	cout << "Manager Class: " << endl;
	obj3.Set_Name(name);
	obj3.Set_Cnic(cnic);
	obj3.Set_Address(address);
	obj3.Add_Client(arr);
	obj3.Add_Client(arr2);
	obj3.Display();
	obj3.Add_Client(arr1);
	obj3.Display();



	system("pause");
	return 0;
}