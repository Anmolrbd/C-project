#include <stdio.h>
#include <conio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
        count++;
    }

    str2[i] = '\0';

    printf("Copied string: %s\n", str2);
    printf("Number of copied characters: %d\n", count);

    getch();

    return 0;
}

