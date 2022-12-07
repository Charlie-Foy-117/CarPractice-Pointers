#pragma once
#include <string>
#include "Vehicle.h"

class Driver;

class Car :public Vehicle
{
public:

	Car();
	Car(std::string newName, Driver* newDriver, Driver* newAiDriver, float newPetrolLevel, float newPetrolCapacity, int newNumWheels);
	~Car();
};

