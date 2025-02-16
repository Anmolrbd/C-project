#include <stdio.h>
#include <conio.h>
#include <time.h>

int main() {
    int guess, number;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number between 1 and 100: ");
    do {
        scanf("%d", &guess);

        if (guess < number) {
            printf("Too low! Try again: ");
        } else if (guess > number) {
            printf("Too high! Try again: ");
        } else {
            printf("Congratulations! You've guessed the correct number.\n");
        }
    } while (guess != number);

    getch();

    return 0;
}

