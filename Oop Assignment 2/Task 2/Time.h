#pragma once
class Time
{
private:
	bool ValidateTime() {
		if (hour > 0 || hour <= 23 && minute >= 0 || minute <=59 && second >= 0 || second <= 59) {
			return true;
		}
		else {
			return false;
		}
	}
	int hour;
	int minute;
	int second;
	char* type;
public:
	Time();					//default constructor
	Time(int, int, int);				//parameterized Constructor
	Time(const Time&);					//copy constructor
	void Set_Hour(int);
	void Set_Minute(int);
	void Set_Second(int);
	int Get_Hour();
	int Get_Minute();
	int Get_Second();
	bool InputTime(int, int, int);
	bool CopyTime(Time&);
	bool InputCompleteTime(int, int, int);
	Time& GetTime()const;
	void RetrieveTime(int&, int&, int&,char*&)const;
	void ShowTime()const;
	bool IsEqual(Time&);
	~Time();						//destructor
};

