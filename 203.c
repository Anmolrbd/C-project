#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], word[20], smallest[20];
    int wordLen = 0, minLen = 100, i;

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
                if (wordLen < minLen) {
                    minLen = wordLen;
                    strcpy(smallest, word);
                }
                wordLen = 0;
            }
        }
    }

    printf("Smallest word: %s\n", smallest);

    getch();

    return 0;
}

