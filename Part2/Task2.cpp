#include <iostream>
#include <cmath>
#include <iomanip>

const double PI = 3.14159;

int main() {
    double radius, height;

    // Input the radius and height of the cylinder
    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;
    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;

    // Calculate the volume of the cylinder
    double volume = PI * std::pow(radius, 2) * height;

    // Print out the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Cylinder Information" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Volume: " << volume << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    return 0;
}
