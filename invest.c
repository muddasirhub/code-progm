#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int inv;
    int f;

    printf("Enter Investment Amount = ");
    scanf("%d", &inv);

    printf("You Are A File = ");
    scanf("%d", &f);

    float amount = inv * 0.10;
    float wht;

    if (f == 1)
        wht = inv * 0.10 * 0.15;
    else
        wht = inv * 0.10 * 0.30;

        printf("Profit = %.0f\n", amount);
    printf("W.H.T Tax = %.0f\n", wht);
    printf("Balance = %.0f\n", amount - wht + inv);

    return 0;
}