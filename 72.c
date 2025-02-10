#include <stdio.h>
#include<conio.h>
int globalVar = 10;

void function() {
    int localVar = 20;
    static int staticVar = 30;
    printf("Local Variable: %d\n", localVar);
    printf("Static Variable: %d\n", staticVar);
    printf("Global Variable: %d\n", globalVar);
    staticVar++;
}

int main() {
    function();
    function();
    getch();
    return 0;
}


