#include <iostream>
#include <cmath>
#include <stdexcept>

double my_sqrt(double number) {
    if (number < 0) {
        throw std::invalid_argument("Cannot compute square root of a negative number.");
    }
    return std::sqrt(number);
}

int main() {
    double number;

    std::cout << "Enter a number to compute its square root: ";
    std::cin >> number;

    try {
        double result = my_sqrt(number);
        std::cout << "The square root of " << number << " is " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
