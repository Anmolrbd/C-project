#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    float length, width, height;
    printf("Enter the length, width, and height of the cuboid: ");
    scanf("%f %f %f", &length, &width, &height);
    float surface_area = 2 * (length * width + width * height + height * length);
    float volume = length * width * height;
    float space_diagonal = sqrt(length * length + width * width + height * height);
    printf("Surface Area: %.2f\n", surface_area);
    printf("Volume: %.2f\n", volume);
    printf("Space Diagonal: %.2f\n", space_diagonal);
    getch();
    return 0;
}

