#include <stdio.h>
#include<conio.h>
int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main() {
    int result = sum(50);
    printf("Sum of first 50 natural numbers is: %d\n", result);
    getch();
    return 0;
}

