#include "LibraryBook.h"
#include "Date.h"
#include "Name.h"
#include <iostream>
using namespace std;


LibraryBook::LibraryBook()
{
	isbn = nullptr;
	title = nullptr;
	quantity = 0;
}
LibraryBook::LibraryBook(char* i, char* t, int q){
	Strcopy(isbn, i);
	Strcopy(title, t);
	quantity = q;
}

LibraryBook::~LibraryBook()
{
	delete[] isbn;
	isbn = nullptr;
	delete[] title;
	title = nullptr;
	quantity = 0;
}
LibraryBook::LibraryBook(const LibraryBook& ref){
	Strcopy(isbn, ref.isbn);
	Strcopy(title, ref.title);
	quantity = ref.quantity;
}
void LibraryBook::Set_Isbn(char* i){
	if (isbn){
		delete[] isbn;
		isbn = nullptr;
	}
	Strcopy(isbn, i);
}
void LibraryBook::Set_Title(char* t){
	if (title){
		delete[] title;
		title = nullptr;
	}
	Strcopy(title, t);
}
void LibraryBook::Set_Quantity(int q){
	quantity = q;
}
char* LibraryBook::Get_Title(){
	char* localtemp;
	localtemp = new char[Strlen(title) + 1];
	Strcopy(localtemp, title);
	return localtemp;
}
char* LibraryBook::Get_Isbn(){
	char* localtemp;
	localtemp = new char[Strlen(isbn) + 1];
	Strcopy(localtemp, isbn);
	return localtemp;
}
int LibraryBook::Get_Quantity(){
	return quantity;
}
void LibraryBook::Author(Name ref){
	char* temp5 = new char[10]{ "Umair" };
	char* temp6 = new char[10]{ "Abbas" };
	ref.Set_FirstName(temp5);
	ref.Set_LastName(temp6);
	cout << "Author: ";
	cout << ref.Get_FirstName();
	cout << " ";
	cout << ref.Get_LastName();
	cout << endl;
}
void LibraryBook::Publisher(Name ref){
	char* temp7 = new char[10]{ "Aamir" };
	char* temp6 = new char[10]{ "Abbas" };
	ref.Set_FirstName(temp7);
	ref.Set_LastName(temp6);
	cout << "Publisher: ";
	cout<<ref.Get_FirstName();
	cout << " ";
	cout<<ref.Get_LastName();
	cout << endl;
}
void LibraryBook::LastIssue(Date ref){
	ref.Set_Day(10);
	ref.Set_Month(3);
	ref.Set_Year(2010);
	cout<< "LAst issue Date: "<<ref.Get_Day();
	cout << "-";
	cout<<ref.Get_Month();
	cout << "-";
	cout<<ref.Get_Year();
	cout << endl;
}
