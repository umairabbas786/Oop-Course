#include "CheckingAccount.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount():BankAccount()
{
	dfee = 0;
	wfee = 0;
}
CheckingAccount::CheckingAccount(char* t, char* n, double b, double d, double w):BankAccount(t,n,b)
{
	dfee = d;
	wfee = w;
}
CheckingAccount::CheckingAccount(CheckingAccount& ref) : BankAccount(ref)
{
	dfee = ref.dfee;
	wfee = ref.wfee;
}
CheckingAccount& CheckingAccount::operator=(CheckingAccount& rhs)
{
	if (this != &rhs)
	{
		Strcopy(this->title, rhs.title);
		Strcopy(this->accnum, rhs.accnum);
		this->balance = rhs.balance;
		this->dfee = rhs.dfee;
		this->wfee = rhs.wfee;
	}
	return *this;
}
bool CheckingAccount::operator==(CheckingAccount& ref)
{
	if (Strlen(title) == ref.Strlen(title) && Strlen(accnum) == ref.Strlen(accnum) && balance == ref.balance && this->dfee == ref.dfee && this->wfee==ref.wfee) {
		return true;
	}
	else {
		return false;
	}
}
bool CheckingAccount::operator!=(CheckingAccount& ref)
{
	return !operator==(ref);
}
void CheckingAccount::Set_Deposit_Fee(double d)
{
	dfee = d;
}
double CheckingAccount::Get_Deposit_Fee()
{
	return dfee;
}
void CheckingAccount::Set_Withdraw_Fee(double w)
{
	wfee = w;
}
double CheckingAccount::Get_Withdraw_Fee()
{
	return wfee;
}
void CheckingAccount::Deposit(double b)
{
	balance += b;
	balance = balance - dfee;
}
void CheckingAccount::Withdraw(double b)
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
void CheckingAccount::Display()
{
	BankAccount::Display();
	cout << "Deposit Fee: " << dfee << endl;
	cout << "Withdraw Fee: " << wfee << endl;
}
CheckingAccount::~CheckingAccount()
{
	dfee = 0;
	wfee = 0;
}