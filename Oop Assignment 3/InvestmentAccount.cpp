#include "InvestmentAccount.h"
#include <iostream>
using namespace std;

InvestmentAccount::InvestmentAccount() :CurrentAccount()
{
	profitpercent = 0;
}
InvestmentAccount::InvestmentAccount(char* t, char* n, double b, double d, double w, double m, double p) : CurrentAccount(t, n, b, d, w, m)
{
	profitpercent = p;
}
InvestmentAccount::InvestmentAccount(InvestmentAccount& ref) : CurrentAccount(ref)
{
	profitpercent = ref.profitpercent;
}
InvestmentAccount& InvestmentAccount::operator=(InvestmentAccount& rhs)
{
	if (this != &rhs)
	{
		Strcopy(this->title, rhs.title);
		Strcopy(this->accnum, rhs.accnum);
		this->balance = rhs.balance;
		this->dfee = rhs.dfee;
		this->wfee = rhs.wfee;
		this->minbalance = rhs.minbalance;
		this->profitpercent = rhs.profitpercent;
	}
	return *this;
}
bool InvestmentAccount::operator==(InvestmentAccount& ref)
{
	if (Strlen(title) == ref.Strlen(title) && Strlen(accnum) == ref.Strlen(accnum) && balance == ref.balance && dfee == ref.dfee && wfee == ref.wfee && minbalance == ref.minbalance && this->profitpercent==ref.profitpercent) {
		return true;
	}
	else {
		return false;
	}
}
bool InvestmentAccount::operator!=(InvestmentAccount& ref)
{
	return !operator==(ref);
}
void InvestmentAccount::Set_Profit_Percent(double p)
{
	profitpercent = p;
}
double InvestmentAccount::Get_Profit_Percent()
{
	return profitpercent;
}
void InvestmentAccount::Deposit(double b)
{
	double pp;
	pp = (profitpercent * balance) / 100;
	balance += b;
	balance = balance - pp;
	balance = balance - dfee;

}
void InvestmentAccount::Withdraw(double b)
{

	if (balance > b)
	{
		balance = balance - b;
	}
	else
	{
		cout << " ==> Insufficient Balance <==" << endl;
	}
	double pp;
	pp = (profitpercent * balance) / 100;
	balance = balance - pp;
	balance = balance - wfee;
}
void InvestmentAccount::Display()
{
	CurrentAccount::Display();
	cout << "Profit Percent: " << profitpercent << endl;
	if (balance < minbalance) {
		cout << "Balance Is Less then Minimum Balance !!" << endl;
	}
}
InvestmentAccount::~InvestmentAccount()
{
	profitpercent = 0;
}