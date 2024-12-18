#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called: Object created!" << endl;
    }

    ~MyClass() {
        cout << "Destructor called: Object destroyed!" << endl;
    }
};

int main() {
    cout << "Program starts" << endl;
    {
        MyClass obj;
    }
    cout << "Program ends" << endl;
    return 0;
}
