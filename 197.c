#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    memcpy(destination, source, strlen(source) + 1);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    getch();

    return 0;
}

