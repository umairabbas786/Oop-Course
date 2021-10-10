#pragma once
#include"CarbonFootPrint.h"
class Vehicles:public CarbonFootPrint
{
private:
	float mile;
	int week;
	float eff;
	float pound;
	float emi;
public:
	Vehicles();
	Vehicles(float,int,float,float,float);
	Vehicles(const Vehicles&);
	~Vehicles();
	float Get_Carbon_Print();
	/*void Set_Miles(float);
	void Set_Weeks(int);
	void Set_Pound(float);
	void Set_Emission(float);
	void Set_Efficiency(float);
	float Get_Miles();
	int Get_Weeks();
	float Get_Efficiency();
	float Get_Pound();
	float Get_Emission();*/

};

