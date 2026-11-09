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
         {"muddasir"}},

        {{"did"},
         {"dada"},
         {"Madam"}},

        {{"tuc"},
         {"deed"},
         {"ball"}}};

    int count = 0;

    for (int i = 0; i < RECORD; i++)
        for (int j = 0; j < ROW; j++)
            count = count + strlen(arr[i][j]);

    cout << "Count = " << count << endl;

    return 0;
}