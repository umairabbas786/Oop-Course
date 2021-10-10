#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
	name = nullptr;
	birth_year = 0;
}
Person::Person(char* n, int y)
{
	Strcopy(name, n);
	birth_year = y;
}
void Person::Set_Name(char* n)
{
	if (name) {
		delete[] name;
		name = nullptr;
	}
	Strcopy(name, n);
}
void Person::Set_Birth_Year(int y)
{
	birth_year = y;
}
char* Person::Get_Name()
{
	char* localtemp;
	localtemp = new char[Strlen(name) + 1];
	Strcopy(localtemp, name);
	return localtemp;
}
int Person::Get_Birth_Year()
{
	return birth_year;
}
void Person::Display()
{
	cout << "Name: " << name << endl;
	cout << "Year of Birth: " << birth_year << endl;
}
