#include <iostream>
using namespace std;

#define SIZE 10

void push(int a);
void pop();
void display();

int arr[SIZE];
int Index = 0;

int main()
{
    system("cls");

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);

    display();

    pop();
    pop();
    pop();
    pop();
    pop();

    display();

    return 0;
}

void push(int a)
{
    if (Index < SIZE)
    {
        arr[Index] = a;
        Index++;
    }

    else
    {
        cout << "Stack Overflow !"<<endl;
    }
}

void pop()
{
    if (Index > 0)
    {
        Index--;
        arr[Index] = 0;
    }

    else
    {
        cout << "Stack UnderFlow !"<<endl;
    }
}

void display()
{
    system("cls");

    for (int i = 0; i < Index; i++)
    {
        cout << arr[i] << endl;
    }

    getchar();
}