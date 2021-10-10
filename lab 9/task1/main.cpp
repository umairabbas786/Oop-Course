#include<iostream>
using namespace std;
#include"BaseballPlayer.h"
#include"Employee.h"
//#include"Person.h"
int main()
{

	char* name = new char[20]  {"umair"};
	BaseballPlayer obj(14.8,500,name,20);
	obj.display();
	cout << endl;
	Employee obj(1500, 001, name, 20);
	obj.display();

	delete[] name;
}