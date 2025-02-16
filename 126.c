#include <stdio.h>
#include <conio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int isValidDate(int day, int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (month < 1 || month > 12 || year < 1) {
        return 0;
    }

    if (month == 2 && isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    if (day < 1 || day > daysInMonth[month - 1]) {
        return 0;
    }

    return 1;
}

int main() {
    int day, month, year;

    printf("Enter the date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    if (isValidDate(day, month, year)) {
        printf("The date is valid.\n");
    } else {
        printf("The date is invalid.\n");
    }

    getch();

    return 0;
}

