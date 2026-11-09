#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int choice;
    int pc;
    int sc;
    int lc;
    int dc;



    int prs=120;
    int srs=60;
    int lrs=50;
    int drs=100;


    printf("1.Pepsi Can RS 120/=\n");
    printf("2.Slice Juice RS 60/=\n");
    printf("3.Lays RS 50/=\n");
    printf("4.Dairy Milk RS 100/=\n");

    printf("Enter Choice=");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        printf("You choosed Pepsi Can\n");
    printf("Enter Money=");
    scanf("%d", &pc);

    if(pc>=prs)
    {

    printf("Pepsi Can Dispensed\n");
    printf("%d/= Change\n",pc-prs);

    }
    else
    {
        printf("Enter Atleast %d Amount\n",prs);
    }


    break;

    case 2:
        printf("You choosed Slice Juice\n");
    printf("Enter Money=");
    scanf("%d", &sc);
    if(sc>=srs)
    {

    printf("Slice Juice Dispensed\n");
    printf("%d/= Change\n",sc-srs);

    }
    else
    {
        printf("Enter Atleast %d Amount\n",srs);
    }
    break;

    case 3:
        printf("You choosed Lays\n");
    printf("Enter Money=");
    scanf("%d", &lc);
     if(lc>=lrs)
    {

    printf("Lays Dispensed\n");
    printf("%d/= Change\n",lc-lrs);

    }
    else
    {
        printf("Enter Atleast %d Amount\n",lrs);
    }
    break;

    case 4:
        printf("You choosed Dairy Milk\n");
    printf("Enter Money=");
    scanf("%d", &dc);
     if(dc>=drs)
    {

    printf("Lays Dispensed\n");
    printf("%d/= Change\n",dc-drs);

    }
    else
    {
        printf("Enter Atleast %d Amount\n",drs);
    }
    break;
    }

    return 0;
}