#include <stdio.h>
#include <time.h>
#include <conio.h>

int main() {
    int currentTime;

    currentTime = time(NULL);

    printf("Current time in seconds since January 1, 1970: %d\n", currentTime);

    getch();

    return 0;
}

