#include <iostream>
using namespace std;

#define SIZE 10

typedef struct Queue
{
    int rear = -1;
    int front = -1;
    int queue[SIZE];

    void enque(int value)
    {
        if (rear == SIZE - 1)
        {
            cout << "Queue is Full !" << endl;
        }
        else
        {
            if (front == -1)
                front = 0;

            rear++;
            queue[rear] = value;
        }
    }

    void deque()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty !" << endl;
        }
        else
        {
            front++; // 10

            if (front > rear)
                front = rear = -1;
        }
    }

    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << queue[i] << endl;
            }
        }
        cout << endl;
    }

} Queue;

int main()
{
    system("cls");

    Queue Q;

    Q.enque(10);
    Q.enque(20);
    Q.enque(30);
    Q.enque(40);
    Q.enque(50);
    Q.enque(60);
    Q.enque(70);
    Q.enque(80);
    Q.enque(90);
    Q.enque(100);

    Q.display();

    Q.deque();
    Q.deque();
    Q.deque();
    Q.deque();
    Q.deque();
    Q.deque();
    Q.deque();
    Q.deque();
    Q.deque();
    Q.deque();

    Q.display();

    return 0;
}