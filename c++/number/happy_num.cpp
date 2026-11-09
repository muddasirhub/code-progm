#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int digit;

    cout << "Enter Digit = ";
    cin >> digit;

    int temp;
    int mult = 0;
    int comparer = digit;

    do
    {
        int sum = 0;
        int digit_ = digit;

        while (digit_ != 0)
        {
            temp = digit_ % 10;
            digit_ = digit_ / 10;

            mult = temp * temp;
            sum = sum + mult;
        }

        digit = sum;

    } while (digit != comparer && digit != 1);

    if (digit == 1)
        cout << "Happy Number !" << endl;
    else
        cout << "Non Happy Number !" << endl;

    return 0;
}