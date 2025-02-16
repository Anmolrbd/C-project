#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    if (strcmp(str1, str2) == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    getch();

    return 0;
}

