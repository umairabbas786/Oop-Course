#pragma once
class Name
{
private:
	char* firstname;
	char* lastname;
	bool isValidName() {
		if (firstname <= "a" || firstname >= "z" || firstname <= "A" || firstname >= "Z" || firstname == " " && lastname <= "a" || lastname >= "z" || lastname <= "A" || lastname >= "Z" || lastname == " ") {
			return false;
		}
		else {
			return true;
		}
	}
	int Strlen(char* firstname) {
		int i = 0;
		while (firstname[i] != '\0') {
			i++;
		}
		return i;
	}
	void Strcopy(char* &existed, char* copy) {
		existed = new char[Strlen(copy) + 1];
		for (int i = 0; i < Strlen(copy); ++i)
			existed[i] = copy[i];

		existed[Strlen(copy)] = '\0';
	}
public:
	Name(char* = nullptr, char* = nullptr);			//paramiterized constructor with default Arguments
	Name(const Name&);				//copy constructor
	~Name();					//destructor
	void CopyName(Name&);
	void Set_FirstName(char*);
	void Set_LastName(char*);
	char* Get_FirstName();
	char* Get_LastName();
	void CamelCase();		//make first letter capital.
	void ToLower();			//convert to lower case.
	void ToUpper();			//convert to upper case.
	int NameLength();
	void SwapNames();
	void Display();
	char* Fullname();
};

