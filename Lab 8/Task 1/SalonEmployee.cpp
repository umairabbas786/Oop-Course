#include "SalonEmployee.h"
#include <iostream>
using namespace std;

SalonEmployee::SalonEmployee(int i, char* n, char* g, char* c, double x, char* s)
{
	id = i;
	Strcopy(name, n);
	Strcopy(gender, g);
	Strcopy(contact, c);
	salary = x;
	Strcopy(shift, s);
}
SalonEmployee::SalonEmployee(SalonEmployee& ref)
{
	id = ref.id;
	Strcopy(name, ref.name);
	Strcopy(gender, ref.gender);
	Strcopy(contact, ref.contact);
	salary = ref.salary;
	Strcopy(shift, ref.shift);
}
SalonEmployee::~SalonEmployee()
{
	id = 0;
	delete[] name;
	name = nullptr;
	delete[] gender;
	gender = nullptr;
	delete[] contact;
	contact = nullptr;
	salary = 0;
	delete[] shift;
	shift = nullptr;
}
//setters
void SalonEmployee::SetId(int i)
{
	id = i;
}
void SalonEmployee::SetName(char* n)
{
	if (name) {
		delete[] name;
		name = nullptr;
	}
	Strcopy(name, n);
}
void SalonEmployee::SetGender(char* g)
{
	if (gender) {
		delete[] gender;
		gender = nullptr;
	}
	Strcopy(gender, g);
}
void SalonEmployee::SetContact(char* c)
{
	if (contact) {
		delete[] contact;
		contact = nullptr;
	}
	Strcopy(contact, c);
}
void SalonEmployee::SetSalary(double s)
{
	salary = s;
}
void SalonEmployee::SetShift(char* s)
{
	if (shift) {
		delete[] shift;
		shift = nullptr;
	}
	Strcopy(shift, s);
}
//getters
const int SalonEmployee::GetId()
{
	return id;
}
char* SalonEmployee::GetName()
{
	char* localtemp;
	localtemp = new char[Strlen(name) + 1];
	Strcopy(localtemp, name);
	return localtemp;
}
char* SalonEmployee::GetGender()
{
	char* localtemp;
	localtemp = new char[Strlen(gender) + 1];
	Strcopy(localtemp, gender);
	return localtemp;
}
char* SalonEmployee::GetContact()
{
	char* localtemp;
	localtemp = new char[Strlen(contact) + 1];
	Strcopy(localtemp, contact);
	return localtemp;
}
double SalonEmployee::GetSalary()
{
	return salary;
}
char* SalonEmployee::GetShift()
{
	char* localtemp;
	localtemp = new char[Strlen(shift) + 1];
	Strcopy(localtemp, shift);
	return localtemp;
}
