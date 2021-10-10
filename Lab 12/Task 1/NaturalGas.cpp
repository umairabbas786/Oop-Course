#include "NaturalGas.h"

NaturalGas::NaturalGas():cubicfeet(3),emi(120.61)
{
	gas = 100;
	month = 12;
}
NaturalGas::NaturalGas(float avg, int m) : cubicfeet(3), emi(120.61)
{
	gas = avg;
	month = m;
}
NaturalGas::NaturalGas(const NaturalGas&obj) : cubicfeet(3), emi(120.61)
{
	gas = obj.gas;
	month = obj.month;
}
NaturalGas::~NaturalGas()
{
	gas = 0;
	month = 0;
}
float NaturalGas::Get_Carbon_Print()
{
	float var;
	var = gas / cubicfeet;
	var = var * emi * month;
	return var;
}
//void NaturalGas::Set_Average(float a)
//{
//	gas = a;
//}
//float NaturalGas::Get_Average()
//{
//	return gas;
//}
//void NaturalGas::Set_Month(int m)
//{
//	month = m;
//}
//int NaturalGas::Get_Month()
//{
//	return month;
//}
