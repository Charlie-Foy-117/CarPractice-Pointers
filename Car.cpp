#include <iostream>
#include "Car.h"
#include "Driver.h"

Car::Car()
	:Vehicle()
{
	std::cout << "Car has been created" << std::endl;
}

Car::Car(std::string newName, Driver* newDriver, Driver* newAiDriver, float newPetrolLevel, float newPetrolCapacity, int newNumWheels)
	:Vehicle(newName,newDriver,newAiDriver,newPetrolLevel,newPetrolCapacity,newNumWheels)
{
	std::cout << "Car " << newName << " has been created" << std::endl;
}

Car::~Car()
{
	std::cout << "Car has been destroyed" << std::endl;
}

