#include "Vehicle.h"

Vehicle::Vehicle(string manufacturer, int year) : manufacturer(manufacturer), year(year) {}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getYearBuilt() const {
    return year;
}

void Vehicle::setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
}

void Vehicle::setYearBuilt(int year) {
    this->year = year;
}

void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << year << endl;
}