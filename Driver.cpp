#include <iostream>
#include "Driver.h"

Driver::Driver()
	:name("")
	,currentCar(nullptr)
{
	std::cout << "Driver constructed: " << GetDriverName() << std::endl;
}

Driver::Driver(std::string newName, Car* newCurrentCar)
	:name(newName)
	,currentCar(newCurrentCar)
{
	std::cout << "Driver constructed with parameters: " << GetDriverName() << std::endl;
}

Driver::~Driver()
{
	std::cout << "Driver destroyed: " << GetDriverName() << std::endl;
}

void Driver::PrintDriver()
{
	std::cout << "Driver: " << GetDriverName() << std::endl;
	//std::cout << "Driver Add: " << &name << std::endl;
}

void Driver::PrintDriverAndCar()
{
	if (currentCar != nullptr)
	{
		std::cout << "The driver is: " << GetDriverName() << " and the Car is: " << currentCar->GetCarName() << std::endl;
	}
	else
	{
		std::cout << "This driver has no car" << std::endl;
	}
}

Car* Driver::GetCurrentCar()
{
	return currentCar;
}

void Driver::SetCurrentCar(Car* newCurrentCar)
{
	currentCar = newCurrentCar;
}

std::string Driver::GetDriverName()
{
	return name;
}
