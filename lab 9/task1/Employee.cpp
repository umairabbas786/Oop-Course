#include "Employee.h"
#include<iostream>
using namespace std;
Employee::Employee():Person()
{
	salary = 0;
	employeeId = 0;
}
Employee::Employee(double sal, int id, char* ptr, int a) :Person(ptr, a)
	{
		salary = sal;
		employeeId = id;
	}
Employee::Employee(const Employee& obj)
{
	salary = obj.salary;
	employeeId = obj.employeeId;
}
void Employee::Set_Salary(double sal)
{
	salary = sal;
}
void Employee::Set_Employeeid(int id)
{
	employeeId = id;
}
double Employee::Get_Salary()
{
	return salary;
}
int Employee::Get_Employeeid()
{
	return employeeId;
}
void Employee::display()
{
	Person::display();
	cout << "Employee Id:" << employeeId << endl;
	cout << "Employee Salary:" << salary << endl;
}
Employee::~Employee() {}