// Implementation file for the Flight class
#include <iostream>
#include "Flight.h"
using std::cout;
using std::endl;
using std::string;

Flight::Flight() {
	_Price = _Duration = 0.0;
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
	cout << "Flight has been destroyed" << endl;
}

void Flight::test() {
	cout << "Testing Flight" << endl;
}
