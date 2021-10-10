#pragma once
#include "BB.h"
class CC : protected BB
{
private:
	int c1;
protected:
	int c2;
public:
	int c3;
	CC();
	CC(int, int, int, int, int, int, int, int, int);
	void SetC1(int);
	void SetC2(int);
	void SetC3(int);
	int GetC1();
	int GetC2();
	int GetC3();
};

