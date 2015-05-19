#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() : m_numberOfWheels(0)
{
	std::cout << "Vehicle Constructed" << std::endl;
}

Vehicle::~Vehicle()
{
	std::cout << "Vehicle Deconstructed" << std::endl;
}

unsigned int Vehicle::GetNumberOfWheels() const
{
	return m_numberOfWheels;
}