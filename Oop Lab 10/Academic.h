#pragma once
#include "Employee.h"
class Academic:public Employee
{
private:
	int Strlen(char* name) {
		int i = 0;
		while (name[i] != '\0') {
			i++;
		}
		return i;
	}
	void Strcopy(char*& existed, char* copy) {
		existed = new char[Strlen(copy) + 1];
		for (int i = 0; i < Strlen(copy); ++i)
			existed[i] = copy[i];

		existed[Strlen(copy)] = '\0';
	}
public:
	Academic();
	Academic(int, int, char*, int, char*, char*, int);
	void Set_Course_Id(int);
	void Set_Course_Title(char*);
	void Display();
};

