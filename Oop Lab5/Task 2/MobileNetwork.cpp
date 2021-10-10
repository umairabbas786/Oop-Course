#include "MobileNetwork.h"
#include <iostream>
using namespace std;
//default constructor
MobileNetwork::MobileNetwork()
{
	name=nullptr;
	mobilenum=0;
	type=nullptr;
	balance=0.0;
	callrate=0.0;
}
//parameterized constructor
MobileNetwork::MobileNetwork(char* n, int m, char* t, float b, float c){
	name = n;
	mobilenum = m;
	type = t;
	balance = b;
	callrate = c;
}
void MobileNetwork::Set_Name(char* n){
	name = n;
}
void MobileNetwork::Set_Number(int m){
	mobilenum = m;
}
void MobileNetwork::Set_Type(char* t){
	type = t;
}
void MobileNetwork::Set_Balance(float b){
	balance = b;
}
void MobileNetwork::Set_CallRate(float c){
	callrate = c;
}
char* MobileNetwork::Get_Name(){
	return name;
}
int MobileNetwork::Get_Number(){
	return mobilenum;
}
char* MobileNetwork::Get_Type(){
	return type;
}
float MobileNetwork::Get_Balance(){
	return balance;
}
float MobileNetwork::Get_CallRae(){
	return callrate;
}
void MobileNetwork::Recharge(){
	int r = 0;
	cout << "How Much You Want To Recharge: " << endl;
	cin >> r;
	cout << "Balance After Recharge is: " << Get_Balance()+r << endl;
}
void MobileNetwork::Discharge(){
	int r = 0;
	cout << "How Much You Want To Decharge: " << endl;
	cin >> r;
	cout << "Balance After Decharge is: " << Get_Balance()-r << endl;
}
void MobileNetwork::CheckBalance(){
	cout << "Current Balance is: " << Get_Balance() << endl;
}
void MobileNetwork::CallCharges(){
	int m = 0;
	cout << "Enter Time Of Call: " << endl;
	cin >> m;
	cout << "Call Charges Are: " << Get_CallRae()*m << endl;
}

