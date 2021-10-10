#include "IntegerList.h"
#include <iostream>
using namespace std;

IntegerList::IntegerList(int s)
{
	msize = s;
	arr = new int[msize];
	csize = 0;
}
ostream& operator<<(ostream& Cout, const IntegerList& ref)
{
	for (int i = 0; i < ref.csize; i++) {
		Cout << ref.arr[i] << " ";
	}
	return Cout;
}
int IntegerList::getCsize() const
{
	return csize;
}
IntegerList::IntegerList(IntegerList& obj, int a, int b)
{
	msize = 0;
	csize = (b - a) + 1;
	arr = new int[csize];
	int k = 0;
	for (int i = 1; i < b; i++)
	{
		arr[k] = obj.arr[i];
		k++;
	}
	arr[k-1] = '\0';
}
const int& IntegerList::operator[](int index)const
{
	if (index >= 0 && index < csize)
		return arr[index];
	else
		return arr[0];
}
int& IntegerList::operator[](int index)
{
	if (index >= 0 && index < csize)
		return arr[index];
	else
		return arr[0];
}
void IntegerList::insert(const int value)
{

	int* temp = new int[csize + 1];
	int i = 0;
	for (; i < csize; i++)
	{
		temp[i] = arr[i];
	}


	temp[i] = value;
	delete[]arr;
	arr = temp;
	csize++;
}
int IntegerList::getCount()
{
	int count = this->csize;
	return count;
}
void IntegerList::clear()
{
	for (int i = 0; i < this->csize; i++)
	{
		this->arr[i] = '\0';
	}
	csize = 0;
}
IntegerList& IntegerList::operator=(const IntegerList& rhs)
{
	if (this != &rhs)
	{
		if (arr)
		{
			delete[]arr;
			arr = nullptr;
		}

		arr = new int[rhs.csize + 1];
		csize = rhs.csize;
		for (int i = 0; i < rhs.csize; i++)
		{
			arr[i] = rhs.arr[i];
		}
		arr[rhs.csize] = '\0';
	}

	return *this;
}
bool IntegerList::operator==(IntegerList& other)
{
	for (int i = 0; i < csize; i++) {
		if (this->arr[i] != other.arr[i]) {
			return true;
		}
	}
}
IntegerList IntegerList::operator+(const IntegerList& p2)const
{
	IntegerList total;

	total.csize = this->csize + p2.csize;
	total.arr = new int[total.csize + 1];
	for (int i = 0; i < this->csize; i++)
	{
		total.arr[i] = this->arr[i];
	}
	int j = 0;
	int i = this->csize;
	for (; i < total.csize; i++)
	{
		total.arr[i] = p2.arr[j];
		j++;
	}
	total.arr[total.csize] = '\0';
	return total;
}
IntegerList& IntegerList::operator++()
{
	for (int i = 0; i < csize; i++)
	{
		arr[i] = arr[i] + 1;
	}

	return *this;
}
IntegerList IntegerList::operator++(int)
{
	IntegerList temp;
	temp = *this;
	for (int i = 0; i < csize; i++)
	{
		arr[i] = arr[i] + 1;
	}
	return temp;
}
IntegerList& IntegerList::operator--()
{
	for (int i = 0; i < csize; i++)
	{
		arr[i] = arr[i] - 1;
	}

	return *this;
}
IntegerList IntegerList::operator--(int)
{
	IntegerList temp;
	temp = *this;
	for (int i = 0; i < csize; i++)
	{
		arr[i] = arr[i] - 1;
	}
	return temp;
}