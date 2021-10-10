#include "Printer.h"
#include<iostream>
using namespace std;

Printer::Printer() :PoweredDevice()
{
	pid = 567;
}
Printer::Printer(int id1, int id2) : PoweredDevice(id1)
{
	pid = id2;
}
Printer::~Printer()
{
	pid = 0;
}
void Printer::Display()
{
	PoweredDevice::Display();
	cout << "Printer ID: " << pid << endl;
}


