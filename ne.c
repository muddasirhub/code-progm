#include <stdio.h>
#include <stdlib.h>

void menu(int c);

int main()
{
    int choice;

    system("clear");

    printf("1.A-Z Program\n");
    printf("2.Vowels Program\n");
    printf("3.Consonant Program\n");
    printf("4.Exit\n");

    printf("Enter Choice = ");
    scanf("%d", &choice);

    if (choice < 4)
        menu(choice);

    return 0;
}

void menu(int choice)
{
    char a = 'A';

    while (a <= 'Z')
    {
        if (choice == 1)
        {
            printf("%c\n", a);
        }
        if (choice == 2)
        {
            if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
                printf("%c\n", a);
        }
        if (choice == 3)
        {
            if (a != 'A' && a != 'E' && a != 'I' && a != 'O' && a != 'U')
                printf("%c\n", a);
        }
        a++;
    }
}