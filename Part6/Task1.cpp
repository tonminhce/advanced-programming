#include <iostream>

// Function to calculate the sum of three numbers
float sumTriple(float a, float b, float c) {
    return a + b + c;
}

// Function to calculate the multiplication of three numbers
float mulTriple(float a, float b, float c) {
    return a * b * c;
}

// Function to calculate the average of three numbers
float aveTriple(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

int main() {
    float num1, num2, num3;

    std::cout << "Enter three numbers (separated by spaces), or enter -1 to exit: ";
    while (std::cin >> num1 >> num2 >> num3) {
        if (num1 == -1 || num2 == -1 || num3 == -1)
            break;

        float sum = sumTriple(num1, num2, num3);
        float mul = mulTriple(num1, num2, num3);
        float average = aveTriple(num1, num2, num3);
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Multiplication: " << mul << std::endl;
        std::cout << "Average: " << average << std::endl;
        std::cout << "\nEnter three numbers (separated by spaces), or enter -1 to exit: ";
    }

    return 0;
}
