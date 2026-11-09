#include <iostream>
using namespace std;

#define ROW 2
#define COLOUM 3

int main()
{
    system("cls");

    int arr[ROW][COLOUM] = {{10, 20, 30}, {40, 50, 60}};

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLOUM; j++)
        {
            cout << arr[i][j] << "      ";
        }

        cout << endl
             << endl;
    }

    cout << endl
         << endl;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = i; j < COLOUM; j++)
        {
            int temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;
        }
    }

    for (int i = 0; i < COLOUM; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            cout << arr[i][j] << "      ";
        }

        cout << endl
             << endl;
    }

    return 0;
}