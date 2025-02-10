#include <stdio.h>
#include <math.h>
#include <conio.h>
int main() {
    float radius, height;
    printf("Enter the radius and height of the cone: ");
    scanf("%f %f", &radius, &height);
    float slant_height = sqrt(radius * radius + height * height);
    float surface_area = M_PI * radius * (radius + slant_height);
    float volume = (1.0 / 3) * M_PI * radius * radius * height;
    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume);
    getch();
    return 0;
}

