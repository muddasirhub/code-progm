#include <iostream>
using namespace std;

typedef struct student_info
{
    string Name;
    int Class;
    int Rollno;
    float Percentage;

    void input()
    {
        cout << "Enter Student Name : ";
        getline(std::cin, Name);

        cout << "Enter Student Class = ";
        cin >> Class;

        cout << "Enter Student Rollno = ";
        cin >> Rollno;

        cout << "Enter Student Percentage = ";
        cin >> Percentage;

        student_information();
    }

    void student_information()
    {
        system("cls");

        cout << "==============================" << endl;
        cout << "X           RECORD           X" << endl;
        cout << "==============================" << endl;
        cout << "------------------------------" << endl;

        cout << "Student Name : " << Name << endl;
        cout << "Student Class = " << Class << endl;
        cout << "Student Rollno = " << Rollno << endl;
        cout << "Student Percentage = " << Percentage << endl;

        string Grade;

        if (Percentage >= 90 && Percentage <= 100)
        {
            Grade = "A+";
        }
        else if (Percentage >= 80 && Percentage <= 89)
        {
            Grade = 'A';
        }
        else if (Percentage >= 70 && Percentage <= 79)
        {
            Grade = "B+";
        }
        else if (Percentage >= 60 && Percentage <= 69)
        {
            Grade = 'B';
        }
        else if (Percentage >= 50 && Percentage <= 59)
        {
            Grade = 'C';
        }
        else if (Percentage >= 0 && Percentage <= 50)
        {
            Grade = 'F';
        }

        cout << "Student Grade : " << Grade << endl;

        cout << "------------------------------" << endl;
    }
} student_info;

int main()
{
    system("cls");

    student_info s;

    s.input();
    // s.student_information();

    return 0;
}