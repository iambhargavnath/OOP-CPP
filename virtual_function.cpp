#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout<<"Vehicle is started"<<endl;
    }
};

class Car : public Vehicle {
public:
    void start() {
        cout<<"Car is started"<<endl;
    }
};

int main() {
    Vehicle* vehicle1 = new Car(); 

    vehicle1->start();

    return 0;
}