#pragma once
#include "Scanner.h"
#include "Printer.h"
class Copier :public Printer, public Scanner
{
public:
	Copier();
	Copier(int, int, int);
	~Copier();
	void Display();
};

