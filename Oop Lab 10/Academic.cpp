#include "Academic.h"
#include <iostream>
using namespace std;

Academic::Academic(){}
Academic::Academic(int ei, int jy, char* jt, int ci, char* ct, char* n, int y):Employee(0,0,nullptr,ci,ct,n,y){}
void Academic::Set_Course_Id(int ref)
{
	course_id = ref;
}
void Academic::Set_Course_Title(char* ref)
{
	if (course_title) {
		delete[] course_title;
		course_title = nullptr;
	}
	Strcopy(course_title,ref);
}
void Academic::Display()
{
	Employee::Display();
}