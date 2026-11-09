#include <iostream>
#include <conio.h>

using namespace std;

#define SIZE 20
int temp;
int temp_;

void insert(int arr[]);
void view(int arr[]);
void search(int arr[]);
void update(int arr[]);
void sort(int arr[]);
void duplicate(int arr[]);
void move_0(int arr[]);
void reverse(int arr[]);
void reset_arr(int arr[], int temp_array[]);
void delete_(int arr[]);

int small_(int arr[]);
int second_small(int arr[]);
int large_(int arr[]);
int second_large(int arr[]);

int main(int c, char *arr_[])
{
    int choice;
    int arr[SIZE] = {0};
    int temp_array[SIZE];
    temp = c - 1;
    temp_ = temp;

    for (int i = 1; i < c; i++)
    {
        arr[i - 1] = atoi(arr_[i]);
        temp_array[i - 1] = atoi(arr_[i]);
    }

    do
    {
        system("cls");

        cout << "[1] Insert Element" << endl;
        cout << "[2] View Array" << endl;
        cout << "[3] Search Element" << endl;
        cout << "[4] Update Element" << endl;
        cout << "[5] Sort Array" << endl;
        cout << "[6] Duplicate Element" << endl;
        cout << "[7] Move 0 To End" << endl;
        cout << "[8] Reverse Array" << endl;
        cout << "[9] Reset Array" << endl;
        cout << "[10] Delete Element" << endl;
        cout << "[11] Exit" << endl;

        cout << "Enter Choice = ";
        cin >> choice;

        system("cls");

        if (choice == 1)
            insert(arr);

        else if (choice == 2)
            view(arr);

        else if (choice == 3)
            search(arr);

        else if (choice == 4)
            update(arr);

        else if (choice == 5)
            sort(arr);

        else if (choice == 6)
            duplicate(arr);

        else if (choice == 7)
            move_0(arr);

        else if (choice == 8)
            reverse(arr);

        else if (choice == 9)
            reset_arr(arr, temp_array);

        else if (choice == 10)
            delete_(arr);

        if (choice < 1 || choice > 11)
        {
            cout << "Invalid Choice !" << endl;
            cout << "Press Any Key To Try Again ! ";
            getch();

            continue;
        }

        cout << endl
             << "Press Any Key To Continue ! ";
        getch();

    } while (choice != 11);

    return 0;
}

void insert(int arr[])
{
    view(arr);

    int index;
    int element;

    cout << "Enter Index = ";
    cin >> index;
    index = index - 1;

    if (index >= 0 && index < temp)
    {
        cout << "Enter Element = ";
        cin >> element;

        for (int i = temp; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }

        arr[index] = element;
        temp++;

        cout << "Element Is Successfully Inserted !" << endl;
    }
    else
        cout << "Index Not Found !" << endl;
}

void view(int arr[])
{


    cout << "[ ";

    for (int i = 0; i < temp; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "]" << endl
         << endl;

    int small = small_(arr);
    int second_small_ = second_small(arr);
    int second_large_ = second_large(arr);
    int large = large_(arr);

    cout << "Small = " << small << endl;
    cout << "Second_small = " << second_small_ << endl;
    cout << "Second_large = " << second_large_ << endl;
    cout << "large = " << large << endl;
}

void search(int arr[])
{
    view(arr);

    int element;
    int i;
    int found = 0;

    cout << "Enter Element = ";
    cin >> element;

    for (i = 0; i < temp; i++)
    {
        if (arr[i] == element)
        {
            found = 1;
            break;
        }

        else
            found = 0;
    }

    if (found)
        cout << "Element Found At " << i + 1 << " Index" << endl;
    else
        cout << "Element Not Found !" << endl;
}

void update(int arr[])
{
    view(arr);

    int index;
    int element;

    cout << "Enter Index = ";
    cin >> index;

    index = index - 1;

    if (index >= 0 && index < temp)
    {
        cout << "Enter Element = ";
        cin >> element;

        arr[index] = element;

        cout << "Element Is Successfully Updated !" << endl;
    }

    else
        cout << "Index Not Found !" << endl;
}

void sort(int arr[])
{
    for (int i = 0; i < temp - 1; i++)
    {
        for (int j = 0; j < temp - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array Is Successfully Sorted !" << endl;
}

void duplicate(int arr[])
{
    view(arr);

    for (int i = 0; i < temp; i++)
    {
        int f = 1;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                f = 0;
                break;
            }
        }

        if (f == 0)
            continue;

        int count = 0;

        for (int k = 0; k < temp; k++)
        {
            if (arr[i] == arr[k])
                count++;
        }

        if (count > 1)
        {
            cout << arr[i] << " = " << count << endl;
        }
    }
}

void move_0(int arr[])
{
    for (int i = 0; i < temp; i++)
    {
        for (int j = 0; j < temp; j++)
        {
            if (arr[j] == 0)
            {
                int s = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = s;
            }
        }
    }

    cout << "All 0 Is Successfuly Moved to End !";
}

void reverse(int arr[])
{
    int i = temp - 1;

    for (int j = 0; j < temp / 2; j++)
    {
        int s = arr[i];
        arr[i] = arr[j];
        arr[j] = s;

        i--;
    }

    cout << "Array Is Successfully Reversed !";
}

void reset_arr(int arr[], int temp_arr[])
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = temp_arr[i];
    }

    temp = temp_;

    cout << "Array Is Successfully Resets!" << endl;
}

void delete_(int arr[])
{
    view(arr);

    int index;

    cout << "Enter Index = ";
    cin >> index;

    index--;

    if (index >= 0 && index < temp)
    {
        for (int i = index; i < temp; i++)
        {
            arr[i] = arr[i + 1];
        }

        temp--;

        cout << "Element Is Successfully Deleted !" << endl;
    }

    else
        cout << "Index Not Found ! " << endl;
}

int small_(int arr[])
{
    int small;

    small = arr[0];

    for (int i = 1; i < temp; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }

    return small;
}

int second_small(int arr[])
{
    int small = arr[0];
    int second_small = 9999;

    for (int i = 0; i < temp; i++)
    {
        if (arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] > small && arr[i] < second_small)
            second_small = arr[i];
    }

    return second_small;
}

int large_(int arr[])
{
    int large;

    large = arr[0];

    for (int i = 1; i < temp; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
        }
    }

    return large;
}

int second_large(int arr[])
{
    int large = arr[0];
    int second_large = -9999;

    for (int i = 0; i < temp; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] < large && arr[i] > second_large)
            second_large = arr[i];
    }

    return second_large;
}