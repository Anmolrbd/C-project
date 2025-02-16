#include <stdio.h>
#include <conio.h>

int isPalindrome(int n) {
    int reversed = 0, original = n;

    while (n > 0) {
        reversed = (reversed << 1) | (n & 1);
        n >>= 1;
    }

    return (original == reversed);
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (isPalindrome(n)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    getch();

    return 0;
}

