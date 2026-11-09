#include <iostream>
using namespace std;

#define RECORD 3
#define ROW 4
#define COLOUM 4

int main()
{
    system("cls");

    int arr[RECORD][ROW][COLOUM] = {{{1, 2, 3, 49},
                                     {4, 5, 6, 67},
                                     {7, 8, 9, 48},
                                     {30, 55, 67, 3}},

                                    {{1, 2, 3, 49},
                                     {4, 5, 6, 67},
                                     {7, 8, 9, 48},
                                     {30, 55, 67, 3}},

                                    {{1, 2, 3, 49},
                                     {4, 5, 6, 67},
                                     {7, 8, 9, 48},
                                     {30, 55, 67, 3}}};

    int sum = 0;

    for (int i = 0; i < RECORD; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            sum = 0;
            for (int k = 0; k < COLOUM; k++)
            {
                cout << arr[i][j][k] << " ";

                if (arr[i][j][k] % 2 == 0)
                    sum = sum + arr[i][j][k];
            }

            cout << " = " << sum << endl;
        }
        
        cout << endl  << endl;
    }

    return 0;
}