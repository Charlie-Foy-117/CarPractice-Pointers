#pragma once
#include <iostream>

class Driver;

class Vehicle
{
public: 
	Vehicle();
	Vehicle(std::string newName, Driver* newDriver, Driver* newAiDriver, float newPetrolLevel, float newPetrolCapacity, int newNumWheels);

	virtual ~Vehicle();

	void Print();
	//void TransferOwnership(Driver* newDriver);
	void GenerateSelfDrivingAi();
	void FillPetrolTank();
	void FillPetrolTank(float newPetrolLevel);

	std::string GetVehicleName();

	std::string GetAiName();

	int GetNumWheels();

	float GetPetrolLevel();
	void SetPetrolLevel(float newPetrolLevel);

protected:

	float petrolLevel;
	float petrolCapacity;
	std::string name;
	Driver* driver;
	Driver* aiDriver;
	int numWheels;
};

