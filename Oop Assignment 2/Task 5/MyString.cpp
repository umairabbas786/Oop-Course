#include "MyString.h"

MyString::MyString(int _size)
{
	maxSize = _size;
	arr = new char[maxSize];
	currentSize = 0;
}
MyString::MyString(MyString&obj,int a,int b)
{
	maxSize = 0;
	currentSize = (b-a)+1;
	arr = new char[currentSize];
	int k = 0;
	for (int i = 1; i < b; i++)
	{
		arr[k] =  obj.arr[i];
		k++;
	}
	arr[k] = '\0';
}

MyString& MyString::operator=(const MyString& rhs)
{
	if (this != &rhs)
	{
		if (arr)
		{
			delete[]arr;
			arr = nullptr;
		}

		arr = new char[rhs.currentSize+1];
		currentSize = rhs.currentSize;
		for (int i = 0; i < rhs.currentSize; i++)
		{
			arr[i] = rhs.arr[i];
		}
		arr[rhs.currentSize] = '\0';
	}
	
	return *this;
}
void MyString::add(const char data)
{
	if (currentSize < maxSize)
		arr[currentSize++] = data;
	else
		cout << "String is full" << endl;
}

int MyString::length()const
{
	int len = this->currentSize;
	return len;
}
void MyString::clear()
{
	for (int i = 0; i < this->currentSize; i++)
	{
		this->arr[i] = '\0';
	}
	currentSize = 0;
}
int MyString::getCurrentSize()const
{
	return currentSize;
}
const char& MyString::operator[](int index)const
{
	if (index >= 0 && index < currentSize)
		return arr[index];
	else
		return arr[0];
}
char& MyString::operator[](int index)
{
	if (index >= 0 && index < currentSize)
		return arr[index];
	else
		return arr[0];
}
MyString& MyString::operator++()
{
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = arr[i] + 1;
	}

	return *this;
}
MyString& MyString::operator--()
{
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = arr[i] - 1;
	}

	return *this;
}
MyString MyString:: operator+(const MyString&p2)const 
{
		MyString total;

		total.currentSize = this-> currentSize + p2.currentSize;
		total.arr = new char[total.currentSize+1];
		for (int i = 0; i < this->currentSize; i++)
		{
			total.arr[i] = this->arr[i];
		}
		int j = 0;
		int i = this->currentSize;
		for (; i < total.currentSize; i++)
		{
			total.arr[i] = p2.arr[j];
			j++;
		}
		total.arr[total.currentSize] = '\0';
		return total;	
}

MyString MyString::operator++(int)
{
	MyString temp;
	temp = *this;
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = arr[i] + 1;
	}
	return temp;
}


MyString MyString::operator--(int)
{
	MyString temp;
	temp = *this;
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = arr[i] - 1;
	}
	return temp;
}

MyString::MyString(MyString& rhs)
{
		arr = new char[rhs.currentSize+1];
		currentSize = rhs.currentSize;
		for (int i = 0; i < rhs.currentSize; i++)
		{
			arr[i] = rhs.arr[i];
		}
		arr[rhs.currentSize] = '\0';
}

MyString::~MyString()
{
	if (arr != nullptr)
	{
	   delete[] arr;
		arr = nullptr;
	}
	
}
