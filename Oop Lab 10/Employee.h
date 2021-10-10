#pragma once
#include "Person.h"
class Employee:public Person
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
	int emp_id;
	int join_year;
	char* job_title;
	int course_id;
	char* course_title;
	Employee();
	Employee(int, int, char*, int, char*, char*, int);
	void Display();
	
};

