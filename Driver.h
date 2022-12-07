#pragma once
#include <string>
#include "Car.h"
class Vehicle;
class Driver
{
public:

	//constructor
	Driver();
	Driver(std::string newName, Vehicle* newCurrentVehicle);

	virtual ~Driver();

	void PrintDriver();
	void PrintDriverAndCar();

	void RegisterVehicle(Vehicle* newVehicle);

	std::string GetDriverName();
	Vehicle* GetCurrentVehicle();



protected:

	std::string name;

	Vehicle* currentVehicle;
};

