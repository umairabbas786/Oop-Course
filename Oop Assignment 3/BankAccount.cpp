#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount()
{
	title = nullptr;
	accnum = 0;
	balance = 0;
}
BankAccount::BankAccount(char* t, char* n, double b)
{
	Strcopy(title, t);
	Strcopy(accnum, n);
	balance = b;
}
BankAccount::BankAccount(BankAccount& ref)
{
	Strcopy(title, ref.title);
	Strcopy(accnum, ref.accnum);
	balance = ref.balance;
}
BankAccount& BankAccount::operator=(BankAccount& rhs)
{
	if (this != &rhs)
	{
		Strcopy(this->title, rhs.title);
		Strcopy(this->accnum, rhs.accnum);
		this->balance = rhs.balance;
	}
	return *this;
}
bool BankAccount::operator==(BankAccount& ref)
{
	if (Strlen(title) == ref.Strlen(title) && Strlen(accnum) == ref.Strlen(accnum) && this->balance == ref.balance) {
		return true;
	}
	else {
		return false;
	}
}
bool BankAccount::operator!=(BankAccount& ref)
{
	return !operator==(ref);
}
void BankAccount::Set_Title(char* t)
{
	if (title) {
		delete[] title;
		title = nullptr;
	}
	Strcopy(title, t);
}
void BankAccount::Set_Account_Number(char* n)
{
	if (accnum) {
		delete[] accnum;
		accnum = nullptr;
	}
	Strcopy(accnum, n);
}
void BankAccount::Set_Balance(double b)
{
	balance = b;
}
char* BankAccount::Get_Title()
{
	char* temp;
	temp = new char[Strlen(title) + 1];
	Strcopy(temp, title);
	return temp;
}
char* BankAccount::Get_Account_Number()
{
	char* temp;
	temp = new char[Strlen(accnum) + 1];
	Strcopy(temp, accnum);
	return temp;
}
double BankAccount::Get_Balance()
{
	return balance;
}
void BankAccount::Display()
{
	cout << "Account Holder: " << title << endl;
	cout << "Account Number: " << accnum << endl;
	cout << "Account Balance: " << balance << endl;
}
void BankAccount::Deposit(double b)
{
	balance += b;
}
void BankAccount::Withdraw(double b)
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
BankAccount::~BankAccount()
{
	delete[] title;
	title = nullptr;
	balance = 0;
	delete[] accnum;
	accnum = nullptr;
}