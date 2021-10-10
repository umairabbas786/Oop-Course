#include "Client.h"
#include "Account.h"
#include <iostream>
using namespace std;

Client::Client() :Person()
{
	employ = nullptr;
}
Client::Client(char* e, Account& obj, char* n, char* c, char* a) : Person(n, c, a)
{
	Strcopy(employ, e);
	ref = obj;
}
Client::Client(Client& ref):Person(ref)
{
	Strcopy(employ, ref.employ);
}
bool Client::operator==(Client& so)
{
	if (employ == so.employ)
		return true;
	else
		return false;
}
void Client::Set_Employ(char* e)
{
	if (employ) {
		delete[] employ;
		employ = nullptr;
	}
	Strcopy(employ, e);
}
char* Client::Get_Employ()
{
	char* temp;
	temp = new char[Strlen(employ) + 1];
	Strcopy(temp, employ);
	return temp;
}
void Client::Update_Account_Info(char* n, char* t, double b)
{
	ref.Set_Account_Number(n);
	ref.Set_Account_Type(t);
	ref.Set_Balance(b);
}
void Client::Deposit(double b)
{
	ref.balance =ref.balance + b;
}
void Client::Withdraw(double w)
{
	double bal;
	bal = ref.Get_Balance();
	if (bal > w)
	{
		bal = bal - w;
		ref.Set_Balance(bal);
	}
	else
	{
		cout << " ==> Insufficient Balance <==" << endl;
	}
}
void Client::Display()
{
	Person::Display();
	cout << "Employment: " << employ << endl;
}
Client::~Client()
{
	delete[] employ;
	employ = nullptr;
}