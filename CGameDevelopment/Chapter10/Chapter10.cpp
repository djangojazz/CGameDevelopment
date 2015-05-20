// Chapter10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"

void PrintNumberOfWheels()
{
	Vehicle vehicle;
	Car car;
	Motorcycle motorcycle;

	std::cout << vehicle.GetNumberOfWheels() << std::endl;
	std::cout << car.GetNumberOfWheels() << std::endl;
	std::cout << motorcycle.GetNumberOfWheels() << std::endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	PrintNumberOfWheels();

	return 0;
}

