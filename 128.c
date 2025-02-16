#include <stdio.h>
#include <conio.h>
#include <time.h>

int main() {
    struct tm *currentTime;
    time_t t;
    
    while(1) {
        t = time(NULL);
        currentTime = localtime(&t);

        printf("\r%02d:%02d:%02d", currentTime->tm_hour, currentTime->tm_min, currentTime->tm_sec);
        fflush(stdout);

        if (kbhit()) {
            break;
        }
    }

    getch();

    return 0;
}

