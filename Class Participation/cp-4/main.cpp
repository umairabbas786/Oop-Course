#include <iostream>
#include "AA.h"
#include "BB.h"
#include "CC.h"
#include "DD.h"

using namespace std;

int main()
{
	AA obj1, obj2, obj3;
	obj1.SetA1(1);
	obj2.SetA2(2);
	obj3.SetA3(3);

	cout << obj1.GetA1() << " " << obj2.GetA2() << " " << obj3.GetA3() << endl;
	

	BB obj4, obj5, obj6;
	obj4.SetB1(4);
	obj5.SetB2(5);
	obj6.SetB3(6);

	cout << obj4.GetB1() << " " << obj5.GetB2() << " " << obj6.GetB3() << endl;

	CC obj7, obj8, obj9;
	obj7.SetC1(7);
	obj8.SetC2(8);
	obj9.SetC3(9);

	cout << obj7.GetC1() << " " << obj8.GetC2() << " " << obj9.GetC3() << endl;

	DD obj10, obj11, obj12;
	obj10.SetD1(10);
	obj11.SetD2(11);
	obj12.SetD3(12);

	cout << obj10.GetD1() << " " << obj11.GetD2() << " " << obj12.GetD3() << endl;


	return 0;
}