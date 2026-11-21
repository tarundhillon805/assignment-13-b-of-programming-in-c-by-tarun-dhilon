#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;

    /* Declare a function pointer */
    int (*functionPointer)(int, int);

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    /* Store the address of the add function */
    functionPointer = add;

    /* Call the function using the function pointer */
    sum = functionPointer(num1, num2);

    printf("Sum = %d\n", sum);

    return 0;
}