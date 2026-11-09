#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int wallet, amount, expense;

    printf("Enter Amount In Wallet= ");
    scanf("%d", &wallet); // 150

    if (wallet != 0)
    {
        printf("Enter Amount You Need= ");
        scanf("%d", &amount); // 100

        if (wallet >= amount)
        {
            printf("Enter Expense= ");
            scanf("%d", &expense); // 50

            printf("=================================\n");
            printf("Amount In Wallet=%d\n", wallet);                             // 150
            printf("Amount You Need=%d\n", amount);                              // 100
            printf("Expense=%d\n", expense);                                     // 50
            printf("Change=%d\n", amount - expense);                             // 50
            printf("Amount In Wallet=%d\n", wallet - amount + amount - expense); // 150
        }
        else
        {
            printf("Insufficent Amount In Wallet\n");
        }
    }
    else
    {
        printf("No Money In Wallet\n");
    }

    return 0;
}