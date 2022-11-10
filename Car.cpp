#include <iostream>
#include "Car.h"
#include "Driver.h"

Car::Car()
	:name("")
	,driver(nullptr)
	,aiDriver(nullptr)
{
	std::cout << "Car constructed: " << name << std::endl;
}

Car::Car(std::string newName, Driver* newDriver, Driver* newAiDriver)
	:name(newName)
	,driver(newDriver)
	,aiDriver(newAiDriver)
{
	std::cout << "Car constructed with parameters: " << name << std::endl;
}

Car::~Car()
{
	std::cout << "Car destroyed: " << name << std::endl;
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
		std::cout << "Car: " << name << std::endl;
		driver->PrintDriver();	
	}
	if (aiDriver != nullptr)
	{
		std::cout << "AiDriver: " << aiDriver->name << std::endl;
	}
	
}

void Car::TransferOwnership(Driver* newDriver)
{
	driver->currentCar = nullptr;
	this->driver = newDriver;
	this->driver->currentCar = this;
	if (driver != nullptr)
	{
		std::cout << "The new driver of the car is " << driver->name << std::endl;
	}
}

void Car::GenerateSelfDrivingAi()
{
	aiDriver = new Driver("WALL-E", this);
}
