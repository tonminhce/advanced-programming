#include <iostream>
#include <string>

int main() {
    std::string fullName, dateOfBirth, hometown, major;

    // Input student information
    std::cout << "Enter full name: ";
    std::getline(std::cin >> std::ws, fullName);

    std::cout << "Enter date of birth (DD/MM/YYYY): ";
    std::getline(std::cin >> std::ws, dateOfBirth);

    std::cout << "Enter hometown: ";
    std::getline(std::cin >> std::ws, hometown);

    std::cout << "Enter major: ";
    std::getline(std::cin >> std::ws, major);

    // Display student information
    std::cout << "\n----------------------------------------" << std::endl;
    std::cout << "Student Information" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Date of Birth: " << dateOfBirth << std::endl;
    std::cout << "Hometown: " << hometown << std::endl;
    std::cout << "Major: " << major << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    return 0;
}
