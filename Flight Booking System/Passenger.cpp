// Implementation file for the Passenger class
#include <iostream>
#include <string>
#include "Passenger.h"
using std::cout;
using std::string;
using std::endl;

Passenger::Passenger() {
	cout << "Passenger has been created" << endl;
}

void Passenger::SetFirstName(string FirstName) {
	_FirstName = FirstName;
}
void Passenger::SetLastName(string LastName) {
	_LastName = LastName;
}

void Passenger::SetPassPortNumber(string PassNum) {
	_PassportNumber = PassNum;
}

string Passenger::GetFirstName() const {
	return _FirstName;
}

string Passenger::GetLastName() const {
	return _LastName;
}

string Passenger::GetPassportNumber() const {
	return _PassportNumber;
}

Passenger::~Passenger() {
	cout << "Passenger has been destroyed" << endl;
}