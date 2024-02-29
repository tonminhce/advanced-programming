#include <iostream>
#include <string>

const int MAX_STUDENTS = 100;

int main() {
    std::string names[MAX_STUDENTS];
    int scores[MAX_STUDENTS];
    bool passed[MAX_STUDENTS];

    int numStudents = 0;

    std::cout << "Enter students' names and scores (0-100). Enter '-1' to stop.\n";
    while (numStudents < MAX_STUDENTS) {
        std::cout << "Enter name of student " << (numStudents + 1) << ": ";
        std::getline(std::cin >> std::ws, names[numStudents]);
        if (names[numStudents] == "-1")
            break;
        std::cout << "Enter score of student " << names[numStudents] << ": ";
        std::cin >> scores[numStudents];
        passed[numStudents] = scores[numStudents] >= 50;
        numStudents++;
    }

    std::cout << "\nStudents' data:\n";
    std::cout << "---------------------------\n";
    std::cout << "Name\t\tScore\tPassed/Failed\n";
    std::cout << "---------------------------\n";
    for (int i = 0; i < numStudents; ++i) {
        std::cout << names[i] << "\t\t" << scores[i] << "\t" << (passed[i] ? "Passed" : "Failed") << std::endl;
    }
    std::cout << "---------------------------\n";

    return 0;
}
