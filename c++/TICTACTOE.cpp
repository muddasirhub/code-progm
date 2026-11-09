#include <iostream>
#include <conio.h>

using namespace std;

int getWin(char arr[][3], char ch);

int main()
{
    system("cls");

    char arr[][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    char x[50], o[50];

    cout << "Enter X Player Name = ";
    cin >> x;

    cout << "Enter O Player Name = ";
    cin >> o;

    system("cls");
    cout << "\033[?25l";

    cout << "X: " << x << "\tO: " << o;

    int i, j, c;

    for (i = 0; i < 3; i++)
    {
        c = 0;
        for (j = 0; j < 3; j++)
        {
            cout << "\033[" << i + 3 + i << ";" << j + 1 + c << "H";
            cout << "\033[33;42m " << arr[i][j] << " \033[0m";
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

    cout << "\033[" << row << ";" << coloum << "H";
    cout << "\033[30;41m " << arr[i][j] << " \033[0m";

    do
    {
        ch = _getch();

        if (ch == 224)
        {
            ch = _getch();

            cout << "\033[" << row << ";" << coloum << "H";
            cout << "\033[30;42m " << arr[i][j] << " \033[0m";

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

            cout << "\033[" << row << ";" << coloum << "H";
            cout << "\033[30;41m " << arr[i][j] << " \033[0m";
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
                    cout << "\033[" << row << ";" << coloum << "H";
                    cout << "\033[30;41m " << arr[i][j] << " \033[0m";
                    move++;
                }
            }
        }

        if (getWin(arr, 'X'))
        {
            system("cls");
            cout << x << " won!";
            break;
        }
        else if (getWin(arr, 'O'))
        {
            system("cls");
            cout << o << " won!";
            break;
        }
        else if (move == 9)
        {
            system("cls");
            cout << "DRAW !" << endl;
            break;
        }

    } while (ch != 27);

    if (ch == 27)
        system("cls");

    cout << "\033[?25h";

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