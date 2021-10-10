#pragma once
#include "CurrentAccount.h"
class InvestmentAccount:public CurrentAccount
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
	double profitpercent;
	InvestmentAccount();
	InvestmentAccount(char*,char*,double,double,double,double,double);
	InvestmentAccount(InvestmentAccount&);
	InvestmentAccount& operator=(InvestmentAccount& rhs);
	bool operator==(InvestmentAccount&);
	bool operator!=(InvestmentAccount&);
	void Set_Profit_Percent(double);
	double Get_Profit_Percent();
	void Deposit(double);
	void Withdraw(double);
	void Display();
	virtual ~InvestmentAccount();
};

