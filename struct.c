#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char name[50];
    int rollno;
    char grade;
    float per;
}stu;

int main()
{
    system("cls");

    stu s;

    printf("Enter Name = ");
    fgets(s.name,sizeof(s.name),stdin);

    printf("Enter Roll.no = ");
    scanf("%d", &s.rollno);

    printf("Enter Grade = ");
    scanf(" %c", &s.grade);

    printf("Enter Percentage = ");
    scanf("%f", &s.per);

    printf("%s", s.name);
    printf("%d\n", s.rollno);
    printf("%c\n", s.grade);
    printf("%.2f\n", s.per);

    return 0;
}