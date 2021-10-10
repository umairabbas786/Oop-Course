#include "Vehicles.h"

Vehicles::Vehicles()
{
	emi = 1;
	mile = 2;
	week = 52;
	eff = 1.2;
	pound = 1.3;
}
Vehicles::Vehicles(float m, int w, float efi, float p, float e)
{
	mile = m;
	week = w;
	eff = efi;
	pound = p;
	emi = e;
}
Vehicles::Vehicles(const Vehicles& obj)
{
	mile = obj.mile;
	week = obj.week;
	eff = obj.eff;
	pound = obj.pound;
	emi = obj.emi;
}
Vehicles::~Vehicles()
{
	emi = 0;
	mile = 0;
	week = 0;
	eff = 0;
	pound = 0;
}
float Vehicles::Get_Carbon_Print()
{
	float var = mile * week;
	var = var / eff;
	var = var * pound*emi;
	
	return var;
}
//void Vehicles::Set_Miles(float m)
//{
//	mile = m;
//}
//float Vehicles::Get_Miles()
//{
//	return mile;
//}
//void Vehicles::Set_Weeks(int w)
//{
//	week = w;
//}
//int Vehicles::Get_Weeks()
//{
//	return week;
//}
//void Vehicles::Set_Efficiency(float ef)
//{
//	eff = ef;
//}
//float Vehicles::Get_Efficiency()
//{
//	return eff;
//}
//void Vehicles::Set_Pound(float p)
//{
//	pound = p;
//}
//float Vehicles::Get_Pound()
//{
//	return pound;
//}
//void Vehicles::Set_Emission(float e)
//{
//	emi = e;
//}
//float Vehicles::Get_Emission()
//{
//	return emi;
//}
