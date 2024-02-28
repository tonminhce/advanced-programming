#include <iostream>
#include <iomanip>

int main() {
    const double exchange_rate = 24617.50; // 1 USD = 24617.50 VND
    double usd_amount, vnd_amount;

    // Input the amount in USD
    std::cout << "Enter the amount in USD: $";
    std::cin >> usd_amount;

    // Convert USD to VND
    vnd_amount = usd_amount * exchange_rate;

    // Print the results
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Amount in USD: $" << usd_amount << std::endl;
    std::cout << "Amount in VND: " << vnd_amount << " VND" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    return 0;
}
