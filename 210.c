#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int findFrequency(char str[], char word[]) {
    int count = 0, i = 0, j, found;
    int wordLen = strlen(word);

    while (str[i] != '\0') {
        if (str[i] == word[0]) {
            found = 1;
            for (j = 1; j < wordLen; j++) {
                if (str[i + j] != word[j]) {
                    found = 0;
                    break;
                }
            }
            if (found) {
                count++;
                i += wordLen - 1; 
            }
        }
        i++;
    }
    return count;
}

int main() {
    char str[100], word[20];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Enter the word to find frequency: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0;

    int frequency = findFrequency(str, word);
    printf("Frequency of '%s' in the string: %d\n", word, frequency);

    getch();

    return 0;
}

