#include <stdio.h>

int main() {
    int pin, amount, balance;

    scanf("%d %d %d", &pin, &amount, &balance);

    if (pin == 1234) {
        if (amount > 0 && amount % 100 == 0) {
            if (amount <= balance) {
                printf("Withdrawal Successful");
            } else {
                printf("Insufficient Balance");
            }
        } else {
            printf("Invalid Amount");
        }
    } else {
        printf("Invalid PIN");
    }

    return 0;
}