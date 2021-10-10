#include "Branch.h"

Branch::Branch()
{
	this->arr = new BankAccount * [10];
	this->size = 0;
	this->totalbalance = 0;
}
Branch::Branch(int s, double b)
{
	this->size = s;
	this->totalbalance = b;
	this->arr = new BankAccount * [10];
}
Branch::Branch(Branch& ref)
{
	this->size = ref.size;
	this->totalbalance = ref.totalbalance;
	this->arr = ref.arr;
}
int Branch::Get_Size()
{
	return this->size;
}
double Branch::Get_Balance()
{
	return this->totalbalance;
}
BankAccount** Branch::Get_Array()
{
	return this->arr;
}
const BankAccount* Branch::operator[](int index)const
{
	if (index >= 0 && index < 10)
		return arr[index];
	else
		return arr[0];
}
BankAccount* Branch::operator[](int index)
{
	if (index >= 0 && index < 10)
		return arr[index];
	else
		return arr[0];
}
Branch& Branch::operator=(const Branch& rhs)
{
	if (this != &rhs)
	{
		this->arr = rhs.arr;
		this->totalbalance = rhs.totalbalance;
		this->size = rhs.size;
	}
	return *this;
}
bool Branch::operator==(Branch& ref)
{
	if (this->arr == ref.arr && this->size == ref.size && this->totalbalance == ref.totalbalance) {
		return true;
	}
	else {
		return false;
	}
}
bool Branch::operator!=(Branch& ref)
{
	return !operator==(ref);
}
void Branch::Add_New_Account()
{
	int choice = 0;
	BankAccount* temp= nullptr;
	cout << "Press 1 to add Saving Account" << endl;
	cout << "Press 2 to add Checking Account" << endl;
	cout << "Press 3 to add Current Account" << endl;
	cout << "Press 4 to add Investment Account" << endl;
	cout << "Enter Choice: ";
	cin >> choice;
	cout << endl;
	if (choice == 1)
	{
		char* title = new char[10];
		cout << "Enter Title: " << endl;
		cin >> title;
		char* accnum = new char[20];
		cout << "Enter Account Number: " << endl;
		cin >> accnum;
		double balance = 0;
		cout << "Enter Balance: " << endl;
		cin >> balance;
		double ir = 0;
		cout << "Enter Interest Rate: " << endl;
		cin >> ir;

		SavingAccount* obj = new SavingAccount;
		obj->Set_Title(title);
		obj->Set_Account_Number(accnum);
		obj->Set_Balance(balance);
		obj->Set_Interest_Rate(ir);
		arr[this->size++] = obj;
		cout << "Account Created SuccessFully !!" << endl;
		totalbalance+=obj->Get_Balance();
	}
	if (choice == 2) {
		char* title = new char[10];
		cout << "Enter Title: " << endl;
		cin >> title;
		char* accnum = new char[20];
		cout << "Enter Account Number: " << endl;
		cin >> accnum;
		double balance = 0;
		cout << "Enter Balance: " << endl;
		cin >> balance;
		double dfee = 0;
		cout << "Enter Deposit Fee: " << endl;
		cin >> dfee;
		double wfee = 0;
		cout << "Enter Withdraw Fee: " << endl;
		cin >> wfee;

		CheckingAccount* obj1 = new CheckingAccount;
		obj1->Set_Title(title);
		obj1->Set_Account_Number(accnum);
		obj1->Set_Balance(balance);
		obj1->Set_Deposit_Fee(dfee);
		obj1->Set_Withdraw_Fee(wfee);
		arr[this->size++] = obj1;
		cout << endl;
		cout << "Account Created SuccessFully !!" << endl;
		totalbalance += obj1->Get_Balance();
	}
	if (choice == 3) {
		char* title = new char[10];
		cout << "Enter Title: " << endl;
		cin >> title;
		char* accnum = new char[20];
		cout << "Enter Account Number: " << endl;
		cin >> accnum;
		double balance = 0;
		cout << "Enter Balance: " << endl;
		cin >> balance;
		double dfee = 0;
		cout << "Enter Deposit Fee: " << endl;
		cin >> dfee;
		double wfee = 0;
		cout << "Enter Withdraw Fee: " << endl;
		cin >> wfee;
		double minbal = 0;
		cout << "Enter Minimum Balance: " << endl;
		cin >> minbal;

		CurrentAccount* obj1 = new CurrentAccount;
		obj1->Set_Title(title);
		obj1->Set_Account_Number(accnum);
		obj1->Set_Balance(balance);
		obj1->Set_Deposit_Fee(dfee);
		obj1->Set_Withdraw_Fee(wfee);
		obj1->Set_Minimum_Balance(minbal);
		arr[this->size++] = obj1;
		cout << "Account Created SuccessFully !!" << endl;
		totalbalance += obj1->Get_Balance();
	}
	if (choice == 4)
	{
		char* title = new char[10];
		cout << "Enter Title: " << endl;
		cin >> title;
		char* accnum = new char[20];
		cout << "Enter Account Number: " << endl;
		cin >> accnum;
		double balance = 0;
		cout << "Enter Balance: " << endl;
		cin >> balance;
		double dfee = 0;
		cout << "Enter Deposit Fee: " << endl;
		cin >> dfee;
		double wfee = 0;
		cout << "Enter Withdraw Fee: " << endl;
		cin >> wfee;
		double minbal = 0;
		cout << "Enter Minimum Balance: " << endl;
		cin >> minbal;
		double pp = 0;
		cout << "Enter Minimum Balance: " << endl;
		cin >> pp;

		InvestmentAccount* obj1 = new InvestmentAccount;
		obj1->Set_Title(title);
		obj1->Set_Account_Number(accnum);
		obj1->Set_Balance(balance);
		obj1->Set_Deposit_Fee(dfee);
		obj1->Set_Withdraw_Fee(wfee);
		obj1->Set_Minimum_Balance(minbal);
		obj1->Set_Profit_Percent(pp);
		arr[this->size++] = obj1;
		cout << "Account Created SuccessFully !!" << endl;
		totalbalance += obj1->Get_Balance();
	}

}
void Branch::Delete_An_Account(char* t)
{
	int flag = 0;
	int index = -1;
	for (int i = 0; i < size; i++) {
		if (!strcmp(arr[i]->Get_Title(),t)) {
			index = i;
			flag = 1;
			break;
		}
	}
	if (flag) {
		for (int i = index; i < size; i++) {
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = nullptr;
		this->size--;
		cout << "Account Deleted SuccessFully !!" << endl;
	}
	else {
		cout << "No Account Found !!" << endl;
	}
}
void Branch::Update_Account(char* t)
{
	int flag = 0;
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (!strcmp(arr[i]->Get_Title(), t)) {
			index = i;
			flag = 1;
			break;
		}
	}
	if (flag) {
		char* title = new char[20];
		cout << "Enter Update Title: ";
		cin >> title;
		cout << endl;
		char* accnum = new char[20];
		cout << "Enter Update Account Number: ";
		cin >> accnum;
		cout << endl;
		double balance = 0;
		cout << "Enter Update Balance: ";
		cin >> balance;
		cout << endl;
		cout << "Account Updated --> " << endl;
		for (int i = index; i < size; i++) {
			arr[i]->Set_Title(title);
			arr[i]->Set_Account_Number(accnum);
			arr[i]->Set_Balance(balance);
			cout <<"Title: "<< arr[i]->Get_Title() << endl;
			cout << "Account Number: " << arr[i]->Get_Account_Number() << endl;
			cout << "Balance: " << arr[i]->Get_Balance() << endl;
		}
		cout << endl;
		cout << "Account Updated SuccessFully !!" << endl;
	}
	else {
		cout << "No Account Found !!" << endl;
	}
}
void Branch::Find_Account_Title(char* t)
{
	int flag = 0;
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (!strcmp(arr[i]->Get_Title(), t)) {
			index = i;
			flag = 1;
			break;
		}
	}
	if (flag) {
		cout << "Account With Same Name --> " << endl;
		for (int i = index; i < size; i++) {
			cout << "Title: " << arr[i]->Get_Title() << endl;
			cout << "Account Number: " << arr[i]->Get_Account_Number() << endl;
			cout << "Balance: " << arr[i]->Get_Balance() << endl;
		}
		cout << endl;
	}
	else {
		cout << "No Account Found !!" << endl;
	}
}
void Branch::Find_Account_Number(char* a)
{
	int flag = 0;
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (!strcmp(arr[i]->Get_Account_Number(), a)) {
			index = i;
			flag = 1;
			break;
		}
	}
	if (flag) {
		cout << "Account Details--> " << endl;
		for (int i = index; i < size; i++) {
			cout << "Title: " << arr[i]->Get_Title() << endl;
			cout << "Account Number: " << arr[i]->Get_Account_Number() << endl;
			cout << "Balance: " << arr[i]->Get_Balance() << endl;
		}
		cout << endl;
	}
	else {
		cout << "No Account Found !!" << endl;
	}
}
void Branch::Menu()
{
	cout << "Press 1 to Add New Account" << endl;
	cout << "Press 2 to Delete An Account" << endl;
	cout << "Press 3 to Update Account" << endl;
	cout << "Press 4 to Find Account By Account Number" << endl;
	cout << "Press 5 to Find All Accounts By Account Title" << endl;
	cout << "Press 6 to Display Accounts" << endl;
	cout << "Press 0 to Exit" << endl;
}
Branch::~Branch()
{
	//delete[] arr;
}