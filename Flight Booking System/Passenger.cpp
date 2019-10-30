// Implementation file for the Passenger class
#include <iostream>
#include "Passenger.h"

Passenger::Passenger() {
	std::cout << "Passenger has been created" << std::endl;
}

Passenger::~Passenger() {
	std::cout << "Passenger has been destroyed" << std::endl;
}

void Passenger::test() {
	std::cout << "Testing Passenger" << std::endl;
}



void Passenger::SetFirstName(std::string fname) {
	_FirstName = fname;
}
void Passenger::SetLastName(std::string lname) {
	_LastName = lname;
}

void Passenger::SetPassPortNumber(std::string passnum) {
	_PassportNumber = passnum;
}

std::string Passenger::GetFirstName()const { return _FirstName; }
std::string Passenger::GetLastName()const { return _LastName; }
std::string Passenger::GetPassportNumber()const { return _PassportNumber; }

