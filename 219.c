#include <stdio.h>
#include <conio.h>
#include <string.h>

void findWordEndingWith(char str[], char ch) {
    char *word = strtok(str, " ");
    int found = 0;

    while (word != NULL) {
        int len = strlen(word);
        if (word[len - 1] == ch) {
            printf("%s\n", word);
            found = 1;
        }
        word = strtok(NULL, " ");
    }

    if (!found)
        printf("No word found ending with '%c'.\n", ch);
}

int main() {
    char str[200], ch;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to search words ending with: ");
    ch = getche();
    printf("\nWords ending with '%c':\n", ch);

    findWordEndingWith(str, ch);

    getch();
    return 0;
}

