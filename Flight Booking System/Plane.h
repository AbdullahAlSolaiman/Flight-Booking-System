// Specification file for the Plane class
#ifndef PLANE_H
#define PLANE_H
#include <string>
using std::string;
class Plane {
	private:
		int _AircraftInstanceID;
		int _AircraftTypeID;
		int _AircraftModelID;
		string _ManufacturerName;
		int _ManufacturerID;
		string _Airline;


	public:
		void setAircraftInstanceID(int PlaneNumber);
		int getAircraftInstanceID();
		void setAircraftTypeID(int PlaneType);
		int getAircraftTypeID();
		void setAircraftModelID(int PlaneModel);
		int getAircraftModelID();
		void setManufacturerName(string name);
		string getManufacturerName();
		void setManufacturerID(int ManufacturerNumber);
		int getManufacturerID();
		void setAirline(string AirlineName);
		string getAirline();

		Plane();
		Plane(int PlaneNumber, int PlaneType, int PlaneModel, string name, int ManufacturerNumber, string AirlineName);
		~Plane();
		void test();
};

#endif
