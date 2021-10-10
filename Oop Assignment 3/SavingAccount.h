#pragma once
#include "BankAccount.h"
#include <iostream>
using namespace std;

class SavingAccount:public BankAccount
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
	double ir;
	SavingAccount();
	SavingAccount(char*, char*, double, double);
	SavingAccount(SavingAccount&);
	SavingAccount& operator=(SavingAccount&);
	bool operator==(SavingAccount&);
	bool operator!=(SavingAccount&);
	void Set_Interest_Rate(double);
	double Get_Interest_Rate();
	void Deposit(double);
	void Withdraw(double);
	void Display();
	void Interest_On_Balance();
	virtual ~SavingAccount();
};
