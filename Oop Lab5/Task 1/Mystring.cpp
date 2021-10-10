#include "Mystring.h"
#include <iostream>
#include<string>
using namespace std;

Mystring::Mystring() :size(5){}
Mystring::Mystring(char* array):size(strlen(array)){
	array = new char[size];
}
Mystring::Mystring(char* array,int s):size(s){
	myArray = new char[s];
	myArray = array;
}
void Mystring::setMyArray(char* array){
	myArray = array;
}
const char* Mystring::getMyArray() const{
	return myArray;
}
const int Mystring::getSize() const{
	return size;
}
void Mystring::print() const{
	cout << "String is : " << getMyArray()<< endl;
	cout << "Size of String is: " << getSize() << endl;
}
