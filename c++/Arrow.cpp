#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");

    char arr[4][9] = {
        {"CREATIVE"},
        {"SURVIVAL"},
        {"INFINITE"},
        {"  OLD   "}};

    for (int i = 0; i < 4; i++)
    {
        cout << "\033[" << i + 1 << ";1H";
        cout << arr[i];
    }

    cout << "\033[?25l";

    cout << "\033[1;1H";
    cout << "\033[37;41m" << arr[0] << "\033[0m";

    int ch;
    int ROW = 0;

    while (ch != 27)
    {
        ch = getch();

        cout << "\033[" << ROW + 1 << ";1H";
        cout << "\033[37;0m" << arr[ROW] << "\033[0m";

        if (ch == 224 || ch == 0)
        {
            ch = getch();

            // system("cls");
            // cout <<ch;
            // getchar();

            if (ch == 80 && ROW != 3)
                ROW++;

            else if (ch == 72 && ROW != 2)
                ROW--;
        }

        cout << "\033[" << ROW + 1 << ";1H";
        cout << "\033[37;41m" << arr[ROW] << "\033[0m";
    }

    cout << "\033[?25h";
    system("cls");

    return 0;
}