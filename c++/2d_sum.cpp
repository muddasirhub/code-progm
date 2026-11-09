#include <iostream>
using namespace std;

#define ROW 2
#define COLOUM 3

int main()
{
    system("cls");

    int arr[ROW][COLOUM] = {{-1, 1, -0}, {1, 10, 30}};

    int i;
    int sum = 0;
    int sum_ = 0;
    int temp = 0;

    for (i = 0; i < ROW; i++)
    {
        sum = 0;

        for (int j = 0; j < COLOUM; j++)
        {
            sum = sum + arr[i][j];
        }

        if (sum_ < sum)
        {
            sum_ = sum;
            temp = i;
        }
    }

    for (int j = 0; j < COLOUM; j++)
    {
        cout << arr[temp][j] << "      ";
    }

    return 0;
}