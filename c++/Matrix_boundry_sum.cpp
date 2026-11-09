#include <iostream>
using namespace std;

#define ROW 3
#define COLOUM 3

int main()
{
    system("cls");

    int arr[ROW][COLOUM] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}};

    int sum = 0;
    int a = 0;
    int b = 0;
    int temp = 0;
    int temp_ = 0;

    for (int i = 0; i < 2; i++) // 2
    {
        if (a == 0) // 0
        {
            for (int j = 0; j < ROW; j++) // 3
            {
                sum = sum + arr[j][temp];
            }
            temp = COLOUM - 1; // 2
        }

        if (b == 0)
        {
            for (int j = 1; j < COLOUM - 1; j++) // 2
            {
                sum = sum + arr[temp_][j];
            }
            temp_ = ROW - 1; // 2
        }

        if (COLOUM == 1)
            a = 1;

        if (ROW == 1)
            b = 1;
    }

    cout << "SUM = " << sum;

    return 0;
}