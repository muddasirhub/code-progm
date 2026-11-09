#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int getWin(char arr[][3], char ch);

int main()
{
    system("cls");

    char arr[][3] = {{"   "}, {"   "}, {"   "}};

    char x[50], o[50];
    printf("Enter X Player Name = ");
    scanf("%49s", x);

    printf("Enter O Player Name = ");
    scanf("%49s", o);

    system("cls");
    printf("\033[?25l");

    printf("X: %s\tO: %s", x, o);

    int i, j, c;

    for (i = 0; i < 3; i++)
    {
        c = 0;
        for (j = 0; j < 3; j++)
        {
            printf("\033[%d;%dH", i + 3 + i, j + 1 + c);
            printf("\033[33;42m %c \033[0m", arr[i][j]);
            c += 4;
        }
    }

    int row = 3;
    int coloum = 1;
    int ch;
    int move = 0;
    char PLAYER;

    i = 0;
    j = 0;

    printf("\033[%d;%dH", row, coloum);
    printf("\033[30;41m %c \033[0m", arr[i][j]);

    do
    {
        ch = _getch();

        if (ch == 224)
        {
            ch = _getch();

            printf("\033[%d;%dH", row, coloum);
            printf("\033[30;42m %c \033[0m", arr[i][j]);

            if (ch == 77 || ch == 75)
            {
                if (ch == 77 && coloum < 10)
                {
                    coloum += 5;
                    j++;
                }
                else if (ch == 75 && coloum > 3)
                {
                    coloum -= 5;
                    j--;
                }
            }
            else if (ch == 80 || ch == 72)
            {
                if (ch == 80 && row != 7)
                {
                    row += 2;
                    i++;
                }
                else if (ch == 72 && row >= 5)
                {
                    row -= 2;
                    i--;
                }
            }
            printf("\033[%d;%dH", row, coloum);
            printf("\033[30;41m %c \033[0m", arr[i][j]);
        }

        if (ch > 'a' && ch < 'z')
            ch -= 32;

        if (PLAYER != ch)
        {
            if (ch == 88 || ch == 79)
            {
                if (arr[i][j] != 88 && arr[i][j] != 79)
                {
                    arr[i][j] = ch;
                    PLAYER = ch;
                    printf("\033[%d;%dH", row, coloum);
                    printf("\033[30;41m %c \033[0m", arr[i][j]);
                    move++;
                }
            }
        }

        if (getWin(arr, 'X'))
        {
            system("cls");
            printf("%s won!", x);
            break;
        }
        else if (getWin(arr, 'O'))
        {
            system("cls");
            printf("%s won!", o);
            break;
        }
        else if (move == 9)
        {
            system("cls");
            printf("DRAW !\n");
            break;
        }

    } while (ch != 27);

    if (ch == 27)
        system("cls");

    printf("\033[?25h");

    return 0;
}

int getWin(char arr[][3], char ch)
{
    for (int m = 0; m < 3; m++)
    {
        if (arr[0][m] == ch && arr[1][m] == ch && arr[2][m] == ch)
            return 1;
        else if (arr[m][0] == ch && arr[m][1] == ch && arr[m][2] == ch)
            return 1;
    }

    if (arr[0][0] == ch && arr[1][1] == ch && arr[2][2] == ch)
        return 1;
    else if (arr[0][2] == ch && arr[1][1] == ch && arr[2][0] == ch)
        return 1;

    return 0;
}