#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("cls");

    char ch[4][100] = {
        {" Push  "},
        {"  Pop  "},
        {"Display"},
        {" Exit  "}};

    printf("\e[?25l");

    for (int i = 0; i < 4; i++)
    {
        printf("\033[%d;1H", i + 1);
        printf("%s", ch[i]);
    }

    int s=0;
    int index = 0;

    printf("\033[%d;1H", index + 1);
    printf("\033[30;41m%s\033[0m", ch[index]);

    while (s == 0 || s != 13)
    {
        s = _getch();

        printf("\033[%d;1H", index + 1);
        printf("\033[30;0m%s\033[0m", ch[index]);

        if (s == 224)
        {
            s = _getch();

            if (s == 80 && index != 3)
            {
                index++;
            }

            if (s == 72 && index != 0)
            {
                index--;
            }
        }
        printf("\033[%d;1H", index + 1);
        printf("\033[30;41m%s\033[0m", ch[index]);
    }

    printf("\e[?25h");
    system("cls");

    return 0;
}