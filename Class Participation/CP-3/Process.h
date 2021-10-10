#pragma once
#include <iostream>
using namespace std;
class Process
{
private:
	const int p_id;
	static int sharedLocation;
public:
	Process();
	Process(int);
	int getID();
	static void setStatus();
	static int getStatus();
};

