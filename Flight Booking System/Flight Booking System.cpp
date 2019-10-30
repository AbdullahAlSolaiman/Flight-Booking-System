﻿// Flight Booking System.cpp : Defines the entry point for the application.
//
#include "Flight Booking System.h"

int main() {
	int Size = 10;
	Flight* Flights = new Flight[Size];
	Flights[0].SetDuration(3);
	Flights[1].SetDuration(4);
	Flights[2].SetDuration(1);
	Flights[3].SetDuration(5);
	Flights[4].SetDuration(2);

	Flights[0].SetPrice(300);
	Flights[1].SetPrice(400);
	Flights[2].SetPrice(100);
	Flights[3].SetPrice(500);
	Flights[4].SetPrice(200);

	TryAgain:
	int Choice = MainMenu();
	
	switch (Choice) {
		case 1: {
			cin.ignore();
			cout << endl;
			cout << "Source: ";
			string Source;
			getline(cin, Source);
			cout << "Destination: ";
			string Destination;
			getline(cin, Destination);
			cout << endl;
			
			cout << "Sort it based on price or duration? (p/d): ";
			char POrD;
			cin >> POrD;
			if ('p' == POrD) {
				cout << "By Price:" << endl
					<< "----------------------------------" << endl
					<< "[1] Lowest to highest" << endl
					<< "[2] Highest to lowest" << endl
					<< "Choice: ";
				cin >> Choice;
				if (1 == Choice)
					PriceLowestToHighest(Flights, Size);
				else if (2 == Choice)
					PriceHighestToLowest(Flights, Size);
			}
			else if ('d' == POrD) {
				cout << "By Duration:" << endl
					<< "----------------------------------" << endl
					<< "[1] Shortest to Longest" << endl
					<< "[2] Longest to Shortest" << endl
					<< "Choice: ";
				cin >> Choice;
				if (1 == Choice)
					DurationShortestToLongest(Flights, Size);
				if (2 == Choice)
					DurationLongestToShortest(Flights, Size);
			}

			for (int i = 0; i < Size; i++) {
				cout << 1 + i << ")";
				Flights[i].PrintDetails();
				cout << "----------------------------------" << endl;
			}
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