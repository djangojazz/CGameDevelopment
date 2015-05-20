#include "Motorcycle.h"
#include <iostream>

Motorcycle::Motorcycle()
{
	m_numberOfWheels = 2;

	std::cout << "Motorcycle Constructed" << std::endl;
}

Motorcycle::~Motorcycle()
{
	std::cout << "Motorcycle Deconstructed" << std::endl;
}