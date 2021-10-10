#include<iostream>
#include"PoweredDevice.h"
#include"Scanner.h"
#include"Printer.h"
#include"Copier.h"
using namespace std;
int main()
{
	Copier obj(123, 456, 789);
	cout << "Copier DISPLAY: " << endl;
	obj.Display();
	return 0;
}