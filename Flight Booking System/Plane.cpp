// Implementation file for the Plane class
#include "Plane.h"
#include <iostream>

Plane::Plane() {
	std::cout << "Plane has been created" << std::endl;
}

Plane::~Plane() {
	std::cout << "Plane has been destroyed" << std::endl;
}

void Plane::test() {
	std::cout << "Testing Plane" << std::endl;
}
