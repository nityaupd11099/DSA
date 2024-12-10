#include <stdio.h>

#define ROWS 3
#define COLS 3

void transpose(int arr[ROWS][COLS], int transposed[COLS][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transposed[j][i] = arr[i][j];
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int transposed[COLS][ROWS];

    // Transpose the matrix
    transpose(arr, transposed);

    // Print original matrix
    printf("Original matrix:\n");
    printMatrix(arr);

    // Print transposed matrix
    printf("\nTransposed matrix:\n");
    printMatrix(transposed);

    return 0;
}
