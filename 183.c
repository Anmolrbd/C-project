#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
        i++;
    }

    printf("String after capitalizing first character of each word: %s\n", str);

    getch();

    return 0;
}

