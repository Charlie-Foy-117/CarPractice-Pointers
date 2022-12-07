#include "Vehicle.h"
#include <iostream>
#include "Car.h"
#include "Driver.h"

Vehicle::Vehicle()
	:name("")
	, driver(nullptr)
	, aiDriver(nullptr)
	, petrolLevel(0)
	, petrolCapacity(0)
	, numWheels(0)
{
	std::cout << "Car constructed: " << GetVehicleName() << std::endl;
}

Vehicle::Vehicle(std::string newName, Driver* newDriver, Driver* newAiDriver, float newPetrolLevel, float newPetrolCapacity, int newNumWheels)
	:name(newName)
	, driver(newDriver)
	, aiDriver(newAiDriver)
	, petrolLevel(newPetrolLevel)
	, petrolCapacity(newPetrolCapacity)
	, numWheels(newNumWheels)
{
	std::cout << "Car constructed with parameters: " << GetVehicleName() << std::endl;
}

Vehicle::~Vehicle()
{
	std::cout << "Car destroyed: " << GetVehicleName() << std::endl;
	if (aiDriver != nullptr)
	{
		delete aiDriver;
		aiDriver = nullptr;
	}
}

void Vehicle::Print()
{
	std::cout << "" << std::endl
		<< "Vehicle name: " << name << std::endl
		<< "Petrol Level: " << petrolLevel << std::endl
		<< "Petrol Capacity: " << petrolCapacity << std::endl
		<< "Number of wheels: " << numWheels << std::endl
		<< "" << std::endl;
}

/*void Vehicle::TransferOwnership(Driver* newDriver)
{
	driver->SetCurrentVehicle(nullptr);
	this->driver = newDriver;
	this->driver->SetCurrentVehicle(driver->GetCurrentVehicle());
	if (driver != nullptr)
	{
		std::cout << "The new driver of the car is " << driver->GetDriverName() << std::endl;
	}
}*/

void Vehicle::GenerateSelfDrivingAi()
{
	aiDriver = new Driver();
}

void Vehicle::FillPetrolTank()
{
	petrolLevel = petrolCapacity;
}

void Vehicle::FillPetrolTank(float newPetrolLevel)
{
	if (petrolLevel + newPetrolLevel <= petrolCapacity)
	{
		petrolLevel +=newPetrolLevel;
	}
}

std::string Vehicle::GetVehicleName()
{
	return name;
}

std::string Vehicle::GetAiName()
{
	return aiDriver->GetDriverName();
}

int Vehicle::GetNumWheels()
{
	return numWheels;
}

float Vehicle::GetPetrolLevel()
{
	return petrolLevel;
}

void Vehicle::SetPetrolLevel(float newPetrolLevel)
{
	if ((petrolLevel + newPetrolLevel) >= 0 && (petrolLevel + newPetrolLevel) <= 100)
	{
		petrolLevel += newPetrolLevel;
	}
	else
	{
		if ((petrolLevel + newPetrolLevel) >= 100)
		{
			std::cout << "Too much petrol in the tank" << std::endl;
		}
		if ((petrolLevel + newPetrolLevel) <= 0)
		{
			std::cout << "Not enough petrol in the tank" << std::endl;
		}

	}
}
