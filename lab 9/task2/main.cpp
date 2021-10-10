#include<iostream>
#include"BankAccount.h"
#include"SavingsAccount.h"
#include"CheckingAccount.h"
using namespace std;
int main()
{
	char* name = new char[20]{ "umair" };
	CheckingAccount obj(20, 1234, 10000, name, 2010);
	SavingsAccount obj1(2.5, 1234, 15000, name, 2010);
	int choice = 0;
	int d,w;
	cout << "Press 1 For Checking Account" << endl;
	cout << "Press 2 For Saving Account" << endl;
	cin >> choice;
	if (choice == 1)
	{
		obj.display();
		cout << endl;
		cout << "Press 1 To Deposit" << endl;
		cout << "Press 2 To WithDraw" << endl;
		cin >> choice;
		cout << endl;
		if (choice == 1)
		{	
			cout << "Enter Deposit Amount: " << endl;
			cin >> d;
			obj.Deposit(d);
			cout << "Transaction Fee:" << obj.Get_Fee() << endl;
			cout << "After Transaction: " << endl;
			obj.display();
			cout << endl;
		}
		else
		{
			cout << "Enter Withdraw Amount: ";
			cin >> w;
			obj.Withdraw(w);
			cout << "Transaction Fee :" << obj.Get_Fee() << endl;
			cout << "After Transaction " << endl;
			obj.display();
			cout << endl;
		}
	}
	else
	{
		obj1.display();
		cout << endl;
		cout << "Enter Your choice" << endl;
		cout << "Press 1 to Deposit" << endl;
		cout << "Press 2 to WithDraw" << endl;
		cin >> choice;
		cout << endl;
		if (choice == 1)
		{
			cout << "Enter Deposit Amount: " << endl;
			cin >> d;
			obj1.Deposit(d);
			cout << "INTEREST RATE :" << obj1.Get_InterestRate() << endl;
			cout << "After Interest Rate" << endl;
			obj1.display();
			cout << endl;
		}
		else if (choice == 2)
		{
			cout << "Enter Withdraw Amount: " << endl;
			cin >> w;
			obj1.Withdraw(w);
			cout << "Interest Rate:" << obj1.Get_InterestRate() << endl;
			cout << "After Interest Rate: " << endl;
			obj1.display();
			cout << endl;
		}
	}
	system("pause");
	return 0;
}