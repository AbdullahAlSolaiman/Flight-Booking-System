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
		string _FlightID;
		string _Airline;
		string _Source;
		string _Destination;
		string _DepartureTime;
		string _ArrivalTime;
		Plane* _FlightPlane;
	public:
		Flight(string, string, string, string, string, string, float, float, Plane);
		Flight();

		void SetAirline(string);
		string GetAirline();

		void SetFlightID(string);
		string GetFlightID();

		void SetSource(string);
		string GetSource();

		void SetDestination(string);
		string GetDestination();

		void SetDepartureTime(string);
		string GetDepartureTime();

		void SetArrivalTime(string);
		string GetArrivalTime();

		void SetDuration(float);
		float GetDuration();

		void SetPrice(float);
		float GetPrice();

		void SetPlane(Plane);
		Plane GetPlane();

		void PrintDetails();

		~Flight();
};

#endif