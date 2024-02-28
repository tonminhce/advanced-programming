#include <iostream>

int main() {
    double x, y;
    std::cout << "Enter the percentage (in decimal form): ";
    std::cin >> x;
    std::cout << "Enter the number: ";
    std::cin >> y;
    double result = x * y;
    std::cout << "The result of " << x * 100 << "% of " << y << " is: " << result << std::endl;
    return 0;
}
