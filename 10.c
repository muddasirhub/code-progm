#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");

    int bs;

    printf("Enter Basic Sallery=");
    scanf("%d",&bs);  

    float M_allowance   =   bs  *   0.05;

    float H_rent        =   bs  *   0.05;

    float Gross_Sallery =   M_allowance + H_rent    +   bs;

    float Tax           =   Gross_Sallery   *   0.07;

    // float Net_SALLERY=Gross_Sallery-Gross_Sallery*0.07;
    float Net_SALLERY   =   Gross_Sallery -   Tax;

    printf("M.Allowance=%.0f\n",M_allowance);
    printf("H.Rent=%.0f\n",H_rent);
    printf("Gross Sallery=%.0f\n", Gross_Sallery);
    printf("Tax=%.0f\n",Tax);
    printf("Net Sallery=%.0f\n",Net_SALLERY);

    return 0;
}