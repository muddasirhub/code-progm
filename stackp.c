#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void push(int a);
void pop();
void display(int b);

int arr[SIZE];
int INDEX = 0;

int main()
{
    system("cls");

    push(10);
    push(50);
    push(30);
    push(70);
    push(42);
    push(30);

    display(INDEX);

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    push(40);

    display(INDEX);

    return 0;
}

void push(int a)

{

    if (INDEX < SIZE)
    {
        arr[INDEX] = a;
        INDEX++;
    }

    else
        printf("Stack Overflow\n");
}

void pop()

{

    if (INDEX > 0)
    {
        INDEX--;
        arr[INDEX] = 0;
    }

    else
        printf("Stack Underflow\n");
}

void display(int b)

{

    for (int i = INDEX - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}