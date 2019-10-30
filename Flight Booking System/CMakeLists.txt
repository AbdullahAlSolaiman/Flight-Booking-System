# CMakeList.txt : CMake project for Flight Booking System, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
Project("Flight Booking System")
# Add source to this project's executable.
add_executable (CMakeTarget "Flight Booking System.cpp" "Flight Booking System.h" "Plane.cpp" "Plane.h" "Passenger.cpp" "Passenger.h" "Flight.cpp" "Flight.h" "Date.cpp" "Date.h")
# TODO: Add tests and install targets if needed.
