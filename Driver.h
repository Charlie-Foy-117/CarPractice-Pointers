#pragma once
#include <string>
#include "Car.h"
class Driver
{
public:

	//constructor
	Driver();
	Driver(std::string newName, Car* newCurrentCar);

	void PrintDriver();
	void PrintDriverAndCar();

	std::string name;

	Car* currentCar;
};

