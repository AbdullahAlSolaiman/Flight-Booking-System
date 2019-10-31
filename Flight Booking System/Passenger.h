// Specification file for the Passenger class
#ifndef PASSENGER_H
#define PASSENGER_H
#include "Date.h"
#include "Flight.h"
#include <string>
#define MaxFlights 7
using std::string;

class Passenger {
private:
	string _FirstName;
	string _LastName;
	Date _DateOfBirth;     // object that has int day, int month, int year
	string _PassportNumber;
	string _Password;
	Flight* BookedFlights[MaxFlights];
	int NumOfFlights;
public:
	Passenger();
	Passenger(string, string, string, string);
	void SetFirstName(string fname);
	void SetLastName(string lname);
	void SetPassPortNumber(string passnum);
	void SetPassword(string);

	string GetPassword() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetPassportNumber() const;

	void ViewBookedFlights() const;
	void BookFlight(Flight&);
	void CancelFlight(string);
	~Passenger();
};
#endif
