#pragma once
#include <string>

class Driver;

class Car
{
public:

	Car();
	Car(std::string newName, Driver* newDriver, Driver* newAiDriver);

	~Car();

	void PrintCar();
	void TransferOwnership(Driver* newDriver);
	void GenerateSelfDrivingAi();

	std::string name;
	Driver* driver;
	Driver* aiDriver;
};

