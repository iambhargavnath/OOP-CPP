#include <iostream>
using namespace std;

class Triangle {
    private:
    double side1, side2, side3;
    
    public:
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    bool isIsoceles() {
        if(side1==side2 || side2==side3 || side3==side1)
        {
            return true;
        }
        else {
            return false;
        }
    }

    bool isEquilateral() {
        if(side1==side2 && side2==side3) {
            return true;
        }
        else {
            return false;
        }
    }

};

int main() {
    double a, b, c;
    cout<<"Enter sides: ";
    cin>>a>>b>>c;

    Triangle t(a, b, c);

    if(t.isEquilateral())
    {
        cout<<"Equilateral";
    }
    else if(t.isIsoceles())
    {
        cout<<"Isoceles";
    }
    else {
        cout<<"Neither Equilateral nor isoceles";
    }

    return 0;
}