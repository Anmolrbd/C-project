#include <stdio.h>
#include <conio.h>
#include <string.h>

void printSubsets(char str[], char subset[], int index, int start, int length) {
	int i;
    if (index == length) {
        subset[length] = '\0';
        printf("%s\n", subset);
        return;
    }
    for (i = start; str[i] != '\0'; i++) {
        subset[index] = str[i];
        printSubsets(str, subset, index + 1, i + 1, length);
    }
}

int main() {
    char str[100], subset[100];
    int length;

    printf("Enter a string: ");
    gets(str);

    printf("Enter subset length: ");
    scanf("%d", &length);

    printf("All subsets of length %d:\n", length);
    printSubsets(str, subset, 0, 0, length);

    getch();
    return 0;
}

