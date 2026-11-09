#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct students
{
    char name[50];
    int rollNo;
    char grade;

} students;
int main()
{

    system("cls");

    students s = {
        .rollNo = 10,
        .name = "ali",
        .grade = 'A'};

    students *sptr = &s;

    // strcpy(sptr->name, "sdfd");
    // sptr->rollNo = 100;
    // sptr->grade = 'D';

    printf("%s\n", sptr->name); // arrow opr ->
    printf("%d\n", sptr->rollNo);
    printf("%c\n", sptr->grade);

    // printf("%s\n", (*sptr).name);
    // printf("%d\n", (*sptr).rollNo);
    // printf("%c\n", (*sptr).grade);

    return 0;
}