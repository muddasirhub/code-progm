#include <iostream>
using namespace std;

#define ROW 3
#define COLOUM 3

int main()
{
    system("cls");

    int arr[ROW][COLOUM] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

    int t = COLOUM - 1;

    for (int i = 0; i <= ROW / 2; i++)
    {
        int s = 0;

        for (int j = COLOUM - 1; j >= 0; j--)
        {
            if (i == ROW / 2 && j == COLOUM / 2 - 1)
                break;

            int temp = arr[i][j];
            arr[i][j] = arr[t][s];
            arr[t][s] = temp;

            s++;
        }
        t--;
    }

    // printing code

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLOUM; j++)
        {
            cout << arr[i][j] << "    ";
        }

        cout << endl;
    }

    return 0;
}