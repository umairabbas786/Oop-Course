#pragma once
class AA
{
private:
	int a1;
protected:
	int a2;
public:
	int a3;
	AA();
	AA(int , int , int);
	void SetA1(int);
	void SetA2(int);
	void SetA3(int);
	int GetA1();
	int GetA2();
	int GetA3();
};

