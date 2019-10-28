// Implementation file for the Passenger class
#include <iostream>
#include "Passenger.h"

Passenger::Passenger() {
	std::cout << "Passenger has been created" << std::endl;
}

Passenger::~Passenger() {
	std::cout << "Passenger has been destroyed" << std::endl;
}

void Passenger::test() {
	std::cout << "Testing Passenger" << std::endl;
}
