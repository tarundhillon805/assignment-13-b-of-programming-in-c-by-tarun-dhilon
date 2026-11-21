#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];

    char *ptr1;
    char *ptr2;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    ptr1 = str1;
    ptr2 = str2;

    while (*ptr1 != '\0' && *ptr2 != '\0') {
        if (*ptr1 == '\n' || *ptr2 == '\n') {
            break;
        }

        if (*ptr1 != *ptr2) {
            break;
        }

        ptr1++;
        ptr2++;
    }

    if ((*ptr1 == '\n' || *ptr1 == '\0') &&
        (*ptr2 == '\n' || *ptr2 == '\0')) {
        printf("Both strings are equal.\n");
    } else if (*ptr1 < *ptr2) {
        printf("First string is smaller than the second string.\n");
    } else {
        printf("First string is greater than the second string.\n");
    }

    return 0;
}