#include <stdio.h>
#include <conio.h>
#include <string.h>

void sortString(char str[]) {
    int i, j, len = strlen(str);
    char temp;
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int areAnagrams(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2))
        return 0;

    sortString(str1);
    sortString(str2);

    return strcmp(str1, str2) == 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if (areAnagrams(str1, str2))
        printf("Strings are anagrams.\n");
    else
        printf("Strings are not anagrams.\n");

    getch();
    return 0;
}

