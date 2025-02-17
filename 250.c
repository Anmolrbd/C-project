#include <stdio.h>
#include <conio.h>

double sumHP(int n) {
	int i;
    double sum = 0.0;
    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int N;
    printf("Enter the number of terms (n): ");
    scanf("%d", &N);
    
    printf("Sum of the Harmonic Progression (H.P.) series is: %.6lf", sumHP(N));

    getch();
    return 0;
}

