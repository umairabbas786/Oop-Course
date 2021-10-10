#pragma once
#include"CarbonFootPrint.h"
class Electricity:public CarbonFootPrint
{
	float avg;
	const int kwh;
	const float emi;
	int month;
public:
	Electricity();
	Electricity(float,  int);
	Electricity(const Electricity&);
	~Electricity();
	float Get_Carbon_Print();
	/*void Set_Average(float);
	float Get_Average();
	void Set_Month(int );
	int Get_Month();*/
};

