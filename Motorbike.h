#pragma once
#include "Vehicle.h"
class Motorbike : public Vehicle
{
public :

	Motorbike();
	Motorbike(std::string newName, Driver* newDriver, Driver* newAiDriver, float newPetrolLevel, float newPetrolCapacity, int newNumWheels);
	~Motorbike();
};

