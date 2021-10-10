#pragma once
#include<iostream>
#include"BankAccount.h"
using namespace std;

class CheckingAccount:public BankAccount
{
private:
	int fee;
public:
	CheckingAccount();
	CheckingAccount(int f, int, int, char*, int);
	void Set_Fee(int f);
	int Get_Fee()const;
	void Withdraw(int);
	void Deposit(int);
	void display()const;
	~CheckingAccount();
};

