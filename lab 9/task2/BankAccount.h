#pragma once
#include<iostream>
using namespace std;
class BankAccount
{
private:
	char* title; 
	int number;
	int balance;
	int date;
public:
	BankAccount();
	BankAccount(int, int, char*, int);
	void Set_Title(char*);
	void Set_Number(int);
	void Set_Balance(int);
	void Set_Date(int);
	int Get_Date()const;
	char* Get_Title()const;
	int Get_Number()const;
	int Get_Balance()const;
	void Deposit(int);
	void Withdraw(int);
	void Display()const;
	~BankAccount();
};

