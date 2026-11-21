#include <stdio.h>

int stringLength(char *str) {
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

void stringCopy(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }

    *destination = '\0';
}

int stringCompare(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }

        str1++;
        str2++;
    }

    return *str1 - *str2;
}

int main() {
    char str1[100], str2[100], copiedString[100];
    int choice;

    int (*lengthPointer)(char *);
    void (*copyPointer)(char *, char *);
    int (*comparePointer)(char *, char *);

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Choose an operation:\n");
    printf("1. Find string length\n");
    printf("2. Copy string\n");
    printf("3. Compare two strings\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    lengthPointer = stringLength;
    copyPointer = stringCopy;
    comparePointer = stringCompare;

    if (choice == 1) {
        printf("Length = %d\n", lengthPointer(str1));
    } 
    else if (choice == 2) {
        copyPointer(str1, copiedString);
        printf("Copied string = %s", copiedString);
    } 
    else if (choice == 3) {
        getchar();

        printf("Enter the second string: ");
        fgets(str2, sizeof(str2), stdin);

        int result = comparePointer(str1, str2);

        if (result == 0) {
            printf("Both strings are equal.\n");
        } else if (result < 0) {
            printf("First string is smaller than the second string.\n");
        } else {
            printf("First string is greater than the second string.\n");
        }
    } 
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}