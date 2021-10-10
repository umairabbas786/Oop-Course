#include "Bank.h"
#include <iostream>
using namespace std;
Bank::Bank(char* t, int n, char* ty, int b) //perimetirised constructor with default arguments
{
	title = t;
	num = n;
	type = ty;
	balance = b;
}
void Bank::Set_Title(char* t) {
	title = t;
}
void Bank::Set_Num(int n){
	num = n;
}
void Bank::Set_Type(char* ty) {
	type = ty;
}
void Bank::Set_Balance(int b) {
	balance = b;
}
char* Bank::Get_Title() {
	return title;
}
int Bank::Get_Num() {
	return num;
}
char* Bank::Get_Type() {
	return type;
}
int Bank::Get_Balance() {
	return balance;
}
int Bank::Deposit(int d) {
	balance = balance + d;
	return balance;
}
int Bank::Withdraw(int w) {
	balance = balance - w;
	return balance;
}