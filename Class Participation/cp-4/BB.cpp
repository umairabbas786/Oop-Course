#include "BB.h"

BB::BB():AA(0,0,0)
{
	b1 = 0;
	b2 = 0;
	b3 = 0;
}

BB::BB(int a, int b, int c, int aa, int bb, int cc):AA(aa, bb, cc)
{
	b1 = a;
	b2 = b;
	b3 = c;
}

void BB::SetB1(int a)
{
	b1 = a;
}
void BB::SetB2(int b)
{
	b2 = b;
}
void BB::SetB3(int c)
{
	b3 = c;
}
int BB::GetB1()
{
	return b1;
}
int BB::GetB2()
{
	return b2;
}
int BB::GetB3()
{
	return b3;
}
