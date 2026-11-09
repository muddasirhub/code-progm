#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int qeue[SIZE];

int enque(int a);
int deque();
void display();

int rear = 0;
int front = 0;

int main()
{
    system("cls");

    enque(1);
    enque(2);
    // enque(3);
    // enque(4);
    // enque(5);
    // enque(6);
    // enque(7);
    // enque(8);

    display();

    deque();
    deque();
    deque();
    // deque();
    // deque();
    // deque();
    // deque();

    enque(9);
    enque(10);

    display();

    return 0;
}

int enque(int a)
{
    if (rear < SIZE)
    {   
        qeue[rear] = a;  
        rear++;    
    }
    else
        printf("Queue is full\n");
}

int deque()
{
    if (front < SIZE)
    {
        qeue[front] = 0;
        rear--;
        front++;
    }
    else
        printf("Queue is empty\n");
}

void display()
{
    for (int i = 0; i < rear; i++)
    {
        printf("%d ", qeue[i]);
    }
}