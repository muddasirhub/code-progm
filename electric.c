#include <stdio.h>
#include <stdlib.h>

void unit(int a);

int main()
{
    system("cls");

    int u;
    printf("Enter Unit = ");
    scanf("%d", &u);

    unit(u);

    return 0;
}

void unit(int u)
{
    int t = 0;
    int rate1 = 100;
    int rate2 = 200;
    int rate3 = 300;
    int rate4 = 700;

    printf("===========================\n");
    printf("===========================\n");
    printf("Electricity Bill Calculator\n");
    printf("===========================\n");
    printf("===========================\n");
    printf("-------------------------\n");
    printf("Units Consumed = %d\n", u);

    if (u > 0 && u <= 100)
    {
        u = u * rate1;
        t = u * 0.15;
    }
    else if (u >= 101 && u <= 200)
    {
        u = 100 * rate1 + (u - 100) * rate2;
        t = u * 0.15;
    }
    else if (u >= 201 && u <= 300)
    {
        u = 100 * rate1 + 100 * rate2 + (u - 200) * rate3;
        t = u * 0.15;
    }
    else if (u >= 301 && u <= 700)
    {
        u = 100 * rate1 + 100 * rate2 + 100 * rate3 + (u - 300) * rate4;
        t = u * 0.15;
    }
    else
    {
        u = u * 700;
        t = u * 0.15;
    }

    printf("Electricity Cost = %d\n", u);
    printf("Surcharges Tax = %d\n", t);
    printf("Total Payable Bill = %d\n", u + t);
    printf("-------------------------\n");
}