#pragma once
#include"CarbonFootPrint.h"
class NaturalGas:public CarbonFootPrint
{
	float gas;
	const int cubicfeet;
	const float emi;
	int month;
public:
	NaturalGas();
	NaturalGas(float, int);
	NaturalGas(const NaturalGas&);
	~NaturalGas();
	float Get_Carbon_Print();
	/*void Set_Average(float);
	float Get_Average();
	void Set_Month(int);
	int Get_Month();*/
};

