#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() :BankAccount()
{
	interest = 5.5;
}

SavingsAccount::SavingsAccount(double ir, int n, int b, char* t, int d) :BankAccount(n, b, t, d)
{
	interest = ir;
}

int SavingsAccount::Calculate_Interest()
{
	int balance;
	balance = Get_Balance();
	double ir;
	double x;
	x = interest / 100;
	int t = Get_Date();
	t = 2020 - t;
	ir = balance * (1 + (x * t));
	return ir;
}
void SavingsAccount::Deposit(int d)
{
	int balance;
	balance = Get_Balance();
	balance = balance + d;
	double in = Calculate_Interest();
	balance = balance - in;
	Set_Balance(balance);
}
void SavingsAccount::Withdraw(int w)
{
	int balance = Get_Balance();
	double in = Calculate_Interest();
	if (balance > w)
	{
		balance = balance - w;
		balance = balance - in;
		Set_Balance(balance);
		}
	else
	{
		cout << "==> Insufficient Balance <==" << endl;
	}
}
void SavingsAccount::display()const
{
	BankAccount::Display();
	cout << "Interest Rate: " << interest << endl;
}

double SavingsAccount::Get_InterestRate()const
{
	return interest;
}
void SavingsAccount::Set_InterestRate(double ir)
{
	interest = ir;
}
SavingsAccount::~SavingsAccount(){}
