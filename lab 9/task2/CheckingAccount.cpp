#include "CheckingAccount.h"
#include"BankAccount.h"

CheckingAccount::CheckingAccount() :BankAccount()
{
	fee = 75;
}
CheckingAccount::CheckingAccount(int f, int n, int b, char* t, int d) :BankAccount(n, b, t, d)
{
	fee = f;
}
void CheckingAccount::Set_Fee(int f)
{
	fee = f;
}
int CheckingAccount::Get_Fee()const
{
	return fee;
}
void CheckingAccount::Deposit(int d)
{
	int balance = Get_Balance();
	if (balance > fee)
	{
		balance = balance - fee;
		balance = balance + d;
		Set_Balance(balance);
	}
	else
	{
		cout << "==> INSUFFICIENT BALANCE <==" << endl;
	}

}
void CheckingAccount::Withdraw(int w)
{
	int balance = Get_Balance();
	if (balance > fee)
	{
		balance = balance - fee;
		if (balance > w)
		{
			balance = balance - w;
			Set_Balance(balance);
		}
		else
		{
			Set_Balance(balance);
			cout << "==> Insufficient Balance <==" << endl;
		}
	}
}
void CheckingAccount::display()const
{
	BankAccount::Display();
	cout << "Fee: "<<fee << endl;
}
CheckingAccount::~CheckingAccount() {}

