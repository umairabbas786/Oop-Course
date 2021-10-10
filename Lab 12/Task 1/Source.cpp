#include<iostream>
#include"CarbonFootPrint.h"
#include"Electricity.h"
#include"NaturalGas.h"
#include"Vehicles.h"
using namespace std;

void Display(CarbonFootPrint* par)
{
   float ref =par->Get_Carbon_Print();
   cout << ref<<endl;
}
int main()
{
    CarbonFootPrint* obj;
    Electricity elec(12.1,9);
    NaturalGas ng(11.1,8);
    Vehicles v(1.2,52,3.4,4.5,6.7);

    obj = &elec;
    cout << "Electricity Emission of Co2 in Pounds :" << endl;
    Display(obj);
    cout << endl;
    obj = &ng;
    cout << "Natural Gas Emission of Co2 in Pounds : "<<endl;
    Display(obj);
    obj = &v;
    cout << "Vehicles Emission of Co2 in Pounds :" << endl;
    Display(obj);

    return 0;
}