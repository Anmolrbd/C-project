#include <stdio.h>
#include <conio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != str[i + 1]) {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';

    printf("String after removing consecutive duplicates: %s\n", result);

    getch();

    return 0;
}

