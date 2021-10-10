#pragma once
class Person
{
private:
	char* name;
	int age;
public:
	Person();
	Person(const Person&);
	Person(char*, int);
	void Set_Name(char*);
	void Set_Age(int);
	char* Get_Name();
	int Get_Age();
	void display();
	~Person();
};

