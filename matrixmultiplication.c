#include <stdio.h>

void main() {
    int i, j, k, rows1, columns1, rows2, columns2;

    // Input dimensions for the first matrix
    printf("Enter number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter number of columns for the first matrix: ");
    scanf("%d", &columns1);

    // Input dimensions for the second matrix
    printf("Enter number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter number of columns for the second matrix: ");
    scanf("%d", &columns2);

    // Validate matrix multiplication condition
    if (columns1 != rows2) {
        printf("Matrix multiplication is not possible. Number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
    }

    // Allocate matrices
    int matrix1[rows1][columns1];
    int matrix2[rows2][columns2];
    int resultMatrix[rows1][columns2];

    // Input for first matrix
    printf("Enter elements of the first matrix (%dx%d):\n", rows1, columns1);
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns1; j++) {
            printf("Element [%d][%d]: ", i, j);
            while (scanf("%d", &matrix1[i][j]) != 1) {
                printf("Invalid input. Please enter an integer: ");
                while (getchar() != '\n'); // Clear input buffer
            }
        }
    }

    // Input for second matrix
    printf("Enter elements of the second matrix (%dx%d):\n", rows2, columns2);
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < columns2; j++) {
            printf("Element [%d][%d]: ", i, j);
            while (scanf("%d", &matrix2[i][j]) != 1) {
                printf("Invalid input. Please enter an integer: ");
                while (getchar() != '\n');
            }
        }
    }

    // Display input matrices
    printf("First Matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns1; j++) {
            printf("%4d", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Second Matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < columns2; j++) {
            printf("%4d", matrix2[i][j]);
        }
        printf("\n");
    }

    // Multiply matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns2; j++) {
            resultMatrix[i][j] = 0;
            for (k = 0; k < columns1; k++) {
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display result matrix
    printf("Result Matrix after multiplication:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns2; j++) {
            printf("%4d", resultMatrix[i][j]);
        }
        printf("\n");
    }

    
}

