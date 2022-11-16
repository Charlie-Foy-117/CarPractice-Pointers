#pragma once
#include <string>
#include "Car.h"
class Driver
{
public:

	//constructor
	Driver();
	Driver(std::string newName, Car* newCurrentCar);

	~Driver();

	void PrintDriver();
	void PrintDriverAndCar();

	Car* GetCurrentCar();
	void SetCurrentCar(Car* newCurrentCar);

	std::string GetDriverName();


private:

	std::string name;

	Car* currentCar;
};

