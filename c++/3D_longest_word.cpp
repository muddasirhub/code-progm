#include <iostream>
#include <string.h>
using namespace std;

#define RECORD 3
#define ROW 3
#define COLOUM 20

int main()
{
    system("cls");

    char arr[RECORD][ROW][COLOUM] = {
        {{"popo"},
         {"momo"},
         {"muddassir"}},

        {{"did"},
         {"dada"},
         {"Madam"}},

        {{"tuc"},
         {"deed"},
         {"ball"}}};

    int long_word = 0;
    int temp = 0;
    int a = 0;
    int b = 0;

    for (int i = 0; i < RECORD; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            temp = strlen(arr[i][j]);

            if (temp > long_word)
            {
                a = i;
                b = j;

                long_word = temp;
            }

            temp = 0;
        }
    }

    temp = 0;
    cout << "Longest Word : ";

    for (int i = 0; i < RECORD; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            temp = strlen(arr[i][j]);

            if (long_word == temp)
            {
                cout << arr[i][j]<< " " <<endl;
            }
        }
    }

    return 0;
}