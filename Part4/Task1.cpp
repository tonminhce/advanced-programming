#include <iostream>

int main() {
    const int numStudents = 10;
    int scores[numStudents];
    int totalScore = 0;

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Enter score for student " << (i + 1) << ": ";
        std::cin >> scores[i];
        totalScore += scores[i];
    }

    double averageScore = static_cast<double>(totalScore) / numStudents;
    std::cout << "Average score: " << averageScore << std::endl;

    return 0;
}
