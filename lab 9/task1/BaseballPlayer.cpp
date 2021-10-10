#include "BaseballPlayer.h"
#include <iostream>
using namespace std;
BaseballPlayer::BaseballPlayer()
{
	battingAverage = 0;
	totalRuns = 0;
}
BaseballPlayer::BaseballPlayer(double ba, int r, char*ptr, int a):Person(ptr,a)
{
	battingAverage = ba;
	totalRuns = r;
}
BaseballPlayer::BaseballPlayer(const BaseballPlayer& obj)
{
	battingAverage = obj.battingAverage;
	totalRuns = obj.totalRuns;
}
void BaseballPlayer::Set_Average(double ba)
{
	battingAverage = ba;
}
void BaseballPlayer::Set_Run(int r)
{
	totalRuns = r;
}
double BaseballPlayer::Get_Average()
{
	return battingAverage;
}
int BaseballPlayer::Get_Run()
{
	return totalRuns;
}
void BaseballPlayer::display()
{
	Person::display();
	cout << "Batting Average:" << battingAverage << endl;
	cout << "Total Runs:" << totalRuns << endl;
}
BaseballPlayer::~BaseballPlayer() {}
