#include <stdio.h>
#include <stdlib.h>

int deposit(int a);
int withdraw(int a);
int balance(int a);
int bill(int a);
int mainMenu();
#define PIN 5268

int main()
{
    system("clear");

    int pin;

    for (int i = 1; i <= 3; i++)
    {
        printf("Enter Password = ");
        scanf("%d", &pin);

        if (pin == PIN)
        {
            break;
        }
        else
        {
            if (i != 3)
                printf("Invalid Pin !\n");
            else
                printf("Your Card Is Blocked !\n");
        }
    }

    if (pin == PIN)
        mainMenu();

    return 0;
}

int mainMenu()
{

    int balanceAmount = 10000;

    do
    {
        system("clear");

        printf("1.Cash Deposit\n");
        printf("2.Cash Withdraw\n");
        printf("3.Check Balace\n");
        printf("4.Pay Bill\n");
        printf("5.Exit\n");

        int selection;

        printf("Enter Selection = ");
        scanf("%d", &selection);

        system("clear");

        if (selection == 1)
        {
            int x = deposit(balanceAmount);
            balanceAmount = x;
        }
        else if (selection == 2)
        {
            int x = withdraw(balanceAmount);
            printf("Cash Withdraw\n");
            balanceAmount = x;
        }
        else if (selection == 3)
        {
            balance(balanceAmount);
        }
        else if (selection == 4)
        {
            int x = bill(balanceAmount);
            printf("Bill Payed !\n");
            balanceAmount = x;
        }
        else if (selection == 5)
        {
            return 0;
        }
        else
            printf("Invalid selection");

        int a;

        do
        {

            printf("\n");
            printf("Do you want to continue? \n1. Continue\n2. Exit ");
            scanf("%d", &a);
            if (a != 1 && a != 2)
            {
                system("clear");
                printf("Invalid Input\n");
            }
            if (a == 2)
                return 0;

        } while (a != 1 && a != 2);

    } while (1);
}

int deposit(int balance)
{
    int amount;

    printf("Enter Money = ");
    scanf("%d", &amount);
    printf("Cash Deposited\n");

    return balance + amount;
}

int withdraw(int balance)
{
    int amount;

    printf("Enter Money = ");
    scanf("%d", &amount);

    if (amount <= balance)
        return balance - amount;
    else
        printf("Insuficent Amount\n");
}

int balance(int balance)
{
    printf("%d\n", balance);
}

int bill(int balance)
{
    int amount;

    printf("Bill Amount = ");
    scanf("%d", &amount);

    if (balance >= amount)
        return balance - amount;
    else
        printf("Insuficent Amount\n");
}
