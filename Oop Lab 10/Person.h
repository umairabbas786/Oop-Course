#pragma once
class Person
{
private:
	int Strlen(char* name) {
		int i = 0;
		while (name[i] != '\0') {
			i++;
		}
		return i;
	}
	void Strcopy(char*& existed, char* copy) {
		existed = new char[Strlen(copy) + 1];
		for (int i = 0; i < Strlen(copy); ++i)
			existed[i] = copy[i];

		existed[Strlen(copy)] = '\0';
	}
public:
	char* name;
	int birth_year;
	Person();
	Person(char*, int);
	void Set_Name(char*);
	void Set_Birth_Year(int);
	char* Get_Name();
	int Get_Birth_Year();
	void Display();
};

