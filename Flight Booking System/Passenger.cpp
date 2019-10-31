// Implementation file for the Passenger class
#include "Passenger.h"
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

Passenger::Passenger() {
	NumOfFlights = 0;
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

void Passenger::BookFlight(Flight MyFlight) {
	if (NumOfFlights == 7) {
		cout << "Max bookings reached" << endl;
		return;
	}
	else
		BookedFlights[NumOfFlights++] = &MyFlight;
}

void Passenger::CancelFlight(string FlightNumber) {
	if (NumOfFlights == 0) {
		cout << "No flights booked";
		return;
	}
	else {
		for (int i = 0; i < NumOfFlights; i++) { // sequential search
			if (FlightNumber == BookedFlights[i]->GetFlightID()) {
				BookedFlights[i] = NULL;
				NumOfFlights--;
				cout << "Flight " << FlightNumber << " is cancelled";
				for (int j = i; j < NumOfFlights; j++) { //reorganizing the array after one of the elements is null
					BookedFlights[j] = BookedFlights[j+1];
				}
				return;
			}
			if (i == NumOfFlights - 1)
				cout << "Not Found" << endl;
		}
	}
}
Passenger::~Passenger() {
	cout << "Passenger has been destroyed" << endl;
}