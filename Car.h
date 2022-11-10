#pragma once
#include <string>

class Driver;

class Car
{
public:

	Car();
	Car(std::string newName, Driver* newOwner);

	void PrintCar();

	std::string name;
	Driver* owner;
};

