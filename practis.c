#include <stdio.h>
#include <stdlib.h>
#define PIN 5268

int main()
{
    system("cls");

    int pass;

    for (int i = 1; i <= 3; i++)
    {
        printf("Enter Password = ");
        scanf("%d", &pass);

        if (pass == PIN)
        {
            system("cls");
            printf("Your Welcome !\n");
            break;
        }

        if (pass != PIN)
        {
            if (i != 3)
            {
                system("cls");
                printf("Invalid Password !\n");
            }
            else
            {
                system("cls");
                printf("Your Card Is Blocked !\n");
                break;
            }
        }
    }

    return 0;
}