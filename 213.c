#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

char findFirstCapital(char *str) {
    if (*str == '\0') {
        return '\0';
    }
    if (isupper(*str)) {
        return *str;
    }
    return findFirstCapital(str + 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    char capital = findFirstCapital(str);

    if (capital != '\0') {
        printf("First capital letter: %c\n", capital);
    } else {
        printf("No capital letter found in the string.\n");
    }

    getch();

    return 0;
}

