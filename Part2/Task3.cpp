#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double number;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Calculate and display absolute value
    std::cout << std::setw(10) << std::left << "abs: " << std::setw(15) << std::right << std::abs(number) << std::endl;

    // Calculate and display sine
    std::cout << std::setw(10) << std::left << "sin: " << std::setw(15) << std::right << std::sin(number) << std::endl;

    // Calculate and display cosine
    std::cout << std::setw(10) << std::left << "cos: " << std::setw(15) << std::right << std::cos(number) << std::endl;

    // Calculate and display tangent
    std::cout << std::setw(10) << std::left << "tan: " << std::setw(15) << std::right << std::tan(number) << std::endl;

    // Calculate and display natural logarithm
    if (number > 0)
        std::cout << std::setw(10) << std::left << "log: " << std::setw(15) << std::right << std::log(number) << std::endl;
    else
        std::cout << std::setw(10) << std::left << "log: " << std::setw(15) << std::right << "Undefined (number must be positive)" << std::endl;

    // Calculate and display base-10 logarithm
    if (number > 0)
        std::cout << std::setw(10) << std::left << "log10: " << std::setw(15) << std::right << std::log10(number) << std::endl;
    else
        std::cout << std::setw(10) << std::left << "log10: " << std::setw(15) << std::right << "Undefined (number must be positive)" << std::endl;

    // Calculate and display square root
    if (number >= 0)
        std::cout << std::setw(10) << std::left << "sqrt: " << std::setw(15) << std::right << std::sqrt(number) << std::endl;
    else
        std::cout << std::setw(10) << std::left << "sqrt: " << std::setw(15) << std::right << "Undefined (number must be non-negative)" << std::endl;

    // Calculate and display exponential
    std::cout << std::setw(10) << std::left << "exp: " << std::setw(15) << std::right << std::exp(number) << std::endl;

    return 0;
}
