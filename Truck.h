#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck(string manufacturer, int year, int towingCapacity);

    // Getter
    int getTowingCapacity() const;

    // Setter
    void setTowingCapacity(int towingCapacity);

    // Method to display info
    void displayInfo() const override;
};

#endif