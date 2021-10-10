#pragma once
#include <iostream>
using namespace std;

class IntegerList
{
private:
	int* arr;
	int csize;
	int msize;

public:
	IntegerList(int = 100);
	friend ostream& operator<<(ostream&, const IntegerList&);
	IntegerList(IntegerList&, int, int);
	int getCsize()const;
	const int& operator[](int index)const;
	int& operator[](int index);
	int getCount();
	void clear();
	void insert(const int);
	bool operator==(IntegerList&);
	IntegerList& operator=(const IntegerList&);
	IntegerList operator+(const IntegerList&)const;
	IntegerList& operator++();
	IntegerList operator++(int);
	IntegerList& operator--();
	IntegerList operator--(int);
};

