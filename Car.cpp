#include <iostream>
#include "Car.h"
#include "Driver.h"

Car::Car()
	:name("")
	,owner(nullptr)
{
}

Car::Car(std::string newName, Driver* newOwner)
	:name(newName)
	,owner(newOwner)
{

}

void Car::PrintCar()
{
	if (owner != nullptr)
	{
		std::cout << "Car: " << name << std::endl;
		owner->PrintDriver();
	}
	
}
