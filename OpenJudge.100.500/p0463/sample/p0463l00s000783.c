#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    if(100<=n)
    {
        int j=n%100;
        if(j==0||j==1||j==6||j==8)
        {
            printf("pon");
        }
        if(j==3)
        {
            printf("bon");
        }
        if(j==2||j==4||j==5||j==7||j==9)
        {
            printf("hon");
        }
    }
    else
    {
        int j=n%10;
        if(j==0||j==1||j==6||j==8)
        {
            printf("pon");
        }
        if(j==3)
        {
            printf("bon");
        }
        if(j==2||j==4||j==5||j==7||j==9)
        {
            printf("hon");
        }
    } 
}