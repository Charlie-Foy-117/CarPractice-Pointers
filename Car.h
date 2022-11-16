#pragma once
#include <string>

class Driver;

class Car
{
public:

	Car();
	Car(std::string newName, Driver* newDriver, Driver* newAiDriver, float newPetrolLevel);

	~Car();

	void PrintCar();
	void TransferOwnership(Driver* newDriver);
	void GenerateSelfDrivingAi();

	std::string GetCarName();

	std::string GetAiName();

	float GetPetrolLevel();
	void SetPetrolLevel(float newPetrolLevel);

private:

	float petrolLevel;
	std::string name;
	Driver* driver;
	Driver* aiDriver;
};

