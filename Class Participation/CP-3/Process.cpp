#include <iostream>
#include "Process.h"
using namespace std;
Process::Process() : p_id(sharedLocation++)
{
	cout << "DFLT" << endl;
}
Process::Process(int id) : p_id(sharedLocation += id)
{
	cout << "PRMTR" << endl;
}
int Process::getID()
{
	return p_id;
}
void Process::setStatus()
{
	sharedLocation = -1;
}
int Process::getStatus()
{
	return sharedLocation;
}
