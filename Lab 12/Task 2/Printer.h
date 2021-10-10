#pragma once
#include "PoweredDevice.h"
class Printer : virtual public PoweredDevice
{
public:
	int pid;
	Printer();
	Printer(int, int);
	~Printer();
	void Display();
	/*void setPID(int);
	int getPID();*/
};

