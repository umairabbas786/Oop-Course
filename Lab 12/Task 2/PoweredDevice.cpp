#include "PoweredDevice.h"
#include<iostream>
using namespace std;

PoweredDevice::PoweredDevice()
{
	pd = 102;
}
PoweredDevice::PoweredDevice(int id)
{
	pd = id;

}
PoweredDevice::~PoweredDevice()
{
	pd = 0;
}
void PoweredDevice::Display()
{
	cout << "PoweredDevice ID: " << pd << endl;
}
