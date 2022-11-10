#include <iostream>
#include "Driver.h"

Driver::Driver()
	:name("")
	,currentCar(nullptr)
{
	std::cout << "Driver constructed: " << name << std::endl;
}

Driver::Driver(std::string newName, Car* newCurrentCar)
	:name(newName)
	,currentCar(newCurrentCar)
{
	std::cout << "Driver constructed with parameters: " << name << std::endl;
}

Driver::~Driver()
{
	std::cout << "Driver destroyed: " << name << std::endl;
}



void Driver::PrintDriver()
{
	std::cout << "Driver: " << name << std::endl;
	//std::cout << "Driver Add: " << &name << std::endl;
}

void Driver::PrintDriverAndCar()
{
	if (currentCar != nullptr)
	{
		std::cout << "The driver is: " << name << " and the Car is: " << currentCar->name << std::endl;
	}
	else
	{
		std::cout << "This driver has no car" << std::endl;
	}
}
