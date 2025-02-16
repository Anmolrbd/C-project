#include <stdio.h>
#include <conio.h>

int main() {
    char timeStr[10];
    int hours, minutes, seconds;

    printf("Enter time in HH:MM:SS format: ");
    fgets(timeStr, sizeof(timeStr), stdin);

    sscanf(timeStr, "%d:%d:%d", &hours, &minutes, &seconds);

    if (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60) {
        printf("Valid time: %02d:%02d:%02d\n", hours, minutes, seconds);
    } else {
        printf("Invalid time\n");
    }

    getch();

    return 0;
}

