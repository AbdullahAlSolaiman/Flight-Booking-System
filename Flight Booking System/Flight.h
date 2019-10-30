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
		string _Source;
		string _Destination;
		string _DepartureTime;
		string _ArrivalTime;
		Plane* _FlightPlane;
	public:
		Flight(string, string, string, string, string, float, float, Plane);
		Flight();
		void SetPrice(float);
		float GetPrice();
		void SetArrivalTime(string);
		string GetArrivalTime();
		void SetDuration(float);
		float GetDuration();
		void SetPlane(Plane);
		Plane GetPlane();
		~Flight();
		void test();
};

#endif