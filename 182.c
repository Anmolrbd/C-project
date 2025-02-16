#include <stdio.h>
#include <conio.h>

int main() {
    char *str[5];
    int i;
    str[0] = "Hello";
    str[1] = "World";
    str[2] = "C";
    str[3] = "Programming";
    str[4] = "Language";

    printf("Array of Strings:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    getch();

    return 0;
}

