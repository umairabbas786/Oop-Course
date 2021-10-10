#pragma once
#include"PoweredDevice.h"
class Scanner:virtual public PoweredDevice
{
public:
	int sid;
	Scanner();
	Scanner(int, int);
	~Scanner();
	void Display();
	/*void setSID(int);
	int getSID();*/
};

