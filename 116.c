#include <stdio.h>

int main() {
    FILE *file;
    long size;

    file = fopen("example.txt", "rb");

    if (file == NULL) {
        printf("File not found\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    size = ftell(file);
    fclose(file);

    printf("Size of the file: %ld bytes\n", size);

    return 0;
}

