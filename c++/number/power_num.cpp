#include <iostream>
using namespace std;

void power_num(int, int);
int recursion(int, int);

int main()
{
    system("cls");

    int number;

    cout << "Enter Number = ";
    cin >> number;

    int power;

    cout << "Enter Power = ";
    cin >> power;

    // power_num(number,power);

    int r = recursion(number, power);//2 3

    cout << r;

    return 0;
}

void power_num(int number, int power)
{
    int mult = 1;

    for (int i = 1; i <= power; i++)
    {
        mult = mult * number;
    }

    cout << endl
         << mult;
}

int recursion(int number, int power)
{
    if (power < 1)
        return 1;

    else
        return number * recursion(number, power - 1); // 2    2
}