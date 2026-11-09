#include <iostream>
using namespace std;

void Test()
{
    cout << "Hello World !" << endl;
}

int main()
{
    system("cls");

    // Null Pointer            1
    // int *ptr = NULL;

    // Void Pointer            1
    // int x=10;
    // int *ptr = &x;

    // Wild Pointer            1
    // int *ptr;

    // Dangling Pointer        0
    // int *ptr = malloc(sizeof(int));
    // int *ptr_old = (int *)malloc(sizeof(int));
    // int *ptr  = new int;
    // int *ptr1 = new int(10);

    // // free(ptr);
    // delete ptr;

    // Pointer To Pointer      0
    // int x = 10;
    // int *ptr = &x;
    // int **ptr_ = &ptr;

    // cout<<**ptr_;

    // Functional Pointer      0
    // void (*ptr)() = Test;
    // ptr();

    // Constant Pointer        1
    // int x = 10;
    // int y = 20;
    // int *const ptr = &x;
    // *ptr = 15;

    // Pointer To Constant     1
    // int x = 10;
    // const int *ptr = &x;
    // *ptr = 200;

    return 0;
}