#pragma once
#include"Person.h"
class BaseballPlayer:public Person
{
private:
	double battingAverage;
	int totalRuns;
public:
	BaseballPlayer();
	BaseballPlayer(double, int,char*,int );
	BaseballPlayer(const BaseballPlayer& );
	void Set_Average(double ba);
	void Set_Run(int r);
	double Get_Average();
	int Get_Run();
	void display();
	~BaseballPlayer();
};

