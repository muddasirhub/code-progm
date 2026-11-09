#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int digit;

    cout << "Enter Digit = ";
    cin >> digit;

    int factorial = 0;
    int sum = 0;
    int temp;
    int digit_ = digit;

    while (digit_ != 0)
    {
        temp = digit_ % 10;
        digit_ = digit_ / 10;

        factorial = 1;

        for (int i = 1; i <= temp; i++)
        {
            factorial = factorial * i;
        }
        sum = sum + factorial;
    }

    if (sum == digit)
        cout << "Strong Number !" << endl;
    else
        cout << "Non Strong Number !" << endl;

    return 0;
}