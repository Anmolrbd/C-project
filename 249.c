#include <stdio.h>
#include <conio.h>
#include <math.h>

double sumGP(int a, int r, int n) {
    if (r == 1) {
        return a * n;
    }
    return (a * (1 - pow(r, n))) / (1 - r);
}

int main() {
    int a, r, n;
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    
    printf("Enter the common ratio (r): ");
    scanf("%d", &r);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    printf("Sum of the Geometric Progression (G.P.) series is: %.2lf", sumGP(a, r, n));

    getch();
    return 0;
}

