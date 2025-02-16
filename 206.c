#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100], word[20];
    int i = 0, wordLen = 0,j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    int length = strlen(str);
    for (j = 0; j <= length; j++) {
        if (isalnum(str[j])) {
            word[wordLen++] = str[j];
        } else {
            if (wordLen > 0) {
                word[wordLen] = '\0';
                reverseWord(word, 0, wordLen - 1);
                printf("%s ", word);
                wordLen = 0;
            }
            if (str[j] != ' ') {
                printf("%c", str[j]);
            }
        }
    }

    getch();

    return 0;
}

