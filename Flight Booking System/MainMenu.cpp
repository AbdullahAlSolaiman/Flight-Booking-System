// Menu Function
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int MainMenu() {
	cout << "Flight Booking System" << endl
		<< "---------------------------" << endl
		<< "1. Book a Flight" << endl
		<< "2. View Booked Flights" << endl
		<< "3. Cancel a Booked Flight" << endl
		<< "4. Logout" << endl
		<< "5. Exit" << endl
		<< "---------------------------" << endl
		<< "Choice: ";
		int Choice;
		cin >> Choice;
		return Choice;
}
