#include <stdio.h>

/* Comparison function for ascending order */
int ascending(int a, int b) {
    return a > b;
}

/* Comparison function for descending order */
int descending(int a, int b) {
    return a < b;
}

/* Sorting function using a function pointer */
void sort(int arr[], int n, int (*compare)(int, int)) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (compare(arr[j], arr[j + 1])) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nChoose sorting order:\n");
    printf("1. Ascending order\n");
    printf("2. Descending order\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        sort(arr, n, ascending);
        printf("Array in ascending order:\n");
        display(arr, n);
    } else if (choice == 2) {
        sort(arr, n, descending);
        printf("Array in descending order:\n");
        display(arr, n);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}