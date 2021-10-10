#pragma once
#include <iostream>
using namespace std;

class BankAccount
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
	char* title;
	char* accnum;
	double balance;
	BankAccount();
	BankAccount(char*, char*, double);
	BankAccount(BankAccount&);
	BankAccount& operator=(BankAccount& rhs);
	bool operator==(BankAccount&);
	bool operator!=(BankAccount&);
	void Set_Title(char*);
	void Set_Account_Number(char*);
	void Set_Balance(double);
	char* Get_Title();
	char* Get_Account_Number();
	double Get_Balance();
	virtual void Display()=0;
	virtual void Deposit(double)=0;
	virtual void Withdraw(double)=0;
	virtual ~BankAccount();
};

