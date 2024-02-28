#include <iostream>
#include <iomanip>

int main() {
    int age;
    std::cout << "Please enter your age: ";
    std::cin >> age;

    std::cout << std::fixed << std::setprecision(2); // Set precision for floating-point numbers

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Ticket Price Calculator" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    if (age < 5) {
        std::cout << "Age: " << age << " - Your ticket is free!" << std::endl;
    } else if (age >= 5 && age <= 10) {
        std::cout << "Age: " << age << " - Your ticket costs $10." << std::endl;
    } else if (age >= 11 && age <= 16) {
        std::cout << "Age: " << age << " - Your ticket costs $20." << std::endl;
    } else {
        std::cout << "Age: " << age << " - Your ticket costs $25." << std::endl;
    }

    std::cout << "----------------------------------------" << std::endl;

    return 0;
}
