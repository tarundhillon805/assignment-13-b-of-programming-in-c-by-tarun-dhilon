#include <stdio.h>

int square(int n) {
    return n * n;
}

int cube(int n) {
    return n * n * n;
}

int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int number;
    int choice;

    /*
     * Array of function pointers.
     * Every function accepts one int and returns one int.
     */
    int (*operations[3])(int) = {square, cube, factorial};

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\nChoose an operation:\n");
    printf("1. Square\n");
    printf("2. Cube\n");
    printf("3. Factorial\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3) {
        printf("Result = %d\n", operations[choice - 1](number));
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}