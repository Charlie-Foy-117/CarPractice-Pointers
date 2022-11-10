#include <iostream>
#include "Driver.h"

Driver::Driver()
	:name("")
	,currentCar(nullptr)
{
}

Driver::Driver(std::string newName, Car* newCurrentCar)
	:name(newName)
	,currentCar(newCurrentCar)
{
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
}
