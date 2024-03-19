#include <stdio.h>

int main()
{
     int x;
    scanf("%d",&x);
        x=x%10;
        if(x==3)
        {
            printf("bon");

        }
        else if(x==2 || x==4 || x==5 || x==7 || x==9)
        {
            printf("hon");

        }
        else
        {
            printf("pon");

        }
    return 0;
}
