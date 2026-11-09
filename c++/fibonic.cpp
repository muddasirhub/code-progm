#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int number;

    cout << "Enter Count To Print Fibonic Series = ";
    cin >> number;

    size_t next = 1;
    size_t temp = 0;
    size_t old = 0;

    for (size_t i = 1; i <= number; i++)
    {
        cout << next << endl;

        temp = next;
        next = old + next;
        old = temp;
    }

    return 0;
}