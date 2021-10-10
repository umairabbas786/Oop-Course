#include "BankAccount.h"

BankAccount::BankAccount()
{
	balance =0;
	number = 0;
	title = nullptr;
	date = 0;
}

BankAccount::BankAccount(int n, int b, char* t, int d)
{
	balance = b;
	number = n;
	int size = 0;
	while (t[size] != '\0')
	{
		size++;
	}
	title = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		title[i] = t[i];
	}
	title[size] = '\0';
	date = d;
}

void BankAccount::Set_Title(char* n)
{
	int size = 0;
	while (n[size]!='\0')
	{
		size++;
	}
	title = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		title[i] = n[i];
	}
	title[size] = '\0';
}

void BankAccount::Set_Date(int d)
{
	date = d;
}

void BankAccount::Set_Number(int n)
{
	number = n;
}

void BankAccount::Set_Balance(int b)
{
	balance = b;
}

char* BankAccount::Get_Title()const
{
	int size = 0;
	while (title[size] != '\0')
	{
		size++;
	}
	char*Name = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		Name[i] = title[i];
	}
	Name[size] = '\0';
	return Name;
}

int BankAccount::Get_Number()const
{
	return number;
}

int BankAccount::Get_Balance()const
{
	return balance;
}

int BankAccount::Get_Date()const
{
	return date;
}

void  BankAccount::Deposit(int d)
{
	balance = balance + d;
}
void BankAccount::Withdraw(int w)
{

	if (balance > w)
	{
		balance = balance - w;
	}
	else
	{
		cout << " ==> Insufficient Balance <==" << endl;
	}
}

void BankAccount::Display()const
{
	cout << endl;
	cout << "Account Title: " << title << endl;
	cout << "Account Number: " << number << endl;
	cout << "Account Balance: " << balance << endl;
	cout << "Account Date: " << date << endl;
}

BankAccount::~BankAccount()
{
	delete[] title;
	title = nullptr;
}