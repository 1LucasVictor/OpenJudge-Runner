#include<stdio.h>
int main()
{
    int d,r;
    scanf("%d",&d);
    r= d%10;

    if(r==2 || r==4 || r==5 || r==7 || r==9)
        printf("hon");
    else if(r==3)
        printf("bon");
    else
        printf("pon");
    return 0;
}
