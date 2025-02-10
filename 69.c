#include <stdio.h>
#include<conio.h>
int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("Combination C(%d, %d) = %d\n", n, r, fact(n) / (fact(r) * fact(n - r)));
    printf("Permutation P(%d, %d) = %d\n", n, r, fact(n) / fact(n - r));
    getch();
    return 0;
}

