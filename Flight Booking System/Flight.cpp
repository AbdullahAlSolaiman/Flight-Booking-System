// Implementation file for the Flight class
#include <iostream>
#include <iomanip>
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

void Flight::SetFlightID(string FlightID) {
	_FlightID = FlightID;
}

string Flight::GetFlightID() {
	return _FlightID;
}

void Flight::SetSource(string Source) {
	_Source = Source;
}

string Flight::GetSource() {
	return _Source;
}

void Flight::SetDestination(string Destination) {
	_Destination = Destination;
}

string Flight::GetDestination() {
	return _Destination;
}

void Flight::SetPrice(float amount) {
	_Price = amount;
}

float Flight::GetPrice() {
	return _Price;
}

void Flight::SetArrivalTime(string time) {
	_ArrivalTime = time;
}

string Flight::GetArrivalTime() {
	return _ArrivalTime;
}

void Flight::SetDepartureTime(string DepartureTime) {
	_DepartureTime = DepartureTime;
}

string Flight::GetDepartureTime() {
	return _DepartureTime;
}

void Flight::SetPlane(Plane plane) {
	_FlightPlane = &plane;
}

Plane Flight::GetPlane() {
	return *_FlightPlane;
}

void Flight::SetDuration(float hours) {
	_Duration = hours;
}

float Flight::GetDuration() {
	return _Duration;
}

void Flight::PrintDetails() {
	cout << "Flight ID: " << GetFlightID() << endl
		<< "Source: " << GetSource() << endl
		<< "Destination: " << GetDestination() << endl
		<< "Departure Time: " << GetDepartureTime() << endl
		<< "Arrival Time: " << GetArrivalTime() << endl
		<< "Price: " << GetPrice() << endl
		<< "Duration: " << GetDuration() << " hrs" << endl;
}

Flight::~Flight() {
	_FlightPlane = NULL;
}
