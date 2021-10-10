#pragma once
#include "BankAccount.h"
class CheckingAccount:public BankAccount
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
	double dfee;
	double wfee;
	CheckingAccount();
	CheckingAccount(char*, char*, double, double,double);
	CheckingAccount(CheckingAccount&);
	CheckingAccount& operator=(CheckingAccount& rhs);
	bool operator==(CheckingAccount&);
	bool operator!=(CheckingAccount&);
	void Set_Deposit_Fee(double);
	double Get_Deposit_Fee();
	void Set_Withdraw_Fee(double);
	double Get_Withdraw_Fee();
	void Deposit(double);
	void Withdraw(double);
	void Display();
	virtual ~CheckingAccount();
};

