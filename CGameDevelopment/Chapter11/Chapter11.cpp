// Chapter11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include <iostream>

void PrintNumberOfWheels()
{
	Vehicle vehicle;
	Car car;
	Motorcycle motorcycle;

	Vehicle* pVehicle = dynamic_cast<Vehicle*>(&vehicle);
	std::cout << pVehicle->GetNumberOfWheels() << std::endl;

	pVehicle = dynamic_cast<Vehicle*>(&car);
	Car* pCar = dynamic_cast<Car*>(pVehicle);
	if (pCar != nullptr)
	{
		std::cout << pVehicle->GetNumberOfWheels() << std::endl;
	}
	
	pVehicle = dynamic_cast<Vehicle*>(&motorcycle);
	pCar = dynamic_cast<Car*>(pVehicle);
	//Motorcycle* pMotorcycle = dynamic_cast<Motorcycle*>(pVehicle);
	if (pCar != nullptr)
	{
		std::cout << pVehicle->GetNumberOfWheels() << std::endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	PrintNumberOfWheels();

	return 0;
}

