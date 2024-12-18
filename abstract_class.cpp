#include <iostream>
using namespace std;

// Abstract class
class Vehicle {
public:
    virtual void start() = 0; // Pure virtual function
    virtual void stop() = 0;  // Pure virtual function
    virtual ~Vehicle() {}     // Virtual destructor
};

// Derived class for Car
class Car : public Vehicle {
public:
    void start() {
        cout << "Car is starting" << endl;
    }

    void stop() {
        cout << "Car is stopping" << endl;
    }
};

// Derived class for Bike
class Bike : public Vehicle {
public:
    void start() {
        cout << "Bike is starting" << endl;
    }

    void stop() {
        cout << "Bike is stopping" << endl;
    }
};

int main() {
    Vehicle* vehicle1 = new Car();   // Pointer to base class (Vehicle) pointing to derived class (Car)
    Vehicle* vehicle2 = new Bike();  // Pointer to base class (Vehicle) pointing to derived class (Bike)

    vehicle1->start();  // Calls Car's start() method
    vehicle1->stop();   // Calls Car's stop() method

    vehicle2->start();  // Calls Bike's start() method
    vehicle2->stop();   // Calls Bike's stop() method

    delete vehicle1;    // Clean up
    delete vehicle2;

    return 0;
}
