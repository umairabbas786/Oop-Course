#pragma once
class Mystring
{
private:
	char* myArray;
	const int size;
public:
	Mystring();
	Mystring(char*);
	Mystring(char*, int);
	void setMyArray(char*);
	const char* getMyArray() const;
	const int getSize() const;
	void print() const;
};

