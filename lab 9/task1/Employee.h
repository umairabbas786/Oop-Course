#pragma once
#include"Person.h"
class Employee:public Person
{
private:
	double salary;
	int employeeId;
public:
	Employee();
	Employee(double, int,char*,int);
	Employee(const Employee& );
	void Set_Salary(double);
	void Set_Employeeid(int);
	double Get_Salary();
	int Get_Employeeid();
	void display();
	~Employee();
};

