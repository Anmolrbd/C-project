#include <stdio.h>
#include <conio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i + 1] != '\0'; i += 2) {
        char temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
    }

    printf("String after swapping adjacent characters: %s\n", str);

    getch();

    return 0;
}

