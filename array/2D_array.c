#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to add two matrices
void addMatrices(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[ROWS][COLS], int B[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;  // Initialize the result matrix
            for (int k = 0; k < COLS; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print the matrix
void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int B[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sum[ROWS][COLS], product[ROWS][COLS];

    // Perform addition
    addMatrices(A, B, sum);

    // Perform multiplication
    multiplyMatrices(A, B, product);

    printf("Sum of the matrices:\n");
    printMatrix(sum);

    printf("\nProduct of the matrices:\n");
    printMatrix(product);

    return 0;
}
