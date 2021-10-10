#include <iostream>
using namespace std;


class A
{
private:
	int val;
public:
	A() {};
	A(int v) {val = v;cout << "class A peramiterized constructor" << endl;}
};

class B : virtual public A
{
public:
	B(int v) :A(v){ cout << "class B peramiterized constructor" << endl; }
};

class C : virtual public A
{
public:
	C(int v) :A(v){ cout << "class C peramiterized constructor" << endl; }
};

class D : public B,public C
{
public:
	D(int v) :C(v),B(v),A(v){ cout << "class D peramiterized constructor" << endl; }
};

int main()
{
	D obj(5);

	system("pause");
	return 0;
}