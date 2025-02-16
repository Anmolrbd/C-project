#include <stdio.h>
#include <conio.h>
#include <string.h>

int isDuplicate(char str[], char word[]) {
    char temp[100];
    int i = 0, j = 0, k, found;

    while (str[i] != '\0') {
        if (str[i] == word[0]) {
            found = 1;
            for (k = 1; word[k] != '\0'; k++) {
                if (str[i + k] != word[k]) {
                    found = 0;
                    break;
                }
            }
            if (found)
                return 1;
        }
        i++;
    }
    return 0;
}

void deleteDuplicates(char str[]) {
    char temp[100], word[20];
    int i = 0, j = 0, wordLen = 0,k;

    while (str[i] != '\0') {
        if (isalnum(str[i])) {
            word[wordLen++] = str[i];
        } else {
            if (wordLen > 0) {
                word[wordLen] = '\0';
                if (!isDuplicate(temp, word)) {
                    for (k = 0; k < wordLen; k++) {
                        temp[j++] = word[k];
                    }
                    temp[j++] = ' ';
                }
                wordLen = 0;
            }
        }
        i++;
    }

    temp[j] = '\0';
    strcpy(str, temp);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    deleteDuplicates(str);

    printf("String after deleting duplicates: %s\n", str);

    getch();

    return 0;
}

