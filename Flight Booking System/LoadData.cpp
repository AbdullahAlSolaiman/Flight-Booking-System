#include <fstream>
#include <string>
#include <iostream>
#include "Flight.h"
using std::endl;

void LoadData(Flight Flights[]) {
	std::fstream Read("C:\\Users\\Tareq\\source\\repos\\TareqPi\\Flight-Booking-System\\Flight Booking System\\4NovSnapshot.csv", std::ios::in);
	if (Read.fail()) {
		std::cout << "Error loading data" << std::endl;
		exit(-1);
	}
	int Num = 0;
	string Day, Month, Year, Airline, FlightID, FlightType, Source, Destination, PlaneName, Price, Duration;
	
	while (getline(Read, Day, '/') && getline(Read, Month, '/') && getline(Read, Year, ',') && getline(Read, Airline, ',') && 
		getline(Read, FlightID, ',') && getline(Read, FlightType, ',') && getline(Read, Source, ',') && getline(Read, Destination, ',')
		&& getline(Read, PlaneName, ',') && getline(Read, Price, ',') && getline(Read, Duration)) {
		Flights[Num].SetAirline(Airline);
		Flights[Num].SetFlightID(FlightID);
		Flights[Num].SetFlightType(FlightType);
		Flights[Num].SetSource(Source);
		Flights[Num].SetDestination(Destination);
		Flights[Num].SetPrice(std::stof(Price));
		Flights[Num].SetDuration(std::stof(Duration));
		Flights[Num].SetPlane(PlaneName);
		Flights[Num++].SetDate(Day, Month, Year);
	}
	Read.close();
}