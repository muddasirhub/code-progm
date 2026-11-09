#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int digit;

    cout << "Enter Digit = ";
    cin >> digit;

    int sum = 0;
    int temp;
    int digit_ = digit;

    while (digit_ != 0)
    {
        temp = digit_ % 10;
        digit_ = digit_ / 10;

        sum = sum + temp;
    }

    digit_ = sum;
    int reverse = 0;

    while (digit_ != 0)
    {
        temp = digit_ % 10;
        digit_ = digit_ / 10;

        reverse=reverse*10+temp;
    }

    if (sum * reverse==digit)
        cout << "Magic Number !" << endl;
    else
        cout << "Non Magic Number !" << endl;

    return 0;
}