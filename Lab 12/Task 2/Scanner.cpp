#include "Scanner.h"
#include<iostream>
using namespace std;
Scanner::Scanner() :PoweredDevice()
{
	sid = 121;
}
Scanner::Scanner(int id1, int id2) : PoweredDevice(id1)
{
	sid = id2;
}
Scanner::~Scanner()
{
	sid = 0;
}
void Scanner::Display()
{
	PoweredDevice::Display();
	cout << "\nScanner ID: " << sid << endl;
}
