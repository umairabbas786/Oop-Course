#include "Electricity.h"

Electricity::Electricity() :kwh(8), emi(1.37)
{
		avg = 100;
		month = 12;
}

Electricity::Electricity(float a, int m):kwh(8), emi(1.37)
	{
		avg = a;
		month = m;
	}
Electricity::Electricity(const Electricity&obj):kwh(8),emi(1.34)
{
	avg = obj.avg;
	month = obj.month;
}
Electricity::~Electricity()
{
	avg = 0;
	month = 0;
}
float Electricity::Get_Carbon_Print()
{
	float var;
		var = avg / kwh;
		var = var * month * emi;
		return var;
}
//void Electricity::Set_Average(float av)
//{
//	avg = av;
//}
//float Electricity::Get_Average()
//{
//	return avg;
//}
//void Electricity::Set_Month(int m)
//{
//	month = m;
//}
//int Electricity::Get_Month()
//{
//	return month;
//}