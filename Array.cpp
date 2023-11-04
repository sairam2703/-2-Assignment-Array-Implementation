#include <iostream>

const int MAX_SIZE = 100; // Define the maximum number of non-zero elements

int main() {
    int rows = 4; // Number of rows in the matrix
    int cols = 5; // Number of columns in the matrix
    int nonZeroCount = 6; // Number of non-zero elements in the matrix

    // Arrays to store row indices, column indices, and values
    int rowIndices[MAX_SIZE] = {0, 0, 1, 1, 3, 3};
    int colIndices[MAX_SIZE] = {2, 4, 2, 3, 1, 2};
    int values[MAX_SIZE] = {3, 4, 5, 7, 2, 6};

    // Initialize a 2D array to represent the sparse matrix
    int sparseMatrix[rows][cols] = {0};

    // Fill in the values from the arrays into the sparse matrix
    for (int i = 0; i < nonZeroCount; i++) {
        sparseMatrix[rowIndices[i]][colIndices[i]] = values[i];
    }

    // Print the sparse matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << sparseMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
