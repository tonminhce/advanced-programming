#include <iostream>

double convertToAUD(double amountInVND) {
    return amountInVND * 0.000059;
}

double convertToUSD(double amountInVND) {
    return amountInVND * 0.000043;
}

int main() {
    double amountInVND;
    int choice;

    std::cout << "Enter the amount of money in VND: ";
    std::cin >> amountInVND;

    std::cout << "Choose the currency conversion:\n";
    std::cout << "1. AUD\n";
    std::cout << "2. USD\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Amount in AUD: " << convertToAUD(amountInVND) << std::endl;
            break;
        case 2:
            std::cout << "Amount in USD: " << convertToUSD(amountInVND) << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please choose 1 for AUD or 2 for USD." << std::endl;
    }

    return 0;
}
