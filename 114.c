#include <conio.h>
#include <stdio.h>

#define print_var_name(x) printf(#x "\n")

int main() {
    int num = 5;

    print_var_name(num);

    getch();
    return 0;
}

