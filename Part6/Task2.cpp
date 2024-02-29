#include <iostream>
#include <cmath>

// Function to calculate the area of a square
float areaSquare(float sideLength) {
    return sideLength * sideLength;
}

// Function to calculate the area of a rectangle
float areaRectangle(float length, float width) {
    return length * width;
}

// Function to calculate the area of a circle
float areaCircle(float radius) {
    return M_PI * radius * radius;
}

// Function to calculate the area of a triangle
float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    float parameter1, parameter2;

    std::cout << "Choose the functionality:\n";
    std::cout << "1. Area of a square\n";
    std::cout << "2. Area of a rectangle\n";
    std::cout << "3. Area of a circle\n";
    std::cout << "4. Area of a triangle\n";
    std::cout << "Enter your choice (1-4), or enter -1 to exit: ";
    std::cin >> choice;

    while (choice != -1) {
        switch (choice) {
            case 1:
                std::cout << "Enter the side length of the square: ";
                std::cin >> parameter1;
                std::cout << "Area of the square: " << areaSquare(parameter1) << std::endl;
                break;
            case 2:
                std::cout << "Enter the length and width of the rectangle (separated by space): ";
                std::cin >> parameter1 >> parameter2;
                std::cout << "Area of the rectangle: " << areaRectangle(parameter1, parameter2) << std::endl;
                break;
            case 3:
                std::cout << "Enter the radius of the circle: ";
                std::cin >> parameter1;
                std::cout << "Area of the circle: " << areaCircle(parameter1) << std::endl;
                break;
            case 4:
                std::cout << "Enter the base and height of the triangle (separated by space): ";
                std::cin >> parameter1 >> parameter2;
                std::cout << "Area of the triangle: " << areaTriangle(parameter1, parameter2) << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please choose again.\n";
        }

        std::cout << "\nChoose another functionality (1-4), or enter -1 to exit: ";
        std::cin >> choice;
    }

    return 0;
}
