#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (i == 0 || str[i - 1] == ' ') {
            i++;
        }
        if (str[i] != '\0') {
            str[j++] = str[i++];
        }
    }

    str[j] = '\0';

    printf("String after removing the first character of each word: %s\n", str);

    getch();

    return 0;
}

