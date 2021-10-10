#pragma once
#include "AA.h"
class BB : public AA
{
private:
	int b1;
protected:
	int b2;
public:
	int b3;
	BB();
	BB(int , int, int , int , int, int );
	void SetB1(int);
	void SetB2(int);
	void SetB3(int);
	int GetB1();
	int GetB2();
	int GetB3();
};

