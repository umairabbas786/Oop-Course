#include "Name.h"
#include <iostream>
using namespace std;

Name::Name(char* f, char* l) {
	if (isValidName()) {
		Strcopy(firstname, f);
		Strcopy(lastname, l);
	}
}
Name::Name(const Name& ref) {
	if (isValidName()) {
		Strcopy(firstname, ref.firstname);
		Strcopy(lastname, ref.lastname);
	}
}
Name::~Name() {
	delete[] firstname;
	firstname = nullptr;
	delete[] lastname;
	lastname = nullptr;
}
void Name::CopyName(Name& ref) {
	if (isValidName()) {
		Strcopy(firstname, ref.firstname);
		Strcopy(lastname, ref.lastname);
	}
}
void Name::Set_FirstName(char* f) {
	if (firstname) {
		delete[] firstname;
		firstname = nullptr;
	}
	Strcopy(firstname, f);
}
void Name::Set_LastName(char* l) {
	if (lastname) {
		delete[] lastname;
		lastname = nullptr;
	}
	Strcopy(lastname, l);
}
char* Name::Get_FirstName() {
	char* localtemp;
	localtemp = new char[Strlen(firstname) + 1];
	Strcopy(localtemp, firstname);
	return localtemp;
	//return firstname;
}
char* Name::Get_LastName() {
	char* localtemp;
	localtemp = new char[Strlen(lastname) + 1];
	Strcopy(localtemp, lastname);
	return localtemp;
	//return lastname;
}
void Name::CamelCase() {
	for (int i = 0; i < Strlen(firstname); i++) {
		if (firstname[0] >= 97 && firstname[0] <= 122) {
			firstname[0] -= 32;
		}
		else if (firstname[i] >= 65 && firstname[i] <= 90) {
			firstname[i] += 32;
		}
		else if(firstname[i] >= 97 && firstname[i] <= 122){
			firstname[i] += 0;
		}
	}
	for (int i = 0; i < Strlen(lastname); i++) {
		if (lastname[0] >= 97 && lastname[0] <= 122) {
			lastname[0] -= 32;
		}
		else if (lastname[i] >= 65 && lastname[i] <= 90) {
			lastname[i+1] += 32;
		}
		else if(lastname[i] >= 97 && lastname[i] <= 122){
			lastname[i] += 0;
		}
	}
}
void Name::ToLower() {
	for (int i = 0; i < Strlen(firstname); i++) {
		if (firstname[i] >= 65 && firstname[i] <= 90) {
			firstname[i] += 32;
		}
	}
	for (int i = 0; i < Strlen(lastname); i++) {
		if (lastname[i] >= 65 && lastname[i] <= 90) {
			lastname[i] += 32;
		}
	}
}
void Name::ToUpper() {
	for (int i = 0; i < Strlen(firstname); i++) {
		if (firstname[i] >= 97 && firstname[i] <= 122) {
			firstname[i] -= 32;
		}
	}
	for (int i = 0; i < Strlen(lastname); i++) {
		if (lastname[i] >= 97 && lastname[i] <= 122) {
			lastname[i] -= 32;
		}
	}
}
int Name::NameLength() {
	return Strlen(firstname) + Strlen(lastname);
}
void Name::SwapNames() {
	char* temp1 = new char[50];
	char* temp2 = new char[50];
	Strlen(firstname);
	Strcopy(temp1, firstname);
	Strlen(lastname);
	Strcopy(temp2, lastname);
	Strlen(temp1);
	Strlen(temp2);
	Strcopy(firstname, temp2);
	Strcopy(lastname, temp1);
}
void Name::Display() {
	cout << Get_FirstName() << " " << Get_LastName() << endl;
}
char* Name::Fullname() {
	char* fullname=new char[50];
	int len = 0;
	Strlen(firstname);
	Strcopy(fullname, firstname);
	len = Strlen(fullname);
	Strlen(lastname);
	for (int i = 0; i < Strlen(lastname); i++) {
		fullname[len] = lastname[i];
		len++;
	}
	fullname[len] = '\0';
	return fullname;
}