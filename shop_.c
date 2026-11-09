#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");
    int amount;
    int person;
    int expense;

    printf("Enter Amount=");
    scanf("%d",&amount);

    printf("No. of person to visit shop:");
    scanf("%d",&person);

    printf("Enter Expense=");
    scanf("%d",&expense);

    printf("xxxxxxxxxxxxxxxxxxxxxxx\n");

    printf("Total amount=%d\n",expense);
    printf("Spend=%d\n",amount-expense);
    printf("Balance=%d\n",expense/person);
    return 0;
}