#include "Copier.h"
#include<iostream>
using namespace std;
Copier::Copier() :Scanner(), Printer(){}
Copier::Copier(int id1, int id2, int id3) : Scanner(id1, id2), Printer(id1, id3){}
Copier::~Copier()
{
	cout << "Copier Destructor" << endl;
}
void Copier::Display()
{
	cout << "Powered Device Id:" << pd << endl;
	cout << "Printer Id: " << pid << endl;
	cout << "Scanner Id: " << sid << endl;
}