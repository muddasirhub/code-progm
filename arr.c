#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int arr[8];

    printf("Enter Math Marks = ");
    scanf("%d", &arr[0]);

    printf("Enter Computer Marks = ");
    scanf("%d", &arr[1]);

    printf("Enter Urdu Marks = ");
    scanf("%d", &arr[2]);

    printf("Enter S.S.T Marks = ");
    scanf("%d", &arr[3]);

    printf("Enter Science Marks = ");
    scanf("%d", &arr[4]);

    printf("Enter Islamiat Marks = ");
    scanf("%d", &arr[5]);

    printf("Enter Eng.Lit Marks = ");
    scanf("%d", &arr[6]);

    printf("Enter Eng.Lang Marks = ");
    scanf("%d", &arr[7]);

    system("cls");

    int sum = 0;

    for (int a = 0; a < 8; a++)
    {
        sum = sum + arr[a];
    }

    float per=sum*100/800;

    printf("Sum = %d\n",sum);
    printf("Percentage = %.2f\n",per);

    if(per>=90&&per<=100)
    {
        printf("Your Grade is A+ !\n");
    }
    if(per>=80&&per<=89)
    {
        printf("Your Grade is A !\n");
    }
    if(per>=70&&per<=79)
    {
        printf("Your Grade is B !\n");
    }
    if(per>=60&&per<=69)
    {
        printf("Your Grade is C !\n");
    }
    if(per>=50&&per<=59)
    {
        printf("Your Grade is D !\n");
    }
    if(per<=49)
    {
        printf("Your Are Fail !\n");
    }

    return 0;
}