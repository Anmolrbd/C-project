#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0, wordLength = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Length of each word:\n");
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            wordLength++;
        } else if (wordLength > 0) {
            printf("%d ", wordLength);
            wordLength = 0;
        }
        i++;
    }

    if (wordLength > 0) {
        printf("%d", wordLength);
    }

    getch();

    return 0;
}

