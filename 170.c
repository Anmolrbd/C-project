#include <stdio.h>
#include <conio.h>

int main() {
    int num;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            printf("The number is POSITIVE.\n");
        } else if (num < 0) {
            printf("The number is NEGATIVE.\n");
        } else {
            printf("The number is ZERO.\n");
        }

        printf("Do you want to check another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    getch();

    return 0;
}

