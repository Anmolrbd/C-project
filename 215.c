#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char str[200], maxChar;
    int freq[256] = {0}, i, maxFreq = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            freq[(int)str[i]]++;
            if (freq[(int)str[i]] > maxFreq) {
                maxFreq = freq[(int)str[i]];
                maxChar = str[i];
            }
        }
    }

    printf("Character with highest frequency: %c\n", maxChar);
    printf("Frequency: %d\n", maxFreq);

    getch();
    return 0;
}

