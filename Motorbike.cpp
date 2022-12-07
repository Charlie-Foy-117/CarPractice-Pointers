#include "Motorbike.h"

Motorbike::Motorbike()
	:Vehicle()
{
	std::cout << "Car has been created" << std::endl;
}

Motorbike::Motorbike(std::string newName, Driver* newDriver, Driver* newAiDriver, float newPetrolLevel, float newPetrolCapacity, int newNumWheels)
	:Vehicle(newName,newDriver,newAiDriver,newPetrolLevel,newPetrolCapacity,newNumWheels)
{
	std::cout << "Car " << newName << " has been created" << std::endl;
}

Motorbike::~Motorbike()
{
	std::cout << "Car has been destroyed" << std::endl;
}
