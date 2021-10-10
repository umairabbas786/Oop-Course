#pragma once
#include "Person.h"
class Student:public Person
{
private:
	int std_id;
	int semester;
public:
	Student();
	Student(int, int, char*, int);
	void Set_Std_Id(int);
	void Set_Semester(int);
	int Get_Std_Id();
	int Get_Semester();
	void Display();
};

