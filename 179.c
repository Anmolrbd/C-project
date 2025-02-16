#include <stdio.h>
#include <conio.h>

int main() {
    int age, baby = 0, school = 0, adult = 0,i;

    for (i = 1; i <= 15; i++) {
        printf("Enter the age of person %d: ", i);
        scanf("%d", &age);

        if (age <= 5) {
            baby++;
        } else if (age >= 6 && age <= 18) {
            school++;
        } else {
            adult++;
        }
    }

    printf("\nTotal Baby age count: %d\n", baby);
    printf("Total School age count: %d\n", school);
    printf("Total Adult age count: %d\n", adult);

    getch();

    return 0;
}

