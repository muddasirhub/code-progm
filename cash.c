#include<stdio.h>
#include<stdlib.h>

int main ()
{
    system ("cls");
    
    int a;
    const int _5000=5000;
    const int _1000=1000;
    const int _500=500;
    const int _100=100;
    const int _50=50;
    const int _20=20;
    const int _10=10;
    const int _5=5;
    const int _1=1;

    printf("Enter Amount=");
    scanf("%d",&a);

    printf ("5000=%d\n",a/_5000);
    printf ("1000=%d\n",a/_5000/_1000);
    printf ("500=%d\n",a/_5000/_1000/_500);
    printf ("100=%d\n",a/_5000/_1000/_500/_100);
    printf ("50=%d\n",a/_5000/_1000/_500/_100/_50);
    printf ("20=%d\n",a/_5000/_1000/_500/_100/_50/_20);
    printf ("10=%d\n",a/_5000/_1000/_500/_100/_50/_20/_10);
    printf ("5=%d\n",a/_5000/_1000/_500/_100/_50/_20/_10/_5);
    printf ("1=%d\n",a/_5000/_1000/_500/_100/_50/_20/_10/_5/_1);

    return 0;
}


