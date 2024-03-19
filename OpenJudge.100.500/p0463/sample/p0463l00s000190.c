#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r=n%10;
    if(r==3){printf("bon");}
    else if(r==0||r==1||r==6||r==8)
    {printf("pon");}
    else printf("hon");
    return 0;
}