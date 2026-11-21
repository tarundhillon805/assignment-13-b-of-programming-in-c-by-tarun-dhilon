#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, columns;
    int i, j;
    int rowSum, columnSum;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", (*(matrix + i) + j));
        }
    }

    printf("\nSum of each row:\n");

    for (i = 0; i < rows; i++) {
        rowSum = 0;

        for (j = 0; j < columns; j++) {
            rowSum += *(*(matrix + i) + j);
        }

        printf("Row %d sum = %d\n", i + 1, rowSum);
    }

    printf("\nSum of each column:\n");

    for (j = 0; j < columns; j++) {
        columnSum = 0;

        for (i = 0; i < rows; i++) {
            columnSum += *(*(matrix + i) + j);
        }

        printf("Column %d sum = %d\n", j + 1, columnSum);
    }

    return 0;
}