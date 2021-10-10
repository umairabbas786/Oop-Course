#include "Date.h"
#include <iostream>
using namespace std;

Date::Date() {
	day = 01;
	month = 01;
	year = 2000;
}
Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;

	if (!ValidateDate()) {
		day = 01;
		month = 01;
		year = 2000;
	}

}
Date::Date(const Date& ref) {
	day = ref.day;
	month = ref.month;
	year = ref.year;
}
void Date::Set_Day(int d) {
	day = d;
}
void Date::Set_Month(int m) {
	month = m;
}
void Date::Set_Year(int y) {
	year = y;
}
int Date::Get_Day() {
	return day;
}
int Date::Get_Month() {
	return month;
}
int Date::Get_Year() {
	return year;
}
bool Date::InputDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
	if (ValidateDate()) {
		return true;
	}
	else {
		return false;
	}
}
bool Date::CopyDate(Date& ref) {
	day = ref.day;
	month = ref.month;
	year = ref.year;
	return true;
}
bool Date::InputCompleteDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
	return true;
}
Date& Date::GetDate() const {
	Date x;
	x.day;
	x.month;
	x.year;
	return x;
}
void Date::RetrieveDate(int& d, int& m, int& y) const {
	d = day;
	m = month;
	y = year;
}
void Date::ShowDate()const {
	cout << day << "-" << month << "-" << year << endl;
}
bool Date::IsEqual(Date& ref) {
	if (ref.day == day && ref.month == month && ref.year == year) {
		return true;
	}
	else {
		return false;
	}
}
bool Date::IsLeapYear() {
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		return true;
	}
	else {
		return false;
	}
}
Date::~Date() {
	day = 0;
	month = 0;
	year = 0;
}