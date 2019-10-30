// Specification file for the Passenger class
#include "Date.h"
#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger {
private:
	std::string _FirstName;
	std::string _LastName;
	Date _DateOfBirth;     // object that has int day, int month, int year
	std::string _PassportNumber;
	
public:
	Passenger();
	void SetFirstName(std::string fname);
	void SetLastName(std::string lname);
	void SetPassPortNumber(std::string passnum);

	std::string GetFirstName() const;
	std::string GetLastName() const;
	std::string GetPassportNumber() const;

	~Passenger();
};
#endif
