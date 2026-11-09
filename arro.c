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

    int s;
    int index = 0;

    printf("\033[%d;1H", index + 1);
    printf("\033[30;41m%s\033[0m", arr[index]);

    while (s!=13)
    {
        s = _getch();

        printf("\033[%d;1H", index + 1);
        printf("\033[30;0m%s\033[0m", arr[index]);

        if (s == 0 || s == 224)
        {
            s = _getch();
            if (index != 3 && s == 80)
            {
                index++;
            }

            if (index != 0 && s == 72)
            {
                index--;
            }
        }

        printf("\033[%d;1H", index + 1);
        printf("\033[30;41m%s\033[0m", arr[index]);
    }

    printf("\e[?25h");
    system("cls");

    return 0;
}