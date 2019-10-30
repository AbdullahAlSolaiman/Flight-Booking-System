// Specification file for the Flight class
#ifndef FLIGHT_H
#define FLIGHT_H

#include "Plane.h"
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
		string _DepartureTime;
		string _ArrivalTime;
		Plane* _FlightPlane;
	public:
		Flight(string, string, string, string, string, string, string, float, float, Plane);
		Flight();

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

		void SetDepartureTime(string);
		string GetDepartureTime() const;

		void SetArrivalTime(string);
		string GetArrivalTime() const;

		void SetDuration(float);
		float GetDuration() const;

		void SetPrice(float);
		float GetPrice() const;

		void SetPlane(Plane);
		Plane GetPlane() const;

		void PrintDetails() const;

		~Flight();
};

#endif