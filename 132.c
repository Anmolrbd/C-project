#include <stdio.h>
#include <conio.h>
#include <string.h>

void binaryAddition(char bin1[], char bin2[], char result[]) {
    int i, carry = 0, sum;
    int len1 = strlen(bin1);
    int len2 = strlen(bin2);
    int maxLen = (len1 > len2) ? len1 : len2;

    for (i = 0; i < maxLen; i++) {
        int bit1 = (i < len1) ? bin1[len1 - 1 - i] - '0' : 0;
        int bit2 = (i < len2) ? bin2[len2 - 1 - i] - '0' : 0;

        sum = bit1 + bit2 + carry;
        result[maxLen - 1 - i] = (sum % 2) + '0';
        carry = sum / 2;
    }

    if (carry) {
        result[maxLen] = carry + '0';
        result[maxLen + 1] = '\0';
    } else {
        result[maxLen] = '\0';
    }
}

void binarySubtraction(char bin1[], char bin2[], char result[]) {
    int i, borrow = 0, diff;
    int len1 = strlen(bin1);
    int len2 = strlen(bin2);
    int maxLen = (len1 > len2) ? len1 : len2;

    for (i = 0; i < maxLen; i++) {
        int bit1 = (i < len1) ? bin1[len1 - 1 - i] - '0' : 0;
        int bit2 = (i < len2) ? bin2[len2 - 1 - i] - '0' : 0;

        diff = bit1 - bit2 - borrow;
        if (diff < 0) {
            diff += 2;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result[maxLen - 1 - i] = diff + '0';
    }

    result[maxLen] = '\0';
}

int main() {
    char bin1[100], bin2[100], resultAdd[101], resultSub[100];

    printf("Enter the first binary number: ");
    fgets(bin1, sizeof(bin1), stdin);
    bin1[strcspn(bin1, "\n")] = '\0';

    printf("Enter the second binary number: ");
    fgets(bin2, sizeof(bin2), stdin);
    bin2[strcspn(bin2, "\n")] = '\0';

    binaryAddition(bin1, bin2, resultAdd);
    printf("Binary Addition result: %s\n", resultAdd);

    binarySubtraction(bin1, bin2, resultSub);
    printf("Binary Subtraction result: %s\n", resultSub);

    getch();

    return 0;
}

