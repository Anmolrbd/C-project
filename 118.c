#include <stdio.h>
#include <conio.h>

int main() {
    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;
    int age;

    printf("Enter your birthdate (dd mm yyyy): ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

    printf("Enter the current date (dd mm yyyy): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

    age = currentYear - birthYear;

    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    printf("You are %d years old.\n", age);

    getch();

    return 0;
}

