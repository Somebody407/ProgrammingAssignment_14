#include "Truck.h"

//Initialize
Truck::Truck(string manufacturer, int year, int towingCapacity) : Vehicle(manufacturer, year), towingCapacity(towingCapacity) {}

//Get towing capacity
int Truck::getTowingCapacity() const {
    return towingCapacity;
}

//Set towing capacity
void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

//Display towing capacity + Vehicle info;
void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << " lbs" << endl;
}