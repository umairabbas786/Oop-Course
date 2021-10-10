#include "DeanHOD.h"
#include <iostream>
using namespace std;

DeanHOD::DeanHOD(){}
DeanHOD::DeanHOD(int ei, int jy, char* jt, int ci, char* ct, char* n, int y):Academic(ei,jy,jt,ci,ct,n,y){}

void DeanHOD::Set_Employee_Id(int ei)
{
	emp_id = ei;
}
void DeanHOD::Set_Join_Year(int jy)
{
	join_year = jy;
}
void DeanHOD::Set_Job_Title(char* jt)
{
	if (job_title) {
		delete[] job_title;
		job_title = nullptr;
	}
	Strcopy(job_title, jt);
}
void DeanHOD::Set_Course_Id(int ci)
{
	course_id = ci;
}
void DeanHOD::Set_Course_Title(char* ct)
{
	if (course_title) {
		delete[] course_title;
		course_title = nullptr;
	}
	Strcopy(course_title, ct);
}
int DeanHOD::Get_Employee_Id()
{
	return emp_id;
}
int DeanHOD::Get_Join_Year()
{
	return join_year;
}
char* DeanHOD::Get_Job_Title()
{
	char* localtemp;
	localtemp = new char[Strlen(job_title) + 1];
	Strcopy(localtemp, job_title);
	return localtemp;
}
int DeanHOD::Get_Course_Id()
{
	return course_id;
}
char* DeanHOD::Get_Course_Title()
{
	char* localtemp;
	localtemp = new char[Strlen(course_title) + 1];
	Strcopy(localtemp, course_title);
	return localtemp;
}
void DeanHOD::Display()
{
	Employee::Display();
}
