#pragma once
#include "CurrentAccount.h"
#include "CheckingAccount.h"
class CurrentAccount:public CheckingAccount
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
	double minbalance;
	CurrentAccount();
	CurrentAccount(char*, char*, double, double, double, double);
	CurrentAccount(CurrentAccount&);
	CurrentAccount& operator=(CurrentAccount& rhs);
	bool operator==(CurrentAccount&);
	bool operator!=(CurrentAccount&);
	void Set_Minimum_Balance(double);
	double Get_Minimum_Balance();
	void Deposit(double);
	void Withdraw(double);
	void Display();
	virtual ~CurrentAccount();
};

