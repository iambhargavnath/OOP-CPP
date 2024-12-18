#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal can eat." << endl;
    }
    void sleep() {
        cout << "This animal can sleep." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The dog can bark." << endl;
    }
};

int main() {
    Dog myDog;

    myDog.eat();
    myDog.sleep();

    myDog.bark();

    return 0;
}
