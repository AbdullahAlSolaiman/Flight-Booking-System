// Implementation file for the Date class
#include <iostream>
#include "Date.h"
using std::cout;
using std::endl;

Date::Date(int Day, int Month, int Year) {
	_Day = Day;
	_Month = Month;
	_Year = Year;
	cout << "Date has been created" << endl;
}
void Date::SetDay(int Day) {
	_Day = Day;
}
void Date::SetMonth(int Month) {
	_Month = Month;
}
void Date::SetYear(int Year) {
	_Year = Year;
}
int Date::GetYear() const {
	return _Year;
}
int Date::GetDay() const {
	return _Day; 
}
int Date::GetMonth() const { 
	return _Month; 
}