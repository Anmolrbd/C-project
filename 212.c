#include <stdio.h>
#include <conio.h>
#include <string.h>

void copyString(char *source, char *destination) {
    if (*source == '\0') {
        *destination = '\0';
        return;
    }
    *destination = *source;
    copyString(source + 1, destination + 1);
}

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = 0;

    copyString(source, destination);

    printf("Copied string: %s\n", destination);

    getch();

    return 0;
}

