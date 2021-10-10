#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
	emp_id = 0;
	join_year = 0;
	job_title = nullptr;
	course_id = 0;
	course_title = nullptr;
}
Employee::Employee(int ei, int jy, char* jt, int ci, char* ct, char* n, int y):Person(n, y)
{
	emp_id = ei;
	join_year = jy;
	Strcopy(job_title, jt);
	course_id = ci;
	Strcopy(course_title, ct);
}
void Employee::Display()
{
	Person::Display();
	cout << "Employee Id: " << emp_id << endl;
	cout << "Joining Year: " << join_year << endl;
	cout << "Job Title: " << job_title << endl;
	cout << "Course Id: " << course_id << endl;
	cout << "Course Title: " << course_title << endl;
}