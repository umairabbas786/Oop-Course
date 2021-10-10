#pragma once
class Account
{
private:
	int Strlen(char* ptr) {
		int i = 0;
		while (ptr[i] != '\0') {
			i++;
		}
		return i;
	}
	void Strcopy(char*& ptr, char* arr) {
		ptr = new char[Strlen(arr) + 1];
		for (int i = 0; i < Strlen(arr); ++i)
			ptr[i] = arr[i];

		ptr[Strlen(arr)] = '\0';
	}
public:
	char* accnum;
	char* acctype;
	double balance;
	Account();
	Account(char*,char*,double);
	Account(const Account&);
	void Set_Account_Number(char*);
	void Set_Account_Type(char*);
	void Set_Balance(double);
	char* Get_Account_Number();
	char* Get_Account_Type();
	void operator+(double);
	void operator-(double);
	double Get_Balance();
	void Display();
	~Account();
};

