#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
	name = nullptr;
	cnic = nullptr;
	address = nullptr;
}
Person::Person(char* n, char* c, char* a)
{
	Strcopy(name, n);
	Strcopy(cnic, c);
	Strcopy(address, a);
}
Person::Person(const Person& ref)
{
	Strcopy(name, ref.name);
	Strcopy(cnic, ref.cnic);
	Strcopy(address, ref.address);
}
void Person::Set_Name(char* n)
{
	if (name) {
		delete[] name;
		name = nullptr;
	}
	Strcopy(name, n);
}
void Person::Set_Cnic(char* c)
{
	if (cnic) {
		delete[] cnic;
		cnic = nullptr;
	}
	Strcopy(cnic, c);
}
void Person::Set_Address(char* a)
{
	if (address) {
		delete[] address;
		address = nullptr;
	}
	Strcopy(address, a);
}
char* Person::Get_Name()
{
	char* temp;
	temp = new char[Strlen(name) + 1];
	Strcopy(temp, name);
	return temp;
}
char* Person::Get_Cnic()
{
	char* temp;
	temp = new char[Strlen(cnic) + 1];
	Strcopy(temp, cnic);
	return temp;
}
char* Person::Get_Address()
{
	char* temp;
	temp = new char[Strlen(address) + 1];
	Strcopy(temp, address);
	return temp;
}
void Person::Display()
{
	cout << "Name: " << name << endl;
	cout << "Cnic: " << cnic << endl;
	cout << "Address: " << address << endl;
}
Person::~Person()
{
	delete[] name;
	name = nullptr;
	delete[] cnic;
	cnic = nullptr;
	delete[] address;
	address = nullptr;
}