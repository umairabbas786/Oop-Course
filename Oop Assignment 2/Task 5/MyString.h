#pragma once
#include<iostream>
using namespace std;
class MyString
{
	char* arr;
	int currentSize;
	int maxSize;
public:
	MyString(int _size=100);
	void add(const char data);
	int getCurrentSize()const;
	MyString(MyString& obj, int a, int b);
	MyString(MyString& rhs);
	int length()const;
	void clear();
	MyString operator+(const MyString&)const;
	const char& operator[](int index)const;
	char& operator[](int index);
	MyString& operator=(const MyString& rhs);
	MyString& operator++();
	MyString operator++(int);
	MyString& operator--();
	MyString operator--(int);

	~MyString();
};

