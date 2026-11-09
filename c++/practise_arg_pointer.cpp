#include <iostream>
using namespace std;

void show()
{
    cout << "Show Function Here !"<<endl;
}

int task(int a, int b, void (*f)())
{
    f();
    return a + b;
}

int main()
{
    system("cls");

    int (*ptr)(int, int, void (*)()) = task;
    cout << ptr(10, 20, show);

    return 0;
}