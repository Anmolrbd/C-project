#include <stdio.h>
#include <time.h>
#include <conio.h>

int main() {
    struct tm *currentDate;
    int dateInteger;

    time_t t = time(NULL);
    currentDate = localtime(&t);

    dateInteger = (currentDate->tm_year + 1900) * 10000 + (currentDate->tm_mon + 1) * 100 + currentDate->tm_mday;

    printf("Current date as an integer: %d\n", dateInteger);

    getch();

    return 0;
}

