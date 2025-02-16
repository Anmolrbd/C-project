#include<stdio.h>
#include<conio.h>

int main() {
    int year, lastTwoDigits;
    printf("Enter a year: ");
    scanf("%d", &year);
    lastTwoDigits = year % 100;
    printf("The last two digits of the year are: %d", lastTwoDigits);
    getch();
    return 0;
}

