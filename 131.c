#include <stdio.h>
#include <conio.h>

int main() {
    unsigned int num;
    unsigned char byte1, byte2, byte3, byte4;

    printf("Enter an integer in hexadecimal (e.g., 0x1A2B3C4D): ");
    scanf("%x", &num);

    byte1 = (num >> 24) & 0xFF;
    byte2 = (num >> 16) & 0xFF;
    byte3 = (num >> 8) & 0xFF;
    byte4 = num & 0xFF;

    printf("Extracted bytes: \n");
    printf("Byte 1: 0x%X\n", byte1);
    printf("Byte 2: 0x%X\n", byte2);
    printf("Byte 3: 0x%X\n", byte3);
    printf("Byte 4: 0x%X\n", byte4);

    getch();

    return 0;
}

