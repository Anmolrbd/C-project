#include <stdio.h>
#include <conio.h>

int main() {
    char hexByte[3];
    int intValue;

    printf("Enter a hexadecimal byte (2 digits): ");
    fgets(hexByte, sizeof(hexByte), stdin);

    sscanf(hexByte, "%2x", &intValue);

    printf("The integer value is: %d\n", intValue);

    getch();

    return 0;
}

