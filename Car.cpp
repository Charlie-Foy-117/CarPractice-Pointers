#include <iostream>
#include "Car.h"
#include "Driver.h"

Car::Car()
	:name("")
	,driver(nullptr)
	,aiDriver(nullptr)
	,petrolLevel(0)
{
	std::cout << "Car constructed: " << GetCarName() << std::endl;
}

Car::Car(std::string newName, Driver* newDriver, Driver* newAiDriver, float newPetrolLevel)
	:name(newName)
	,driver(newDriver)
	,aiDriver(newAiDriver)
	,petrolLevel(newPetrolLevel)
{
	std::cout << "Car constructed with parameters: " << GetCarName() << std::endl;
}

Car::~Car()
{
	std::cout << "Car destroyed: " << GetCarName() << std::endl;
	if (aiDriver != nullptr)
	{
		delete aiDriver;
		aiDriver = nullptr;
	}
}

void Car::PrintCar()
{
	if (driver != nullptr)
	{
		std::cout << "Car: " << GetCarName() << std::endl;
		driver->PrintDriver();	
	}
	if (aiDriver != nullptr)
	{
		std::cout << "AiDriver: " << GetAiName() << std::endl;
	}
	
}

void Car::TransferOwnership(Driver* newDriver)
{
	driver->SetCurrentCar(nullptr);
	this->driver = newDriver;
	this->driver->SetCurrentCar(this);
	if (driver != nullptr)
	{
		std::cout << "The new driver of the car is " << driver->GetDriverName() << std::endl;
	}
}

void Car::GenerateSelfDrivingAi()
{
	aiDriver = new Driver("WALL-E", this);
}

std::string Car::GetCarName()
{
	return name;
}

std::string Car::GetAiName()
{
	return aiDriver->GetDriverName();
}

float Car::GetPetrolLevel()
{
	return petrolLevel;
}

void Car::SetPetrolLevel(float newPetrolLevel)
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
