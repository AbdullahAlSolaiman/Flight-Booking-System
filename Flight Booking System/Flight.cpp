// Implementation file for the Flight class
#include <iostream>
#include <iomanip>
#include "Flight.h"
using std::cout;
using std::endl;
using std::string;


Flight::Flight(string Airline, string FlightType ,string Source, string Destination, string FlightID, string DepartureTime, string ArrivalTime,
		float Price, float Duration, Plane FlightPlane) {
	_Airline = Airline;
	_FlightID = FlightID;
	_FlightType = FlightType;
	_Source = Source;
	_Destination = Destination;
	_DepartureTime = DepartureTime;
	_ArrivalTime = ArrivalTime;
	_Price = Price;
	_Duration = Duration;
	_FlightPlane = &FlightPlane;
}

Flight::Flight() {
	_Airline = _FlightID = _Source = _Destination = _DepartureTime = _ArrivalTime = "";
	_Duration = _Price = 0.0;
	_FlightPlane = NULL;
}

void Flight::SetAirline(string Airline) {
	_Airline = Airline;
}

string Flight::GetAirline() const {
	return _Airline;
}

void Flight::SetFlightID(string FlightID) {
	_FlightID = FlightID;
}

string Flight::GetFlightID() const {
	return _FlightID;
}

void Flight::SetFlightType(string FlightType) {
	_FlightType = FlightType;
}

string Flight::GetFlightType() const {
	return _FlightType;
}

void Flight::SetSource(string Source) {
	_Source = Source;
}

string Flight::GetSource() const {
	return _Source;
}

void Flight::SetDestination(string Destination) {
	_Destination = Destination;
}

string Flight::GetDestination() const {
	return _Destination;
}

void Flight::SetPrice(float amount) {
	_Price = amount;
}

float Flight::GetPrice() const {
	return _Price;
}

void Flight::SetArrivalTime(string time) {
	_ArrivalTime = time;
}

string Flight::GetArrivalTime() const {
	return _ArrivalTime;
}

void Flight::SetDepartureTime(string DepartureTime) {
	_DepartureTime = DepartureTime;
}

string Flight::GetDepartureTime() const {
	return _DepartureTime;
}

void Flight::SetPlane(Plane plane) {
	_FlightPlane = &plane;
}

Plane Flight::GetPlane() const {
	return *_FlightPlane;
}

void Flight::SetDuration(float hours) {
	_Duration = hours;
}

float Flight::GetDuration() const {
	return _Duration;
}

void Flight::PrintDetails() const {
	cout << "\tAirline: " << GetAirline() << endl
		<< "\tFlight ID: " << GetFlightID() << endl
		<< "\tSource: " << GetSource() << endl
		<< "\tDestination: " << GetDestination() << endl
		<< "\tDeparture Time: " << GetDepartureTime() << endl
		<< "\tArrival Time: " << GetArrivalTime() << endl
		<< "\tPrice: " << GetPrice() << endl
		<< "\tDuration: " << GetDuration() << " hrs" << endl;
}

Flight::~Flight() {
	_FlightPlane = NULL;
}
