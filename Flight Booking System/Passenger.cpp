// Implementation file for the Passenger class
#include "Passenger.h"
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

Passenger::Passenger() {
	NumOfFlights = 0;
	_FirstName = "";
	_LastName = "";
	_PassportNumber = "";
}

Passenger::Passenger(string FirstName, string LastName, string PassportNumber, string Password) {
	NumOfFlights = 0;
	_FirstName = FirstName;
	_LastName = LastName;
	_PassportNumber = PassportNumber;
	_Password = Password;
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

void Passenger::SetPassword(string Password) {
	_Password = Password;
}

string Passenger::GetPassword() const {
	return _Password;
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

void Passenger::ViewBookedFlights() const {
	if (NumOfFlights == 0) {
		cout << "No booked flights" << endl << endl;
		return;
	}
	for (int i = 0; i < NumOfFlights; i++) {
		cout << 1 + i << ")";
		BookedFlights[i]->PrintDetails();
		cout << "----------------------------------" << endl;
	}
}

void Passenger::BookFlight(Flight &MyFlight) {
	if (NumOfFlights == 7) {
		cout << "Max bookings reached" << endl;
		return;
	}
	else {
		BookedFlights[NumOfFlights++] = &MyFlight;
		cout << GetFirstName() << " " << GetLastName() << " have successfully booked flight " << MyFlight.GetFlightID()
			<< " from " << MyFlight.GetSource() << " to " << MyFlight.GetDestination() << endl << endl;
	}
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
				cout << "Flight " << FlightNumber << " is cancelled" << endl << endl;
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
	if (NumOfFlights != 0)
		delete[] BookedFlights;
}