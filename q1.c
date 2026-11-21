#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int *ptr;
    int largest, smallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    largest = *ptr;
    smallest = *ptr;

    for (i = 1; i < n; i++) {
        ptr++;

        if (*ptr > largest) {
            largest = *ptr;
        }

        if (*ptr < smallest) {
            smallest = *ptr;
        }
    }

    printf("\nLargest element = %d", largest);
    printf("\nSmallest element = %d\n", smallest);

    return 0;
}