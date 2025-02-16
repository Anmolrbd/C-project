#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], word[20], largest[20];
    int wordLen = 0, maxLen = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    int length = strlen(str);

    for (i = 0; i <= length; i++) {
        if (isalnum(str[i])) {
            word[wordLen++] = str[i];
        } else {
            if (wordLen > 0) {
                word[wordLen] = '\0';
                if (wordLen > maxLen) {
                    maxLen = wordLen;
                    strcpy(largest, word);
                }
                wordLen = 0;
            }
        }
    }

    printf("Biggest word: %s\n", largest);

    getch();

    return 0;
}

