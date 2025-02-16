#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    char *str;
    int n;

    printf("Enter the length of the string: ");
    scanf("%d", &n);
    
    str = (char *)malloc((n + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the string: ");
    getchar();
    fgets(str, n + 1, stdin);

    printf("Entered string: %s\n", str);

    free(str);

    getch();

    return 0;
}

