#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int digit;

    cout << "Enter Digit = ";
    cin >> digit;

    int sum = 0;

    for (int i = 1; i < digit; i++)
    {
        for (int j = 1; j <= digit; j++)
        {
            if (i * j == digit)
            {
                sum = sum + i;
                break;
            }
        }
    }

    if (sum == digit)
        cout << "Perfect Number !" << endl;
    else
        cout << "Non Perfect Number !" << endl;

    return 0;
}