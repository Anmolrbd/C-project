#include <stdio.h>
#include <string.h>
#include <conio.h>

int calculateLovePercentage(char name1[], char name2[]) {
    int i, sum = 0;
    for (i = 0; name1[i] != '\0'; i++) {
        sum += name1[i];
    }
    for (i = 0; name2[i] != '\0'; i++) {
        sum += name2[i];
    }
    return sum % 101;
}

int main() {
    char name1[50], name2[50];
    int lovePercentage;

    printf("Enter your name: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';

    printf("Enter your partner's name: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0';

    lovePercentage = calculateLovePercentage(name1, name2);

    printf("The love percentage between %s and %s is: %d%%\n", name1, name2, lovePercentage);

    getch();

    return 0;
}

