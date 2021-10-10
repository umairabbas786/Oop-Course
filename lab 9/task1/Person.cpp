#include "Person.h"
#include<iostream>
using namespace std;
Person::Person()
{
	name = nullptr;
	age = 0;
}

Person::Person(char* ptr, int a)
{
	int length = 0;
	while (ptr[length] != '\0')
	{
		length++;
	}
	name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		name[i] = ptr[i];
	}
	name[length] = '\0';
	age = a;
}
Person::Person(const Person& obj)
{
	int length = 0;
	while (obj.name[length] != '\0')
		++length;

	name = new char[length + 1];
	for (int i = 0; i < length; ++i)
		name[i] = obj.name[i];

	name[length] = '\0';

	age = obj.age;
}
void Person::Set_Name(char* ptr)
{
	int length = 0;
	while (ptr[length] != '\0')
	{
		length++;
	}
	name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		name[i] = ptr[i];
	}
	name[length] = '\0';
}
void Person::Set_Age(int a)
{
	age = a;
}

char* Person::Get_Name()
{
	int length = 0;
	char* localtemp;
	while (name[length] != '\0')
		++length;
	localtemp = new char[length + 1];
	for (int i = 0; i < length; ++i)
		localtemp[i] = name[i];
	localtemp[length] = '\0';
	return localtemp;
}
int Person::Get_Age()
{
	return age;
}

void Person::display()
{
	cout << "Name :" << name << endl;
	cout << "Age :" << age << endl;
}
Person::~Person()
{
	delete[]name;
	name = nullptr;
}