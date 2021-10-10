#pragma once
#include "Academic.h"
class DeanHOD:public Academic
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
	DeanHOD();
	DeanHOD(int, int, char*, int, char*, char*, int);
	void Set_Employee_Id(int);
	void Set_Join_Year(int);
	void Set_Job_Title(char*);
	void Set_Course_Id(int);
	void Set_Course_Title(char*);
	int Get_Employee_Id();
	int Get_Join_Year();
	char* Get_Job_Title();
	int Get_Course_Id();
	char* Get_Course_Title();
	void Display();
};

