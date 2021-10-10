#include "Account.h"
#include <iostream>
using namespace std;

Account::Account()
{
	accnum = nullptr;
	acctype = nullptr;
	balance = 0;
}
Account::Account(char* n, char* t, double b)
{
	Strcopy(accnum, n);
	Strcopy(acctype, t);
	balance = b;
}
Account::Account(const Account& ref)
{
	Strcopy(accnum, ref.accnum);
	Strcopy(acctype, ref.acctype);
	balance = ref.balance;
}
void Account::Set_Account_Number(char* n)
{
	if (accnum) {
		delete[] accnum;
		accnum = nullptr;
	}
	Strcopy(accnum, n);
}
void Account::Set_Account_Type(char* t)
{
	if (acctype) {
		delete[] acctype;
		acctype = nullptr;
	}
	Strcopy(acctype, t);
}
void Account::Set_Balance(double b)
{
	balance = b;
}
char* Account::Get_Account_Number()
{
	char* temp;
	temp = new char[Strlen(accnum) + 1];
	Strcopy(temp, accnum);
	return temp;
}
char* Account::Get_Account_Type()
{
	char* temp;
	temp = new char[Strlen(acctype) + 1];
	Strcopy(temp, acctype);
	return temp;
}
double Account::Get_Balance()
{
	return balance;
}
void Account::operator+(double b)
{
	balance += b;
}
void Account::operator-(double b)
{
	if (balance > b)
	{
		balance = balance - b;
	}
	else
	{
		cout << " ==> Insufficient Balance <==" << endl;
	}
}
void Account::Display()
{
	cout << "Account Number: " << accnum << endl;
	cout << "Account Type: " << acctype << endl;
	cout << "Balance: " << balance << endl;
}
Account::~Account()
{
	delete[] accnum;
	accnum = nullptr;
	delete[] acctype;
	acctype = nullptr;
	balance = 0;
}