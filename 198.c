#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char str[50] = "Hello, World!";
    
    printf("Before memset: %s\n", str);
    
    memset(str, 'X', 5);
    
    printf("After memset: %s\n", str);

    getch();

    return 0;
}

