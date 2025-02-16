#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char str[200], words[50][50];
    int count[50] = {0}, i, j, k = 0, n = 0, found;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            words[n][k++] = str[i];
        } else {
            words[n][k] = '\0';
            n++;
            k = 0;
        }
    }
    words[n][k] = '\0';
    n++;

    for (i = 0; i < n; i++) {
        found = 0;
        for (j = 0; j < i; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            count[i] = 1;
            for (j = i + 1; j < n; j++) {
                if (strcmp(words[i], words[j]) == 0) {
                    count[i]++;
                }
            }
        }
    }

    printf("Word Frequency:\n");
    for (i = 0; i < n; i++) {
        if (count[i] > 0) {
            printf("%s: %d\n", words[i], count[i]);
        }
    }

    getch();
    return 0;
}

