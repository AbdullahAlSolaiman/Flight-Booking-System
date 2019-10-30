// Flight Booking System.h : Include file for standard system include files,
// or project specific include files.
#ifndef FLIGHT_BOOKING_SYSTEM_H
#define FLIGHT_BOOKING_SYSTEM_H

#include <iostream>
#include <string>
#include "Plane.h"
#include "Passenger.h"
#include "Flight.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int MainMenu();
void PriceHighestToLowest(Flight[], int);
void PriceLowestToHighest(Flight[], int);
void DurationLongestToShortest(Flight[], int);
void DurationShortestToLongest(Flight[], int);

// TODO: Reference additional headers your program requires here.

#endif
