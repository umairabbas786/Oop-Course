#pragma once
#include "CC.h"
class DD : private CC
{
private:
	int d1;
protected:
	int d2;
public:
	int d3;
	DD();
	DD(int , int, int , int , int , int , int , int , int , int , int , int );
	void SetD1(int);
	void SetD2(int);
	void SetD3(int);
	int GetD1();
	int GetD2();
	int GetD3();
};

