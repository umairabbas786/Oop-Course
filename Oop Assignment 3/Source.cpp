#include <iostream>
#include "BankAccount.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "CurrentAccount.h"
#include "InvestmentAccount.h"
#include "Branch.h"
using namespace std;

void Display(Branch obj)
{
	for (int i = 0; i < obj.Get_Size(); i++) {
		cout << "Account # " << i << endl;
		cout <<"Title: "<< obj.Get_Array()[i]->Get_Title() << endl;
		cout <<"Account Number: "<< obj.Get_Array()[i]->Get_Account_Number() << endl;
		cout <<"Balance: "<< obj.Get_Array()[i]->Get_Balance() << endl;
		cout << endl;
	}
	cout << "Total Balance Of Accounts: " << obj.Get_Balance() << endl;
	cout << endl;
}

int main()
{
	Branch obj;
	int choice = 0;
	while (1) {
		cout << endl;
		obj.Menu();
		cout << "Enter Your Choice: ";
		cin >> choice;
		cout << endl;
		if (choice == 1){
			obj.Add_New_Account();
		}
		if (choice == 2) {
			char* title = new char[20];
			cout << "Enter Account Title: ";
			cin >> title;
			cout << endl;
			obj.Delete_An_Account(title);
		}
		if (choice == 3) {
			char* title = new char[20];
			cout << "Enter Account Title You Want To Update: ";
			cin >> title;
			cout << endl;
			obj.Update_Account(title);
		}
		if (choice == 4) {
			char* accnum = new char[20];
			cout << "Enter Account Number You Want To Find: ";
			cin >> accnum;
			cout << endl;
			obj.Find_Account_Number(accnum);
		}
		if (choice == 5) {
			char* title = new char[20];
			cout << "Enter Account Title You Want To Find: ";
			cin >> title;
			cout << endl;
			obj.Find_Account_Title(title);
		}
		if (choice == 6) {
			Display(obj);
		}
		if (choice == 0) {
			break;
		}
	}

	system("pause");
	return 0;
}