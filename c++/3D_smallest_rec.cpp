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
                                     {4, -50, 6},
                                     {-72, 8, 9}},

                                    {{1, 28, 37},
                                     {42, 5, 6},
                                     {7, 8, 9}},

                                    {{1, 1, 1},
                                     {1, 1, 1},
                                     {1, 1, 1}}};

    int sum = 0;
    int sum_ =INT_MAX;
    int temp = 0;

    for (int i = 0; i < RECORD; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            for (int k = 0; k < COLOUM; k++)
            {
                sum = sum + arr[i][j][k];
            }
        }

        if (sum_ > sum)
        {
            sum_ = sum;
            temp = i;
        }
        sum=0;
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLOUM; j++)
        {
            cout<<arr[temp][i][j]<<" ";
        }

        cout<<endl;
    }
    return 0;
}