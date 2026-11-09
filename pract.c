#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

typedef struct students
{
    char name[20];
    int rollno;
    float per;
    char grade;

} stud;

int main()
{
    system("cls");

    stud s[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter student name : ");
        scanf("%46s", &s[i].name);
        
        printf("Enter rollno = ");
        scanf("%d", &s[i].rollno);

        printf("Enter grade = ");
        scanf(" %c", &s[i].grade);

        printf("Enter rollno = ");
        scanf("%f", &s[i].per);
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("Name = %s\n", s[i].name);

        printf("Rollno = %d\n", s[i].rollno);

        printf("Grade = %c\n", s[i].grade);

        printf("Percentage = %.2f\n", s[i].per);

        printf("===========================\n");
    }

    return 0;
}