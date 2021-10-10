#pragma once
#include "Account.h"
#include "Person.h"
class Client:public Person
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
	char* employ;
	Account ref;
	Client();
	Client(char*, Account&,char*,char*,char*);
	Client(Client&);
	bool operator==(Client&);
	void Set_Employ(char*);
	char* Get_Employ();
	void Update_Account_Info(char*,char*,double);
	void Deposit(double);
	void Withdraw(double);
	void Display();
	~Client();
};

