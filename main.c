#include <stdio.h>

int main(void) {
    double balance = 0.0;

    printf("Hello and Welcome to African Bank!\n");

    while (1) {
        printf("1. Depsit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Choose an option: ");

        int option;
        scanf("%d", &option);

        switch (option) {
            case 1: {
                double amount;
                printf("Enter deposit amount: ");
                scanf("%lf", &amount);
                balance += amount;
                printf("Deposit successful. Now you have some cash! New balance: ", balance);
                break;
            }
            case 2: {
                if (balance == 0) {
                    printf("You must make a deposit first. Don't Play with me\n");
                } else {
                    double amount;
                    printf("Enter withdrawal amount: ");
                    scanf("%lf", &amount);
                    if (balance >= amount) {
                        balance -= amount;
                        printf("Withdrawal successful. Bye bye cash!  New balance: ", balance);
                    } else {
                        printf("Insufficient funds. You are broke! Withdrawal failed.\n");
                    }
                }
                break;
            }
            case 3: {
                printf("Current balance: ", balance);
                break;
            }
            case 4: {
                printf("Thank you for banking with African Bank! We won't steal your money!\n");
                return 0;
            }
            default: {
                printf("Invalid option. Please choose again.\n");
            }
        }
    }

    return 0;
}
