#include<stdio.h>
#include<conio.h>

int main() {
    int choice;
    float balance = 1000.0, amount;
    
    while (1) {
        printf("\nATM Transactions:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount deposited successfully!\n");
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount > balance)
                    printf("Insufficient balance!\n");
                else {
                    balance -= amount;
                    printf("Amount withdrawn successfully!\n");
                }
                break;
            case 4:
                printf("Thank you for using our ATM!\n");
                getch();
                return 0;
            default:
                printf("Invalid choice, please try again!\n");
        }
    }
}

