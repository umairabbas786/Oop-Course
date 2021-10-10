#include "SavingAccount.h"
#include <iostream>
using namespace std;

SavingAccount::SavingAccount():BankAccount()
{
	ir = 0;
}
SavingAccount::SavingAccount(char* t, char* n, double b, double i) : BankAccount(t, n, b)
{
	ir = i;
}
SavingAccount::SavingAccount(SavingAccount& ref) : BankAccount(ref)
{
	ir = ref.ir;
}
SavingAccount& SavingAccount::operator=(SavingAccount& rhs)
{
	if (this != &rhs)
	{
		Strcopy(this->title, rhs.title);
		Strcopy(this->accnum, rhs.accnum);
		this->balance = rhs.balance;
		this->ir = rhs.ir;
	}
	return *this;
}
bool SavingAccount::operator==(SavingAccount& ref)
{
	if (Strlen(title) == ref.Strlen(title) && Strlen(accnum) == ref.Strlen(accnum) && balance == ref.balance && this->ir == ref.ir) {
		return true;
	}
	else {
		return false;
	}
}
bool SavingAccount::operator!=(SavingAccount& ref)
{
	return !operator==(ref);
}
void SavingAccount::Set_Interest_Rate(double i)
{
	ir = i;
}
double SavingAccount::Get_Interest_Rate()
{
	return ir;
}
void SavingAccount::Deposit(double b)
{
	balance = balance + b;
}
void SavingAccount::Withdraw(double b)
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
void SavingAccount::Display()
{
	BankAccount::Display();
	cout << "Interest Rate: " << ir << endl;
}
void SavingAccount::Interest_On_Balance()
{
	double b;
	b = (ir / 12) * balance;
	cout << "Interest On Balance: " << b << endl;
	balance = balance-b;
	cout << "Balance After Interest: " << balance << endl;
}
SavingAccount::~SavingAccount()
{
	ir = 0;
}