// Implementation file for the Plane class
#include "Plane.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;


Plane::Plane() {
	_AircraftInstanceID = _AircraftTypeID = _AircraftModelID = _ManufacturerID=0;
	_ManufacturerName = "N\A";
	_Airline = "N\A";
}
Plane::Plane(int PlaneNumber, int PlaneType, int PlaneModel, string name, int ManufacturerNumber, string AirlineName) {
	_AircraftInstanceID = PlaneNumber;
	_AircraftTypeID = PlaneType;
	_AircraftModelID = PlaneModel;
	_ManufacturerID = ManufacturerNumber;
	_ManufacturerName = name;
	_Airline = AirlineName;
}
void Plane::setAircraftInstanceID(int PlaneNumber)
{
	_AircraftInstanceID = PlaneNumber;
}
int Plane::getAircraftInstanceID()
{
	return _AircraftInstanceID;
}
void Plane::setAircraftTypeID(int PlaneType)
{
	_AircraftTypeID = PlaneType;
}
int Plane::getAircraftTypeID()
{
	return _AircraftTypeID;
}
void Plane::setAircraftModelID(int PlaneModel)
{
	_AircraftModelID = PlaneModel;
}
int Plane::getAircraftModelID()
{
	return _AircraftModelID;
}
void Plane::setManufacturerName(string name)
{
	_ManufacturerName = name;
}
string Plane::getManufacturerName()
{
	return _ManufacturerName;
}
void Plane::setManufacturerID(int ManufacturerNumber)
{
	_ManufacturerID = ManufacturerNumber;
}
int Plane::getManufacturerID()
{
	return _ManufacturerID;

}
void Plane::setAirline(string AirlineName)
{
	_Airline = AirlineName;
}
string Plane::getAirline()
{
	return _Airline;
}

Plane::~Plane() {
	std::cout << "Plane has been destroyed" << std::endl;
}

void Plane::test() {
	std::cout << "Testing Plane" << std::endl;
}
