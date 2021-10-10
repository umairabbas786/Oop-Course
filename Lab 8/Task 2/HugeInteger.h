#pragma once
#include <iostream>
using namespace std;
class HugeInteger
{
private:
	static const int size = 5;
	int array[size];
public:
	HugeInteger(); //Default Constructor
	~HugeInteger(); //Destructor
	friend ostream& operator<<(ostream&, const HugeInteger&);  //input function
	friend istream& operator>>(istream&, HugeInteger&);  //output function
	HugeInteger operator+(const HugeInteger&); //add function
	HugeInteger operator-(const HugeInteger&); //substract function
	bool operator==(HugeInteger); //equal to function
	bool operator !=(HugeInteger); //not Equal to function
	bool operator>(HugeInteger); //greater than function
	bool operator<(HugeInteger); //less than function
	bool operator>=(HugeInteger); //greater than or equal to function
	bool operator<=(HugeInteger); //less than or equal to function
	HugeInteger& operator=(const HugeInteger&); //assignment operator
	HugeInteger& operator+=(const HugeInteger&); //addition assignment operator
	HugeInteger& operator++(); //pre increment
	HugeInteger operator++(int); //post increment
	HugeInteger& operator--(); //pre increment
	HugeInteger operator--(int); //post increment
};

