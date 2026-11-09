#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int choice;
    int x, y;

    printf("Enter Two Number=");
    scanf("%d %d", &x, &y);

    printf("What Do You Want\n");

    printf("XXXXXXXXXXXXXXXXX\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Reminder\n");
    printf("6. Exit\n");

    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Additon is %d\n", x + y);
    }

    if (choice == 2)
    {
        printf("Subtraction is %d\n", x - y);
    }

    if (choice == 3)
    {
        printf("Multiplication is %d\n", x * y);
    }

    if (choice == 4)
    {
        printf("Division is %d\n", x / y);
    }

    if (choice == 5)
    {
        printf("Reminder is %d\n", x % y);
    }

    if (choice == 6)
    {
        return 0;
    }
    return 0;
}