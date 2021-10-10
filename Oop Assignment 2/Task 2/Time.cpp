#include "Time.h"
#include <iostream>
using namespace std;

Time::Time() {
	hour = 11;
	minute = 10;
	second = 30;
	type = nullptr;
}
Time::Time(int h, int m, int s) {
	hour = h;
	minute = m;
	second = s;

	if (!ValidateTime()) {
		Time::Time();
	}

}
Time::Time(const Time& ref) {
	hour = ref.hour;
	minute = ref.minute;
	second = ref.second;
}
void Time::Set_Hour(int h){
	hour = h;
}
void Time::Set_Minute(int m){
	minute = m;
}
void Time::Set_Second(int s){
	second = s;
}
int Time::Get_Hour(){
	return hour;
}
int Time::Get_Minute(){
	return minute;
}
int Time::Get_Second(){
	return second;
}
bool Time::InputTime(int h, int m, int s) {
	char* temp1 = new char[3]{"pm"};
	char* temp2 = new char[3]{ "am" };
	hour = h;
	minute = m;
	second = s;
	if (ValidateTime()) {
		if (hour > 12) {
			hour = hour - 12;
			type = temp1;
		}
		else if (hour < 12) {
			type = temp2;
		}
		else {
			type = nullptr;
		}
		return true;
	}
	else {
		return false;
	}
}
bool Time::CopyTime(Time& ref) {
	hour = ref.hour;
	minute = ref.minute;
	second = ref.second;
	return true;
}
bool Time::InputCompleteTime(int h, int m, int s) {
	hour = h;
	if(type){
		delete [] type;
		type = nullptr;
	}
	char* temp1 = new char[3]{ "pm" };
	char* temp2 = new char[3]{ "am" };
	if (hour > 12) {
		hour = hour - 12;
		type = temp1;
	}
	else if (hour < 12) {
		type = temp2;
	}
	else {
		type = nullptr;
	}
	minute = m;
	second = s;
	return true;
}
Time& Time::GetTime() const {
	Time x;
	x.hour;
	x.minute;
	x.second;
	x.type;
	return x;
}
void Time::RetrieveTime(int& h, int& m, int& s,char* &t) const {
	char* temp1 = new char[3]{ "pm" };
	char* temp2 = new char[3]{ "am" };
	h = hour;
	if (h > 12) {
		h = h - 12;
		t = temp1;
	}
	else if (hour < 12) {
		t = temp2;
	}
	else {
		t = nullptr;
	}
	m = minute;
	s = second;
}
void Time::ShowTime()const {
	cout <<"Time Is: "<< hour << ":" << minute << ":" << second << " " << type << endl;
}
bool Time::IsEqual(Time& ref) {
	if (ref.hour == hour && ref.minute == minute && ref.second == second) {
		return true;
	}
	else {
		return false;
	}
}
Time::~Time() {
	hour = 0;
	minute = 0;
	second = 0;
	type = nullptr;
}