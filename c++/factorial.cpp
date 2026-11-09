#include <iostream>
using namespace std;

int factorial(int f);

int main()
{
    system("cls");

    int factorial_number;

    int r = factorial(1);

    cout << r;

    return 0;
}

int factorial(int f) // 11
{
    if (f <= 1)
        return 1;

    return f * factorial(f - 1);
}