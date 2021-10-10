#include <iostream>
#include "MobileNetwork.h"
using namespace std;

void Display_One(MobileNetwork obj1){
	cout << "Name Is: " << obj1.Get_Name() << endl;
	cout << "Mobile_Number Is: " << obj1.Get_Number() << endl;
	cout << "Type Is: " << obj1.Get_Type() << endl;
	cout << "Balance Is: " << obj1.Get_Balance() << endl;
	cout << "Call Rate is: " << obj1.Get_CallRae() << endl;
	obj1.Recharge();
	obj1.Discharge();
	obj1.CallCharges();
	obj1.CheckBalance();
}
void Display_Two(MobileNetwork obj2){
	cout << "Name Is: " << obj2.Get_Name() << endl;
	cout << "Mobile_Number Is: " << obj2.Get_Number() << endl;
	cout << "Type Is: " << obj2.Get_Type() << endl;
	cout << "Balance Is: " << obj2.Get_Balance() << endl;
	cout << "Call Rate is: " << obj2.Get_CallRae() << endl;
	obj2.Recharge();
	obj2.Discharge();
	obj2.CallCharges();
	obj2.CheckBalance();
}
void Display_Three(MobileNetwork obj3){
	cout << "Name Is: " << obj3.Get_Name() << endl;
	cout << "Mobile_Number Is: " << obj3.Get_Number() << endl;
	cout << "Type Is: " << obj3.Get_Type() << endl;
	cout << "Balance Is: " << obj3.Get_Balance() << endl;
	cout << "Call Rate is: " << obj3.Get_CallRae() << endl;
	obj3.Recharge();
	obj3.Discharge();
	obj3.CallCharges();
	obj3.CheckBalance();
}

int main()
{
	MobileNetwork();
	MobileNetwork("Umair", 03027064542, "none", 55.5, 10.0);
	MobileNetwork obj1,obj2,obj3;
	obj1.Set_Name("umair");
	obj1.Set_Number(03027064542);
	obj1.Set_Type("daily");
	obj1.Set_Balance(90.29);
	obj1.Set_CallRate(1.25);

	obj2.Set_Name("Asim");
	obj2.Set_Number(03313131311);
	obj2.Set_Type("weekly");
	obj2.Set_Balance(259.99);
	obj2.Set_CallRate(0.75);

	obj3.Set_Name("Aamir");
	obj3.Set_Number(03004204656);
	obj3.Set_Type("monthly");
	obj3.Set_Balance(450.50);
	obj3.Set_CallRate(0.25);

	Display_One(obj1);
	Display_Two(obj2);
	Display_Three(obj3);

	system("pause");
	return 0;
}