#pragma once
class PoweredDevice
{
public:
	int pd;
	PoweredDevice();
	PoweredDevice(int);
	virtual ~PoweredDevice();
	/*void Set_PDID(int);
	int Get_PDID();*/
	void Display();
};

