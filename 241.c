#include <stdio.h>
#include <conio.h>
#include <math.h>

double sinSeries(double x, int terms) {
    static double result = 0;
    static int sign = 1;

    if (terms == 0) {
        return result;
    }
    
    double term = pow(x, 2 * terms - 1) / tgamma(2 * terms);
    result += sign * term;
    sign = -sign; 
    
    return sinSeries(x, terms - 1);
}

int main() {
    double x;
    int terms;
    
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    
    printf("Enter the number of terms for the series: ");
    scanf("%d", &terms);
    
    printf("sin(%.2lf) = %.6lf", x, sinSeries(x, terms));

    getch();
    return 0;
}

