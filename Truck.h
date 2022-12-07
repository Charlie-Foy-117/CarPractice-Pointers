#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
public:

	Truck();
	Truck(std::string newName, Driver* newDriver, Driver* newAiDriver, float newPetrolLevel, float newPetrolCapacity, int newNumWheels, std::string newBedContents);
	~Truck();

	void Print();
	//getters
	std::string GetBedContents();
	void SetBedContents(std::string newBedContents);

private:

	std::string bedContents;
};

