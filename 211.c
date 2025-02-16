#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int sum = 0, i;

    printf("Enter an alphanumeric string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            sum += str[i] - '0';
        }
    }

    printf("Sum of digits in the string: %d\n", sum);

    getch();

    return 0;
}

