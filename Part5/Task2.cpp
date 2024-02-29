#include <iostream>

int main() {
    const int size = 4;
    int matrix[size][size];

    std::cout << "Enter elements of the 4x4 matrix:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << "Enter element at position (" << i << ", " << j << "): ";
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "\nThe matrix:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    int totalSum = 0;
    int rowSums[size] = {0};
    int colSums[size] = {0};
    int diagonalSum1 = 0;
    int diagonalSum2 = 0;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            totalSum += matrix[i][j];
            rowSums[i] += matrix[i][j];
            colSums[j] += matrix[i][j];
            if (i == j)
                diagonalSum1 += matrix[i][j];
            if (i + j == size - 1)
                diagonalSum2 += matrix[i][j];
        }
    }

    // Display sums
    std::cout << "\nTotal sum of all elements: " << totalSum << std::endl;
    std::cout << "Sum of elements in each row:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Row " << i + 1 << ": " << rowSums[i] << std::endl;
    }
    std::cout << "Sum of elements in each column:\n";
    for (int j = 0; j < size; ++j) {
        std::cout << "Column " << j + 1 << ": " << colSums[j] << std::endl;
    }
    std::cout << "Sum of elements in the main diagonal: " << diagonalSum1 << std::endl;
    std::cout << "Sum of elements in the secondary diagonal: " << diagonalSum2 << std::endl;

    return 0;
}
