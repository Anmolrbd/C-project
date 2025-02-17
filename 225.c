#include <stdio.h>
#include <string.h>
#include <conio.h>

void sortWords(char *str) {
    char *words[50];
    int count = 0,i,j;
    char *token = strtok(str, " ");
    
    while (token) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }
    
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                char *temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }
    
    printf("Sorted words:\n");
    for (i = 0; i < count; i++) {
        printf("%s\n", words[i]);
    }
}

int main() {
    char str[] = "Hello welcome to Pokhara";
    sortWords(str);
    getch();
    return 0;
}

