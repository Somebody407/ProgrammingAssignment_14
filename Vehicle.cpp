#include "Vehicle.h"

//Initialize
Vehicle::Vehicle(string manufacturer, int year) : manufacturer(manufacturer), year(year) {}

//Get manufacturer name
string Vehicle::getManufacturer() const {
    return manufacturer;
}

//Get year built
int Vehicle::getYearBuilt() const {
    return year;
}

//Set manufacturer name
void Vehicle::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
}

//Get year built
void Vehicle::setYearBuilt(int year) {
    this->year = year;
}

//Display set info
void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << year << endl;
}