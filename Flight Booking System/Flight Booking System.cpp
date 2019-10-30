// Flight Booking System.cpp : Defines the entry point for the application.
//
#include "Flight Booking System.h"

int main() {
	Flight Flights[10];

	TryAgain:
	int Choice = MainMenu();
	
	switch (Choice) {
		case 1: {
			cout << "Test 1" << endl;
			break;
		}
		case 2: {
			cout << "Test 2" << endl;
			break;
		}
		case 3: {
			cout << "Test 3" << endl;
			break;
		}
		case 4: {
			cout << "Test 4" << endl;
			break;
		}
		default: {
			cout << "Try again" << endl << endl;
			goto TryAgain;
			break;
		}
	}

	return 0;
}