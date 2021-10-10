#pragma once
class Person
{
private:
	int Strlen(char* ptr) {
		int i = 0;
		while (ptr[i] != '\0') {
			i++;
		}
		return i;
	}
	void Strcopy(char*& ptr, char* arr) {
		ptr = new char[Strlen(arr) + 1];
		for (int i = 0; i < Strlen(arr); ++i)
			ptr[i] = arr[i];

		ptr[Strlen(arr)] = '\0';
	}
public:
	char* name;
	char* cnic;
	char* address;
	Person();
	Person(char*, char*, char*);
	Person(const Person&);
	void Set_Name(char*);
	void Set_Cnic(char*);
	void Set_Address(char*);
	char* Get_Name();
	char* Get_Cnic();
	char* Get_Address();
	void Display();
	~Person();
};

