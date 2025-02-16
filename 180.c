#include <stdio.h>
#include <conio.h>

int main() {
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to search for: ");
    scanf("%c", &ch);

    printf("Indexes of '%c' in the string are:\n", ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Character not found in the string.");
    }

    getch();

    return 0;
}

