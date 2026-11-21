#include <stdio.h>

int search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[100];
    int n, target, result;

    /* Declare a function pointer */
    int (*functionPointer)(int[], int, int);

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    /* Assign the address of the search function */
    functionPointer = search;

    /* Call search through the function pointer */
    result = functionPointer(arr, n, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}