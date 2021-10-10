#include "CurrentAccount.h"
#include <iostream>
using namespace std;

CurrentAccount::CurrentAccount():CheckingAccount()
{
	minbalance = 0;
}
CurrentAccount::CurrentAccount(char* t, char* n, double b, double d, double w,double m):CheckingAccount(t,n,b,d,w)
{
	minbalance = m;
}
CurrentAccount::CurrentAccount(CurrentAccount& ref):CheckingAccount(ref)
{
	minbalance = ref.minbalance;
}
CurrentAccount& CurrentAccount::operator=(CurrentAccount& rhs)
{
	if (this != &rhs)
	{
		Strcopy(this->title, rhs.title);
		Strcopy(this->accnum, rhs.accnum);
		this->balance = rhs.balance;
		this->dfee = rhs.dfee;
		this->wfee = rhs.wfee;
		this->minbalance = rhs.minbalance;
	}
	return *this;
}
bool CurrentAccount::operator==(CurrentAccount& ref)
{
	if (Strlen(title) == ref.Strlen(title) && Strlen(accnum) == ref.Strlen(accnum) && balance == ref.balance && dfee==ref.dfee && wfee==ref.wfee && this->minbalance==ref.minbalance) {
		return true;
	}
	else {
		return false;
	}
}
bool CurrentAccount::operator!=(CurrentAccount& ref)
{
	return !operator==(ref);
}
void CurrentAccount::Set_Minimum_Balance(double m)
{
	minbalance = m;
}
double CurrentAccount::Get_Minimum_Balance()
{
	return minbalance;
}
void CurrentAccount::Deposit(double b)
{
	balance += b;
	balance = balance - dfee;
}
void CurrentAccount::Withdraw(double b)
{
	if (balance > b)
	{
		balance = balance - b;
	}
	else
	{
		cout << " ==> Insufficient Balance <==" << endl;
	}
	balance = balance - wfee;
}
void CurrentAccount::Display()
{
	CheckingAccount::Display();
	cout << "Minimum Balance: " << minbalance << endl;
	if (balance < minbalance) {
		cout << "Balance Is Less then Minimum Balance !!" << endl;
	}
}
CurrentAccount::~CurrentAccount()
{
	minbalance = 0;
}