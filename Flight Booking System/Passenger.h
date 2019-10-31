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
	Flight* BookedFlights[MaxFlights];
	int NumOfFlights;
public:
	Passenger();
	void SetFirstName(string fname);
	void SetLastName(string lname);
	void SetPassPortNumber(string passnum);

	string GetFirstName() const;
	string GetLastName() const;
	string GetPassportNumber() const;

	void BookFlight(Flight);
	void CancelFlight(string);
	~Passenger();
};
#endif
