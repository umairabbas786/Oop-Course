#include "HugeInteger.h"

HugeInteger::HugeInteger()
{
	for (int i = size-1; i >= 0; i--) {
		this->array[i] = 0;
	}
}
HugeInteger::~HugeInteger(){}

ostream& operator<<(ostream&Cout, const HugeInteger&ref)
{
	for (int i = 0; i < ref.size;i++) {
		Cout << ref.array[i]<<" ";
	}
	return Cout;
}
istream& operator>>(istream& Cin, HugeInteger&ref)
{
	for (int i = ref.size-1; i >= 0; i--) {
		Cin >> ref.array[i];
	}
	return Cin;
}
HugeInteger HugeInteger::operator+(const HugeInteger& other)
{
	HugeInteger addition;
	int carry = 0, temp;
	for (int i = size-1; i >=0; i--) {
		temp = array[i];
		addition.array[i] = temp + other.array[i] + carry % 10;
		carry = temp + other.array[i] + carry % 10;
	}
	return addition;
}
HugeInteger HugeInteger::operator-(const HugeInteger& other)
{
	HugeInteger substraction;
	for (int i = size-1; i >= 0; i--) {
		substraction.array[i] = this->array[i] - other.array[i];
	}
	return substraction;
}
bool HugeInteger::operator==(HugeInteger other)
{
	bool result = true;
	for (int i = 0; i < size; i++) {
		if (this->array[i] != other.array[i]) {
			result = false;
		}
	}
	return result;
}
bool HugeInteger::operator !=(HugeInteger other)
{
	bool result = true;
	for (int i = size-1; i >= 0;i--) {
		if (this->array[i] == other.array[i]) {
			result = false;
		}
	}
	return result;
}
bool HugeInteger::operator>(HugeInteger other)
{
	bool result = false;
	for (int i = size-1; i >= 0; i--) {
		if (this->array[i] > other.array[i]) {
			result = true;
		}
	}
	return result;
}
bool HugeInteger::operator<(HugeInteger other)
{
	bool result = false;
	for (int i = size-1; i >= 0; i--) {
		if (this->array[i] < other.array[i]) {
			result = true;
		}
	}
	return result;
}
bool HugeInteger::operator>=(HugeInteger other)
{
	bool result = false;
	for (int i = size-1; i >= 0; i--) {
		if (this->array[i] >= other.array[i]) {
			result = true;
		}
	}
	return result;
}
bool HugeInteger::operator<=(HugeInteger other)
{
	bool result = false;
	for (int i = size-1; i >= 0; i--) {
		if (this->array[i] <= other.array[i]) {
			result = true;
		}
	}
	return result;
}
HugeInteger& HugeInteger::operator=(const HugeInteger& other)
{
	if (this != &other) {
		for (int i = size-1; i >= 0; i--) {
			this->array[i] = other.array[i];
		}
	}
	return *this;
}
HugeInteger& HugeInteger::operator+=(const HugeInteger& other)
{
	for (int i = size-1; i >= 0; i--) {
		this->array[i] += other.array[i];
	}
	return *this;
}
HugeInteger& HugeInteger::operator++()
{
	for (int i = size-1; i >= 0; i--) {
		array[i] = array[i] + 1;
	}
	return *this;
}
HugeInteger HugeInteger::operator++(int)
{
	HugeInteger temp;
	temp = *this;
	for (int i = size-1; i >= 0; i--) {
		array[i] = array[i] + 1;
	}
	return temp;
}
HugeInteger& HugeInteger::operator--()
{
	for (int i = size-1; i >= 0; i--) {
		array[i] = array[i] - 1;
	}
	return *this;
}
HugeInteger HugeInteger::operator--(int)
{
	HugeInteger temp;
	temp = *this;
	for (int i = size-1; i >= 0; i--) {
		array[i] = array[i] - 1;
	}
	return temp;
}