#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int pwd;

    for (int a = 1; a <= 3; a++)

    {
        printf("Enter Password =");
        scanf("%d", &pwd);

        switch (pwd)
        {
        case 123:
            printf("you are welcome!\n");
            return 0;

            break;

        default:
            printf("invalid password\n");
        }
    }

    return 0;
}