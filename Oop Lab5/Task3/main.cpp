#include <iostream>
#include <fstream>
#include "Bank.h"
using namespace std;

void Menu()
{
	cout << "HBL Bank Account Management Software (Demo)" << endl;
	cout << "Press 1 - Create An Account " << endl;
	cout << "Press 2 - Deposit Money " << endl;
	cout << "Press 3 - Withdraw Money " << endl;
	cout << "Press 4 - Display Account Details" << endl;
	cout << "Press 0 - Exit " << endl;
	cout << endl;
}

int main()
{
	ofstream fout;
	fout.open("Costumers.txt",ios::app);
	//char* t = new char[7]{ "Arslan" };
	//char* tt = new char[10]{ "current" };
	Bank b1("Arslan", 1, "current", 500);
	while (1) {
		Menu();
		int choice = 0;
		cout << "Enter Your Desired Choice: " << endl;
		cin >> choice;
		if (choice == 1) {
			char* t = new char[20];
			cout << "Enter Account Name: " << endl;
			cin >> t;
			b1.Set_Title(t);
			int n = 0;
			cout << "Enter Account Number: " << endl;
			cin >> n;
			b1.Set_Num(n);
			char* ty = new char[10];
			cout << "Enter Account Type (current/saving) : " << endl;
			cin >> ty;
			b1.Set_Type(ty);
			int b = 0;
			cout << "Enter Your Desired Balance: " << endl;
			cin >> b;
			b1.Set_Balance(b);
			cout << endl;
			cout << "==> Account Created Successfully <==" << endl;
			fout << t << " " << n << " " << ty << " " << b << endl;
			cout << endl;
		}
		if (choice == 2) {
			int d = 0;
			cout << "Enter Amount You want to Deposit: " << endl;
			cin >> d;
			b1.Deposit(d);
			cout << endl;
			cout << "==> Amount Deposited Successfully <==" << endl;
			cout << "After Depositing Amount, Balance = " << b1.Get_Balance() << endl;
			cout << endl;
		}
		if (choice == 3) {
			int w = 0;
			cout << "Enter Amount You Want To Withdraw: " << endl;
			cin >> w;
			if (w > b1.Get_Balance()) {
				cout << "Unable To Make Transaction" << endl;
			}
			else {
				b1.Withdraw(w);
				cout << endl;
				cout << "==> Amount Withdrawed Successfully <==" << endl;
				cout << "After Withdrawing Amount, Balance = " << b1.Get_Balance() << endl;
				cout << endl;
			}
		}
		if (choice == 4) {
			cout << "==> Open Costumers.txt File to See Your Account Details <=="<< endl;
			cout << endl;
			break;
		}
		if (choice == 0) {
			cout << "==> Thanks For Visiting <== " << endl;
			cout << "==> Take Care <== " << endl;
			break;
		}
	}




	system("pause");
	return 0;
}