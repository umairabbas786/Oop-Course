#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Administration.h"
#include "Academic.h"
#include "DeanHOD.h"
using namespace std;
int main()
{
	char* name = new char[20]{ "umair" };
	char* title = new char[10]{ "oop" };
	char* jobtitle = new char[10]{ "fazool" };
	Person obj1;
	obj1.Set_Name(name);
	obj1.Set_Birth_Year(2000);
	obj1.Display();
	cout << endl;

	Student obj2;
	obj2.Set_Std_Id(007);
	obj2.Set_Semester(3);
	obj2.Set_Birth_Year(2000);
	obj2.Set_Name(name);
	obj2.Display();
	cout << endl;

	/*Administration obj3;
	obj3.Set_Job_Title(jobtitle);
	obj3.Display();
	cout << endl;*/

	Academic obj4;
	obj4.Set_Name(name);
	obj4.Set_Birth_Year(2000);
	obj4.job_title = jobtitle;
	obj4.join_year = 0;
	obj4.emp_id = 0;
	obj4.Set_Course_Id(15);
	obj4.Set_Course_Title(title);
	obj4.Display();
	cout << endl;

	DeanHOD obj5;
	obj5.Set_Name(name);
	obj5.Set_Birth_Year(2000);
	obj5.Set_Course_Id(20);
	obj5.Set_Course_Title(title);
	obj5.Set_Employee_Id(005);
	obj5.Set_Join_Year(2019);
	obj5.Set_Job_Title(jobtitle);
	obj5.Display();
	cout << endl;




	system("pause");
	return 0;
}