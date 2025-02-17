#include <stdio.h>
#include <conio.h>

double sumAP(int a, int d, int n) {
    return (n / 2.0) * (2 * a + (n - 1) * d);
}

int main() {
    int a, d, n;
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    
    printf("Enter the common difference (d): ");
    scanf("%d", &d);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    printf("Sum of the Arithmetic Progression (A.P.) series is: %.2lf", sumAP(a, d, n));

    getch();
    return 0;
}

