#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("cls");

    char arr[4][100] = {
        {" Push  "},
        {"  Pop  "},
        {"Display"},
        {" Exit  "}};

    printf("\e[?25l");

    for (int i = 0; i < 4; i++)
    {
        printf("\033[%d;1H", i + 1);
        printf("%s", arr[i]);
    }

    char s;
    int index = 0;

    do
    {
        printf("\033[%d;1H", index + 1);
        printf("\033[30;0m%s\033[0m", arr[index]);

        if (index != 4 && s == 's')
        {
            index++;
        }
        if (index != 0 && s == 'w')
        {
            index--;
        }

        printf("\033[%d;1H", index + 1);
        printf("\033[30;41m%s\033[0m", arr[index]);

        s = _getch();

    } while (s != 'x');

    printf("\e[?25h");
    system("cls");

    return 0;
}