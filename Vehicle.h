#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
using namespace std;

class Vehicle {
private:
    string manufacturer;
    int year;

public:
    Vehicle(string manufacturer, int year);

    // Getters
    string getManufacturer() const;
    int getYearBuilt() const;

    // Setters
    void setManufacturer(string manufacturer);
    void setYearBuilt(int year);

    // Method to display info
    virtual void displayInfo() const;
};


#endif 