#include <iostream>
#include <string.h>

using namespace std;

#define RECORD 3
#define ROW 3
#define COLUMN 10

int main()
{
    system("cls");

    char arr[RECORD][ROW][COLUMN] = {
        {{"popo"},
         {"momo"},
         {"muddasir"}},

        {{"did"},
         {"dada"},
         {"Madam"}},

        {{"tuc"},
         {"deed"},
         {"ball"}}};

    for (int i = 0; i < RECORD; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            int vowel = 0;
            int temp = strlen(arr[i][j]) - 1;

            for (int k = 0; k < strlen(arr[i][j]); k++)
            {
                if (arr[i][j][k] >= 'a' && arr[i][j][k] <= 'z')
                    arr[i][j][k] = arr[i][j][k] - 32;

                if (arr[i][j][k] == 'A' || arr[i][j][k] == 'E' || arr[i][j][k] == 'I' || arr[i][j][k] == 'O' || arr[i][j][k] == 'U')
                    vowel++;
            }

            cout << arr[i][j] << " = " << vowel << endl;
        }
    }

    return 0;
}