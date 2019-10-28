// Implementation file for the Plane class
#include "Plane.h"
#include <iostream>

Plane::Plane() {
	std::cout << "A plane has been created" << std::endl;
}

Plane::~Plane() {
	std::cout << "A plane has been destroyed" << std::endl;
}

void Plane::test() {
	std::cout << "testing" << std::endl;
}
