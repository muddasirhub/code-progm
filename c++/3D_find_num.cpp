#include <iostream>
using namespace std;

#define RECORD 4
#define ROW 3
#define COLOUM 3

int main()
{
    system("cls");

    int arr[RECORD][ROW][COLOUM] = {{{1, 2, 3},
                                     {4, 5, 6},
                                     {7, 8, 9}},

                                    {{-1, 2, 30},
                                     {4, 50, 6},
                                     {72, 8, 9}},

                                    {{1, 28, 37},
                                     {42, 5, 6},
                                     {7, 8, 9}},

                                    {{1, 1, 1},
                                     {1, 1, 1},
                                     {1, 1, 1}}
                                };

    int number = 0;

    cout << "Enter Number To Find = ";
    cin >> number;

    int found = 0;
    int temp = 1;

    for (int i = 0; i < RECORD; i++)
    {
        found = 0;
        for (int j = 0; j < ROW; j++)
        {
            for (int k = 0; k < COLOUM; k++)
            {
                if (arr[i][j][k] == number)
                {
                    for (int a = 0; a < ROW; a++)
                    {
                        for (int b = 0; b < COLOUM; b++)
                        {
                            cout << arr[i][a][b] << " ";
                        }
                        cout << endl;
                    }
                    found = 1;
                    temp = 0;
                    cout << endl;
                }

                if (found)
                    break;
            }

            if (found)
                break;
        }
    }

    if (temp)
        cout << "No Element Found !";

    return 0;
}