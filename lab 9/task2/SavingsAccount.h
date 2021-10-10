#pragma once
#include<iostream>
#include"BankAccount.h"
using namespace std;

class SavingsAccount:public BankAccount
{
private:
    double interest;
public:
    SavingsAccount(); 
    SavingsAccount(double ir,int, int, char*, int);
    void Set_InterestRate(double ir);
    double Get_InterestRate()const;
    int Calculate_Interest();
    void Deposit(int);
    void Withdraw(int);
    void display()const;
    ~SavingsAccount();
};

