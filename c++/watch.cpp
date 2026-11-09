#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    system("cls");

    cout<<"\033[?25l";

    for (int Hour = 0; Hour <= 23; Hour++)
    {
        for (int Minute = 0; Minute <= 59; Minute++)
        {
            for (int Second = 0; Second <= 59; Second++)
            {
                cout<<"\r"<<Hour<<" : "<<Minute<<" : "<<Second;

                fflush(stdout);
                sleep(1);
            }
        }
    }
    cout<<"\033[?25h";

    return 0;
}