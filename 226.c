#include <stdio.h>
#include <conio.h>

void printPercentage(int value, int percent) {
    if (percent > 100) return;
    printf("%d%% of %d is %.2f\n", percent, value, (value * percent) / 100.0);
    printPercentage(value, percent + 1);
}

int main() {
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);
    printPercentage(value, 1);
    getch();
    return 0;
}

