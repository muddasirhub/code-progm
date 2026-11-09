#include <iostream>
using namespace std;

void straight();
void reverse();

int main()
{
    system("cls");

    // straight();
    reverse();

    return 0;
}

void straight()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int spacer = 5; spacer > i; spacer--)
        {
            cout << " ";
        }

        for (int pyramid = 1; pyramid <= i; pyramid++)
        {
            cout << "X ";
        }
        cout<<endl;
    }
}

void reverse()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int spacer = 1; spacer < i; spacer++)
        {
            cout << " ";
        }

        for (int pyramid = 5; pyramid >= i; pyramid--)
        {
            cout << "X ";
        }
        cout<<endl;
    }
}