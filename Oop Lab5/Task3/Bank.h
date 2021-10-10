//The Interface
#pragma once
class Bank
{
private:
	char* title;
	int num;
	char* type;
	int balance;
public:
	Bank(char* = nullptr, int = 0, char* = nullptr, int = 0); //Peramitirized constructor with default arguments
	void Set_Title(char*);
	void Set_Num(int);
	void Set_Type(char*);
	void Set_Balance(int);
	char* Get_Title();
	int Get_Num();
	char* Get_Type();
	int Get_Balance();
	int Deposit(int);
	int Withdraw(int);
};

