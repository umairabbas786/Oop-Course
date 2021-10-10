#include "Administration.h"
#include <iostream>
using namespace std;

Administration::Administration(){}
Administration::Administration(int ei, int jy, char* jt, int ci, char* ct,char*n,int y):Employee(ei,jy,jt,0,nullptr,n,y){}
void Administration::Set_Job_Title(char* ref)
{
	Strcopy(job_title, ref);
}
char* Administration::Get_Job_Title()
{
	char* localtemp;
	localtemp = new char[Strlen(job_title) + 1];
	Strcopy(localtemp, job_title);
	return localtemp;
}
void Administration::Display()
{
	Employee::Display();
}