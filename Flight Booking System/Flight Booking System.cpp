// Flight Booking System.cpp : Defines the entry point for the application.
//
#include "Flight Booking System.h"

int main() {
	Passenger ThePassenger("Tareq", "Al-Ahdal", "1234567");
	int Size = 27;
	Flight* Flights = new Flight[Size];
	LoadData(Flights);
	MergeSort(Flights, 0, Size - 1); //Order all the flights alphabetically
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

			Flight* Result = new Flight[Size];
			int ResultArraySize = SequentialSearch(Source, Destination, Size, Flights, Result);

			cout << "Sort it base on price or duration? (p/d): ";
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
					PriceLowestToHighest(Result, ResultArraySize);
				else if (2 == Choice)
					PriceHighestToLowest(Result, ResultArraySize);
			}
			else if ('d' == POrD) {
				cout << "By Duration:" << endl
					<< "----------------------------------" << endl
					<< "[1] Shortest to Longest" << endl
					<< "[2] Longest to Shortest" << endl
					<< "Choice: ";
				cin >> Choice;
				if (1 == Choice)
					DurationShortestToLongest(Result, ResultArraySize);
				if (2 == Choice)
					DurationLongestToShortest(Result, ResultArraySize);
			}

			for (int i = 0; i < ResultArraySize; i++) {
				cout << 1 + i << ")";
				Result[i].PrintDetails();
				cout << "----------------------------------" << endl;
			}
			cout << "Choice: ";
			cin >> Choice;
			ThePassenger.BookFlight(Result[Choice - 1]);
			goto TryAgain;
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
			cout << "Logged out" << endl;
			break;
		}
		default: {
			cout << "Try again" << endl << endl;
			goto TryAgain;
		}
	}

	return 0;
}