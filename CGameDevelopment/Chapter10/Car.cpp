#include "Car.h"
#include <iostream>

Car::Car()
{
	m_numberOfWheels = 4;

	std::cout << "Car Constructed" << std::endl;
}

Car::~Car()
{
	std::cout << "Car Deconstructed" << std::endl;
}