#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=n%10;
    if(r==2 || r==4 || r==5 || r==7 || r==9)
    {
        printf("hon\n");
    }
    else if(r==0 || r==1 || r==6 || r==8)
    {
        printf("pon\n");
    }
    else
    {
        printf("bon\n");
    }
    return 0;
}
