#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(string manufacturer, int year, int numDoors);

    // Getter
    int getNumDoors() const;

    // Setter
    void setNumDoors(int numDoors);

    // Method to display info
    void displayInfo() const override;
};

#endif