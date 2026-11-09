#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    char choice;

    int a;
    int b;


    printf("+ Addition\n");
    printf("- Subtraction\n");
    printf("* Multiplication\n");
    printf("/ Division\n");
    printf("%% Reminder\n");

    printf("Enter Your Choice =");
    scanf("%c", &choice);

    switch (choice)
    {
    case '+':

        printf("Enter Two Number=");
        scanf("%d %d", &a, &b);
        printf("Addition=%d\n", a + b);
        break;

    case '-':

        printf("Enter Two Number=");
        scanf("%d %d", &a, &b);
        printf("Subtaction=%d\n", a - b);
        break;
    case '*':

        printf("Enter Two Number=");
        scanf("%d %d", &a, &);
        printf("Multiplication=%d\n", a * b);
        break;

    case '/':

        printf("Enter Two Number=");
        scanf("%d %d", &a, &b);

        printf("Division=%d\n", a / b);
        break;

    case '%':

        printf("Enter Two Number=");
        scanf("%d %d", &a, &b);

        printf("Reminder=%d\n", a % b);
        break;

    default:
        printf("Invalid Selection\n");
    }
    return 0;
}