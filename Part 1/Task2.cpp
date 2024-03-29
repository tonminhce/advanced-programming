#include <iostream>

int main() {
    double num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /, %): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                std::cout << "Error! Division by zero is not allowed.";
                return 1;
            }
            break;
        case '%':
            result = static_cast<int>(num1) % static_cast<int>(num2);
            break;
        default:
            std::cout << "Error! Invalid operator.";
            return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
