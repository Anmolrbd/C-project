#include <stdio.h>
#include <conio.h>

void substring(char str[], int start, int length, char result[]) {
    int i;
    for (i = 0; i < length && str[start + i] != '\0'; i++) {
        result[i] = str[start + i];
    }
    result[i] = '\0';
}

int main() {
    char str[100], result[100];
    int start, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the starting index and length of the substring: ");
    scanf("%d %d", &start, &length);

    substring(str, start, length, result);

    printf("The substring is: %s\n", result);

    getch();

    return 0;
}

