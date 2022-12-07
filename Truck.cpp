#include "Truck.h"

Truck::Truck()
    :Vehicle()
{
    std::cout << "Truck has been created" << std::endl;
}

Truck::Truck(std::string newName, Driver* newDriver, Driver* newAiDriver, float newPetrolLevel, float newPetrolCapacity, int newNumWheels, std::string newBedContents)
    :Vehicle(newName, newDriver, newAiDriver, newPetrolLevel, newPetrolCapacity, newNumWheels)
    ,bedContents(newBedContents)
{
    std::cout << "Truck " << newName << " has been created" << std::endl;
}

Truck::~Truck()
{
    std::cout << "Truck has been destoryed" << std::endl;
}

void Truck::Print()
{
    Vehicle::Print();
    std::cout << "Bed Contents: " << bedContents << std::endl
        << "" << std::endl;
}

std::string Truck::GetBedContents()
{
    return bedContents;
}

void Truck::SetBedContents(std::string newBedContents)
{
    bedContents = newBedContents;
}
