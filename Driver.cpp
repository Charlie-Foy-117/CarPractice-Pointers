#include <iostream>
#include "Driver.h"
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Motorbike.h"

Driver::Driver()
	:name("")
	,currentVehicle(nullptr)
{
	std::cout << "Driver constructed: " << GetDriverName() << std::endl;
}

Driver::Driver(std::string newName, Vehicle* newCurrentVehicle)
	:name(newName)
	,currentVehicle(newCurrentVehicle)
{
	std::cout << "Driver constructed with parameters: " << GetDriverName() << std::endl;
}

Driver::~Driver()
{
	std::cout << "Driver destroyed: " << GetDriverName() << std::endl;
}

void Driver::PrintDriver()
{
	std::cout << "Driver: " << GetDriverName() << std::endl;
	//std::cout << "Driver Add: " << &name << std::endl;
}

void Driver::PrintDriverAndCar()
{
	if (currentVehicle != nullptr)
	{
		std::cout << "The driver is: " << GetDriverName() << " and the Vehicle is: " << currentVehicle->GetVehicleName() << std::endl;
	}
	else
	{
		std::cout << "This driver has no car" << std::endl;
	}
}

void Driver::RegisterVehicle(Vehicle* newVehicle)
{
	currentVehicle = newVehicle;
	Car* car1 = dynamic_cast<Car*>(currentVehicle);
	Motorbike* motorbike1 = dynamic_cast<Motorbike*>(currentVehicle);
	Truck* truck1 = dynamic_cast<Truck*>(currentVehicle);
	
	if (car1 != nullptr)
	{
		car1->Print();
	}
	if (truck1 != nullptr)
	{
		truck1->Print();
	}
	if (motorbike1 != nullptr)
	{
		motorbike1->Print();
	}
}

std::string Driver::GetDriverName()
{
	return name;
}

Vehicle* Driver::GetCurrentVehicle()
{
	return currentVehicle;
}
