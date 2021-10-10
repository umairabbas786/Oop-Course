#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
{
	std_id = 0;
	semester = 0;
}
Student::Student(int i, int s,char* n,int y):Person(n,y)
{
	std_id = i;
	semester = s;
}
void Student::Set_Std_Id(int i)
{
	std_id = i;
}
void Student::Set_Semester(int s)
{
	semester = s;
}
int Student::Get_Std_Id()
{
	return std_id;
}
int Student::Get_Semester()
{
	return semester;
}
void Student::Display()
{
	Person::Display();
	cout << "Student Id: " << std_id << endl;
	cout << "Student Semester: " << semester << endl;
}
