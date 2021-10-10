#include "AA.h"
AA::AA()
{
	a1 = 0;
	a2 = 0;
	a3 = 0;
}
AA::AA(int a, int b, int c)
{
	a1 = a;
	a2 = b;
	a3 = c;
}
void AA::SetA1(int a)
{
	a1 = a;
}
void AA::SetA2(int b)
{
	a2 = b;
}
void AA::SetA3(int c)
{
	a3 = c;
}
int AA::GetA1()
{
	return a1;
}
int AA::GetA2()
{
	return a2;
}
int AA::GetA3()
{
	return a3;
}