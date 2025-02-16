#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int start = 0, end = strlen(str) - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100], word[20], smallest[20], largest[20];
    int i = 0, wordLen = 0, minLen = 100, maxLen = 0,j;

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
                if (isPalindrome(word)) {
                    if (wordLen < minLen) {
                        minLen = wordLen;
                        strcpy(smallest, word);
                    }
                    if (wordLen > maxLen) {
                        maxLen = wordLen;
                        strcpy(largest, word);
                    }
                }
                wordLen = 0;
            }
        }
    }

    if (maxLen > 0 && minLen < 100) {
        printf("Smallest palindrome word: %s\n", smallest);
        printf("Largest palindrome word: %s\n", largest);
    } else {
        printf("No palindrome words found.\n");
    }

    getch();

    return 0;
}

