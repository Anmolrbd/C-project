#include <stdio.h>
#include <conio.h>
#include <time.h>

const char* getDayOfWeek(int day, int month, int year) {
    struct tm timeStruct;
    timeStruct.tm_mday = day;
    timeStruct.tm_mon = month - 1;
    timeStruct.tm_year = year - 1900;

    mktime(&timeStruct);

    switch(timeStruct.tm_wday) {
        case 0: return "Sunday";
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        default: return "Invalid day";
    }
}

int main() {
    int day, month, year;

    printf("Enter the date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    printf("The day of the week is: %s\n", getDayOfWeek(day, month, year));

    getch();

    return 0;
}

