// CarPractice-Reference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Driver.h"
#include "Car.h"

int main()
{
    Car* carPtr = nullptr;
    Driver* driverPtr = nullptr;
    
    Driver driver1("Bob", carPtr);

    driverPtr = &driver1;

    Car car1("Car", driverPtr, nullptr, 0);
    
    driverPtr->SetCurrentCar(&car1);


    std::cout << "Petrol level of car: " << car1.GetPetrolLevel() << std::endl;
    car1.SetPetrolLevel(10);
    std::cout << "Petrol level of car: " << car1.GetPetrolLevel() << std::endl;
    car1.SetPetrolLevel(-11);
    std::cout << "Petrol level of car: " << car1.GetPetrolLevel() << std::endl;
    car1.SetPetrolLevel(100);
    std::cout << "Petrol level of car: " << car1.GetPetrolLevel() << std::endl;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
