#include <stdio.h>
#include<conio.h>
int main() {
    char str[200], out[200];
    int i = 0, j = 0;
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", str);
    while (str[i] != '\0') 
    {
        if (str[i] != ' ' && str[i] != '\t')
	   {
            if (str[i] == '.') {
                result[j++] = ':';
            } else {
                result[j++] = str[i];
            }
        }
        i++;
    }
    result[j] = '\0';
    printf("Modified sentence: %s\n", result);
    getch();
    return 0;
}

