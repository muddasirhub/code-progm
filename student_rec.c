#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct students
{
    char name[20];
    int rollno;
    char grade;
    float per;

} stud;

void add_stu(int i, stud s[]);
void dis(int i, stud s[]);
void search_rec(int i, stud s[]);
void edit_rec(int i, stud s[]);
void del_rec(int i, stud s[]);

int main()
{
    system("cls");

    stud s[10];

    int i = 0;
    int choice;
    int roll;

    do
    {
        system("cls");
        printf("[1] Add student\n");
        printf("[2] Display\n");
        printf("[3] Search record\n");
        printf("[4] Edit Record\n");
        printf("[5] Delete record\n");
        printf("[6] Exit\n");

        printf("Enter choice = ");
        scanf("%d", &choice);

        system("cls");

        switch (choice)
        {
        case 1:

            if (i != 10)
            {
                add_stu(i, s);
                i++;
            }

            else
            {
                printf("Exceed limit");
                printf("Press enter key to continue.........");
                getchar();
            }

            break;

        case 2:

            dis(i, s);

            break;

        case 3:

            search_rec(i, s);

            break;

        case 4:

            edit_rec(i, s);

            break;

        case 5:
            del_rec(i, s);
            i--;
        }

    } while (choice != 6);

    return 0;
}

void add_stu(int i, struct students s[])
{
    getchar();

    printf("Enter student name : ");
    fgets(s[i].name, sizeof(s[i].name), stdin);

    printf("Enter rollno = ");
    scanf("%d", &s[i].rollno);

    printf("Enter grade = ");
    scanf(" %c", &s[i].grade);

    printf("Enter percentage = ");
    scanf("%f", &s[i].per);

    system("cls");
}

void dis(int i, stud s[])
{
    getchar();

    for (int a = 0; a < i; a++)
    {
        printf("%s", s[a].name);
        printf("%d\n", s[a].rollno);
        printf("%c\n", s[a].grade);
        printf("%.2f\n", s[a].per);

        printf("=============================\n");
    }
    printf("Press enter key to continue.........");
    getchar();
}

void search_rec(int i, stud s[])
{
    int roll;

    getchar();
    int H = 0;

    printf("Enter rollno = ");
    scanf("%d", &roll);

    getchar();

    system("cls");

    for (int a = 0; a < i; a++)
    {
        if (roll == s[a].rollno)
        {
            printf("%s", s[a].name);
            printf("%d\n", s[a].rollno);
            printf("%c\n", s[a].grade);
            printf("%.2f\n", s[a].per);
            H = 1;

            printf("Press enter key to continue.........");
            getchar();

            break;
        }
    }
    if (H == 0)
    {
        printf("No Record Found\n");
    }
}

void edit_rec(int i, stud s[])
{
    int roll;
    getchar();

    printf("Enter rollno = ");
    scanf("%d", &roll);

    getchar();

    system("cls");

    for (int a = 0; a < i; a++)
    {
        if (roll == s[a].rollno)
        {
            printf("Enter student name : ");
            fgets(s[a].name, sizeof(s[a].name), stdin);

            printf("Enter rollno = ");
            scanf("%d", &s[a].rollno);

            printf("Enter grade = ");
            scanf(" %c", &s[a].grade);

            printf("Enter percentage = ");
            scanf("%f", &s[a].per);
            break;
        }
    }
}

void del_rec(int i, stud s[])
{
    int roll;
    int c = 0;

    printf("Enter rollno = ");
    scanf("%d", &roll); // 1

    for (int w = 0; w < i; w++)
    {
        if (roll == s[w].rollno)
        {
            for (int h = 0; h < i; h++)
            {
                s[c + h] = s[c + h + 1];
            }
            break;
        }
        c++;
    }
}