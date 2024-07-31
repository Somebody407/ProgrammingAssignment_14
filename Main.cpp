// somebody407 (would rather not use my real name since its public :/)
// CIS 1202 800
// July 31, 2024

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

int main()
{
	string manufacturer;
	int year;

    // Test Vehicle class
    cout << "Enter the manufacturer of the vehicle: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> year;
    cin.ignore(); // To ignore the newline character

    Vehicle vehicle(manufacturer, year);
    vehicle.displayInfo();
    cout << endl;

    // Test Car class
    int numDoors;
    cout << "Enter the manufacturer of the car: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> year;
    cout << "Enter the number of doors: ";
    cin >> numDoors;
    cin.ignore(); // To ignore the newline character

    Car car(manufacturer, year, numDoors);
    car.displayInfo();
    cout << endl;

    // Test Truck class
    int towingCapacity;
    cout << "Enter the manufacturer of the truck: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> year;
    cout << "Enter the towing capacity: ";
    cin >> towingCapacity;

    Truck truck(manufacturer, year, towingCapacity);
    truck.displayInfo();
    cout << endl;

    return 0;
}
