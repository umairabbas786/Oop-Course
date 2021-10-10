#include "CC.h"

CC::CC() :BB(0, 0, 0, 0, 0, 0)
{
	c1 = 0;
	c2 = 0;
	c3 = 0;
}

CC::CC(int a, int b, int c, int aa, int bb, int cc, int aaa, int bbb, int ccc):BB(aa, bb, cc, aaa, bbb, ccc)
{
	c1 = a;
	c2 = b;
	c3 = c;
}

void CC::SetC1(int a)
{
	c1 = a;
}
void CC::SetC2(int b)
{
	c2 = b;
}
void CC::SetC3(int c)
{
	c3 = c;
}
int CC::GetC1()
{
	return c1;
}
int CC::GetC2()
{
	return c2;
}
int CC::GetC3()
{
	return c3;
}
