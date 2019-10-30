// Implementation file for the Date class
#include <iostream>
#include "Date.h"

Date::Date(int day = 0, int month = 0, int year = 0) {
	_Day = day;
	_Month = month;
	_Year = year;
	std::cout << "Date has been created" << std::endl;
}

Date::~Date() {
	std::cout << "Date has been destroyed" << std::endl;
}

void Date::test() {
	std::cout << "Testing Date" << std::endl;
}

void Date::test1(){
	std::cout << "test1";
}

void Date::setDay(int day) {
	
	_Day = day;

}
void Date::setMonth(int month) {
	_Month = month;
}
void Date::setYear(int year) {
	_Year = year;
}

int Date::GetDay()const { return _Day; }
int Date::GetMonth()const { return _Month; }
int Date::GetMonth()const { return _Year; }
