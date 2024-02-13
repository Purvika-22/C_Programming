#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define min_bal 3000

typedef struct Account
{
    int accnum;
    char name[20];
    int bal;
} bnk;

void displayAccount(bnk *acc)
{
    printf("Acc Num: %d\n", acc->accnum);
    printf("Acc holder name: %s\n", acc->name);
    printf("Acc Bal: %d\n", acc->bal);
}

void deposit(bnk *acc, double amount)
{
    acc->bal += amount;
    printf("Deposit successful. New balance: %d\n", acc->bal);
}

void withdraw(bnk *acc, double amount)
{
    if (acc->bal - amount >= min_bal)
    {
        acc->bal -= amount;
        printf("Withdrawal successful. New balance: %d\n", acc->bal);
    }
    else
    {
        printf("Insufficient balance. Minimum balance requirement not met.\n");
    }
}

int main()
{
    bnk my_acc;

    printf("Enter acc num: ");
    scanf("%d", &my_acc.accnum);

    printf("Enter acc name: ");
    scanf("%s", my_acc.name);

    printf("Enter acc bal: ");
    scanf("%d", &my_acc.bal);

    displayAccount(&my_acc);

    deposit(&my_acc, 2000);
    withdraw(&my_acc, 300);

    return 0;
}
