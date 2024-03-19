#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N>=1&&N<=999)
    {
        while( N>10)
        {
            N=N%10;
        }
        if(N==2||N==4||N==5||N==7||N==9)
        {
            printf("hon");
        }
        if(N==0||N==1||N==6||N==8)
        {
            printf("pon");
        }
        if(N==3)
        {
            printf("bon");
        }
    }

}
