// Implementation file for the Flight class
#include <iostream>
#include "Flight.h"

Flight::Flight() {
	std::cout << "Flight has been created" << std::endl;
}

Flight::~Flight() {
	std::cout << "Flight has been destroyed" << std::endl;
}

void Flight::test() {
	std::cout << "Testing Flight" << std::endl;
}
