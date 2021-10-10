#pragma once
class SalonEmployee
{
private:
	int id;
	char* name;
	char* gender;
	char* contact;
	double salary;
	char* shift;
	int Strlen(char* x) {
		int i = 0;
		while (x[i] != '\0') {
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
	SalonEmployee(int = 0, char* = nullptr, char* = nullptr, char* = nullptr, double = 0, char* = nullptr); //paramiterized constructor with default argument.
	SalonEmployee(SalonEmployee& ref); //copy constructor.
	~SalonEmployee(); //destructor.
	//setters
	void SetId(int);
	void SetName(char*);
	void SetGender(char*);
	void SetContact(char*);
	void SetSalary(double);
	void SetShift(char*);
	//getters
	const int GetId();
	char* GetName();
	char* GetGender();
	char* GetContact();
	double GetSalary();
	char* GetShift();
};