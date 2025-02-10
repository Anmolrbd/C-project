#include <stdio.h>
#include<conio.h>
int main() {
    int days, years, weeks, remaining_days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    remaining_days = (days % 365) % 7;
    printf("%d days is equivalent to %d years, %d weeks, and %d days.\n", days, years, weeks, remaining_days);
    getch();
    return 0;
}

