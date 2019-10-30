// Implementation file for the Flight class
#include <iostream>
#include "Flight.h"
using std::cout;
using std::endl;
using std::string;


Flight::Flight(string Source, string Destination, string FlightID, string DepartureTime, string ArrivalTime,
		float Price, float Duration, Plane FlightPlane) {
	_FlightID = FlightID;
	_Source = Source;
	_Destination = Destination;
	_DepartureTime = DepartureTime;
	_ArrivalTime = ArrivalTime;
	_Price = Price;
	_Duration = Duration;
	_FlightPlane = &FlightPlane;
}

Flight::Flight() {
	_FlightID = "N/A";
	_Source = "N/A";
	_Destination = "N/A";
	_DepartureTime = "N/A";
	_ArrivalTime = "N/A";
	_Duration = 0.0;
	_Price = 0.0;
	_FlightPlane = NULL;
}

void Flight::SetPrice(float amount) {
	_Price = amount;
}

float Flight::GetPrice() {
	return _Price;
}

void Flight::SetArrivalTime(std::string time) {
	_ArrivalTime = time;
}

string Flight::GetArrivalTime() {
	return _ArrivalTime;
}

void Flight::SetDuration(float hours) {
	_Duration = hours;
}

float Flight::GetDuration() {
	return _Duration;
}

void Flight::SetPlane(Plane plane) {
	_FlightPlane = &plane;
}

Plane Flight::GetPlane() {
	return *_FlightPlane;
}

Flight::~Flight() {
	_FlightPlane = NULL;
}
