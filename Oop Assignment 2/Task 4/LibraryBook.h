#include "Name.h"
#include "Date.h"
#pragma once
class LibraryBook
{
private:
	char* isbn;
	char* title;
	int quantity;
	int Strlen(char* array) {
		int i = 0;
		while (array[i] != '\0') {
			i++;
		}
		return i;
	}
	void Strcopy(char* &existed, char* copy) {
		existed = new char[Strlen(copy) + 1];
		for (int i = 0; i < Strlen(copy); ++i)
			existed[i] = copy[i];

		existed[Strlen(copy)] = '\0';
	}
public:
	LibraryBook();       //copy contructor
	LibraryBook(char* = nullptr, char* = nullptr, int = 0);				//parameterized constructor with default arguments
	LibraryBook(const LibraryBook&);			//copy constructor.
	void Set_Isbn(char*);
	void Set_Title(char*);
	void Set_Quantity(int);
	char* Get_Title();
	char* Get_Isbn();
	int Get_Quantity();
	void Author(const Name);
	void Publisher(Name);
	void LastIssue(Date);
	~LibraryBook();
};

