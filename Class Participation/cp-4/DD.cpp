#include "DD.h"

DD::DD():CC(0,0,0,0,0,0,0,0,0)
{
	d1 = 0;
	d2 = 0;
	d3 = 0;
}
DD::DD(int a, int b, int c, int aa, int bb, int cc, int aaa, int bbb, int ccc, int aaaa, int bbbb, int cccc) :CC(aa,bb,cc,aaa,bbb,ccc,aaaa,bbbb,cccc)
{
	d1 = a;
	d2 = b;
	d3 = c;
}
void DD::SetD1(int a)
{
	d1 = a;
}
void DD::SetD2(int b)
{
	d2 = b;
}
void DD::SetD3(int c)
{
	d3 = c;
}
int DD::GetD1()
{
	return d1;
}
int DD::GetD2()
{
	return d2;
}
int DD::GetD3()
{
	return d3;
}