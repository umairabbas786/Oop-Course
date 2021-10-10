#pragma once
#include "BankAccount.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "CurrentAccount.h"
#include "InvestmentAccount.h"
#include <iostream>
using namespace std;
class Branch
{
private:
	BankAccount** arr;
	int size;
	double totalbalance;
public:
	Branch();
	Branch(int,double);
	Branch(Branch&);
	int Get_Size();
	double Get_Balance();
	BankAccount** Get_Array();
	const BankAccount* operator[](int index)const;
	BankAccount* operator[](int index);
	Branch& operator=(const Branch& rhs);
	bool operator==(Branch&);
	bool operator!=(Branch&);
	void Add_New_Account();
	void Delete_An_Account(char*);
	void Update_Account(char*);
	void Find_Account_Title(char*);
	void Find_Account_Number(char*);
	
	void Menu();
	~Branch();
};

