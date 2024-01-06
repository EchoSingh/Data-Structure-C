#include <stdio.h>
#include <stdlib.h>

struct customer {
    int Account_no;
    char Name[20];
    int Balance;
} c[3];

void balance_less_100() {
    int i;
    printf("Customer whose balance is less than 100\n");
    for (i = 0; i < 3; i++) {
        if (c[i].Balance < 100) {
            printf("Account_no of customer: %d\n", c[i].Account_no);
            printf("Name of customer: %s\n", c[i].Name);
            printf("Balance of customer: %d\n", c[i].Balance);
        }
    }
}

int main() {
    int i;
    printf("Enter Customer details:\n");
    for (i = 0; i < 3; i++) {
        printf("Enter customer account_no: ");
        scanf("%d", &c[i].Account_no);

        printf("Enter Name of customer: ");
        scanf("%s", c[i].Name);

        printf("Enter customer Balance: ");
        scanf("%d", &c[i].Balance);
    }
    
    balance_less_100();

    return 0;
}

