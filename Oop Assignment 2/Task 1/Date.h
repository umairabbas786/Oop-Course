#pragma once
class Date
{
private:
	bool ValidateDate() {
		if (day > 0 && day <= 31 && month > 0 && month < 13 && year >= 2000 && year <= 2020) {
			return true;
		}
		else {
			return false;
		}
	}
	int day;
	int month;
	int year;
public:
	Date();					//default constructor
	Date(int, int, int);				//parameterized Constructor
	Date(const Date&);					//copy constructor
	void Set_Day(int);
	void Set_Month(int);
	void Set_Year(int);
	int Get_Day();
	int Get_Month();
	int Get_Year();
	bool InputDate(int, int, int);
	bool CopyDate(Date&);
	bool InputCompleteDate(int, int, int);
	Date& GetDate()const;
	void RetrieveDate(int&, int&, int&)const;
	void ShowDate()const;
	bool IsEqual(Date&);
	bool IsLeapYear();
	~Date();						//destructor
};

