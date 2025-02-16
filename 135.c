#include <stdio.h>
#include <conio.h>

int main() {
    int decimal, i = 0;
    int binary[32];

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    getch();

    return 0;
}

