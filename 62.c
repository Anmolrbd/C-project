#include <stdio.h>
#include <math.h>
#include <conio.h>
int main() {
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    float surface_area = 4 * M_PI * radius * radius;
    float volume = (4.0 / 3) * M_PI * radius * radius * radius;
    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume);
    getch();
    return 0;
}

