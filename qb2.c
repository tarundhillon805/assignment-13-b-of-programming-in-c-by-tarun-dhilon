#include <stdio.h>

int main() {
    char source[100];
    char destination[100];

    char *src;
    char *dest;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    src = source;
    dest = destination;

    while (*src != '\0') {
        if (*src == '\n') {
            break;
        }

        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

    printf("Copied string = %s\n", destination);

    return 0;
}