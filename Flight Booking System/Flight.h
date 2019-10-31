// Specification file for the Flight class
#ifndef FLIGHT_H
#define FLIGHT_H

#include "Date.h"
#include <string>
using std::string;

class Flight {
	private:
		float _Price;
		float _Duration;
		string _Airline;
		string _FlightID;
		string _FlightType;
		string _Source;
		string _Destination;
		Date _DepartureDate;
		string _FlightPlane;
	public:
		Flight(string, string, string, string, string, float, float, string);
		Flight();

		void SetDate(string, string, string);

		void SetAirline(string);
		string GetAirline() const;

		void SetFlightID(string);
		string GetFlightID() const;

		void SetFlightType(string);
		string GetFlightType() const;

		void SetSource(string);
		string GetSource() const;

		void SetDestination(string);
		string GetDestination() const;

		void SetDuration(float);
		float GetDuration() const;

		void SetPrice(float);
		float GetPrice() const;

		void SetPlane(string);
		string GetPlane();

		void PrintDetails();

		~Flight();
};

#endif