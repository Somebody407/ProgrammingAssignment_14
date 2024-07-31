#include "Car.h"

//Initialize
Car::Car(string manufacturer, int year, int numDoors) : Vehicle(manufacturer, year), numDoors(numDoors) {}

//Get doors
int Car::getNumDoors() const {
    return numDoors;
}

//Set doors
void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

//Display number of doors + Vehicle info;
void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Number of Doors: " << numDoors << endl;
}