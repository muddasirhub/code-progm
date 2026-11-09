#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int pass;
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter Password = ");
        scanf("%d", &pass);

        system("cls");

        if (pass == 5268)
        {
            printf("Your welcome!");
            break;
        }
        else
        {
            if (i != 3)
            {
                printf("Wrong password!\n");
            }
            else
            {
                system("cls");
                printf("Your card is Blocked!\n");
            }
        }
    }

    return 0;
}