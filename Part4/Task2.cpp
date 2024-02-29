#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

int main() {
    srand(time(nullptr)); 

    const int secretNumber = rand() % 21; 
    int guess;

    std::cout << "Welcome to the Guessing Game!\n";
    std::cout << "Try to guess the secret number between 0 and 20.\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < secretNumber) {
            std::cout << "Smaller!\n";
        } else if (guess > secretNumber) {
            std::cout << "Larger!\n";
        } else {
            std::cout << "Congratulations! You guessed the right number.\n";
        }

    } while (guess != secretNumber);

    return 0;
}
