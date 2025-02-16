#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    int n,i;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar();

    char str[100];

    for (i = 1; i <= n; i++) {
        printf("Enter string %d: ", i);
        fgets(str, sizeof(str), stdin);

        printf("Length of string %d: %d\n", i, strlen(str) - 1);
    }

    getch();

    return 0;
}

