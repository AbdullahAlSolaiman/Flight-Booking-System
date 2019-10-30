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
		<< "3. Delete a Booked Flight" << endl
		<< "4. Exit"
		<< "---------------------------" << endl
		<< "Choice: ";
		int Choice;
		cin >> Choice;
		return Choice;
}
