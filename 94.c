#include<stdio.h>
#include<conio.h>

int main() {
    float height;
    printf("Enter the height of the person in cm: ");
    scanf("%f", &height);
    
    if (height >= 180)
        printf("The person is tall.\n");
    else if (height < 150)
        printf("The person is a dwarf.\n");
    else
        printf("The person is of average height.\n");
    
    getch();
    return 0;
}
