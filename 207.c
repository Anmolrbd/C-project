#include <stdio.h>
#include <conio.h>
#include <string.h>

void removeWord(char str[], char word[]) {
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
            if (found) {
                i += k;
                continue;
            }
        }
        temp[j++] = str[i++];
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

int main() {
    char str[100], word[20];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    printf("Enter the word to remove: ");
    fgets(word, sizeof(word), stdin);

    word[strcspn(word, "\n")] = 0;

    removeWord(str, word);

    printf("Updated string: %s\n", str);

    getch();

    return 0;
}

