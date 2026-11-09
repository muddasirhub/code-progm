#include <iostream>
using namespace std;
#include <conio.h>
#include <string.h>

#define LIMIT 10
int record = 0;

typedef struct students
{
    private:
    // char name[20];
    string name;
    int roll_no;
    char grade;
    float percentage;

    public:

    void add_stud()
    {
        cout << "Enter Name : ";
        cin >> name;

        cout << "Enter Roll.no = ";
        cin >> roll_no;

        cout << "Enter Grade : ";
        cin >> grade;

        cout << "Enter Percentage = ";
        cin >> percentage;
    }

    void veiw_record(int i)
    {
        cout << "Name : " << name << endl;
        cout << "Roll.no = " << roll_no << endl;
        cout << "Grade : " << grade << endl;
        cout << "Percentage = " << percentage << endl;
        cout << "Serial Number = " << i + 1 << endl
             << endl;
    }

} students;

int main()
{
    system("cls");

    students s[10];

    int choice;

    do
    {
        system("cls");

        cout << "[1] Add Student" << endl;
        cout << "[2] View Record" << endl;
        cout << "[3] Search Roll.no" << endl;
        cout << "[4] Delete Record" << endl;
        cout << "[5] Edit Record" << endl;
        cout << "[6] Exit" << endl;

        cout << "Enter Choice = ";
        cin >> choice;

        if (record <= LIMIT)
        {
            if (choice == 1)
            {
                system("cls");
                s[record].add_stud();
            
                record++;
            }
            else if (choice == 2)
            {
                system("cls");
                for (short i = 0; i < record; i++)
                {
                    s[i].veiw_record(i);

                    if (record >= 2)
                        cout << "-------------------------" << endl
                             << endl;
                }
                if (record == 0)
                {
                    cout << "No Record Available !" << endl;
                }
                cout << "Press Any Key To Continue...! ";
                getch();
            }

            else if (choice == 3)
            {
                system("cls");

                int serialno;

                cout << "Enter Serial.No = ";
                cin >> serialno;

                serialno--;

                if (serialno >= 0 && serialno <= record)
                    // s[serialno].search_rollno();
                    s[serialno].veiw_record(serialno);
                else
                    cout << "No Record Available !" << endl;

                cout << "Press Any Key To Continue...! ";
                getch();
            }

            else if (choice == 4)
            {
                system("cls");

                int serialno;

                cout << "Enter Serial.No = ";
                cin >> serialno;

                serialno--;

                if (record > 0)
                {
                    for (int i = serialno; i < record; i++)
                    {
                        s[i] = s[i + 1];
                    }
                    record--;
                }

                if (record == 0)
                    cout << "No Record Available !" << endl;

                if (record + 1 > 0)
                    cout << "Record Is Successfully Deleted !" << endl;

                cout << "Press Any Key To Continue...! ";
                getch();
            }

            else if (choice == 5)
            {
                system("cls");

                int serialno;

                cout << "Enter Serial.No = ";
                cin >> serialno;

                serialno--;

                // if (serialno < 0 || serialno > record)
                //     cout << "No Record Found !" << endl;

                if (serialno > 0 && serialno <= record)
                {
                    // s[serialno].edit_record();
                    s[serialno].add_stud();

                    cout << "Record Is Successfully Edited !" << endl;
                }
                else
                {
                    cout << "No Record Found !" << endl;
                }

                cout << "Press Any Key To Continue...! ";
                getch();
            }
        }

        else
        {
            system("cls");
            cout << "Exceed Limit !" << endl;

            cout << "Press Any Key To Continue...! ";
            getch();

            system("cls");
        }

    } while (choice != 6);

    return 0;
}