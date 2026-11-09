#include <iostream>
using namespace std;

int add_two_num(int a, int b);
float add_two_num(float a, float b);
double add_two_num(double a, double b);
long add_two_num(long a, long b);

int main()
{
    system("cls");

    cout << "Int = " << add_two_num(2, 3) << endl;
    cout << "Float = " << add_two_num(3.45, 6.26) << endl;
    cout << "Double = " << add_two_num(100000, 6702229) << endl;
    cout << "Long = " << add_two_num(10530, 92103) << endl;

    return 0;
}

int add_two_num(int a, int b)
{
    return a + b;
}

float add_two_num(float a, float b)
{
    return a + b;
}

double add_two_num(double a, double b)
{
    return a + b;
}

long add_two_num(long a, long b)
{
    return a + b;
}