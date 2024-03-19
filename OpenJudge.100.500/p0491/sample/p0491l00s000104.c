#include<stdio.h>

int main(void)
{
    int x,y;
    int a=0;
    int b=0;
    int ans=0;

    scanf("%d %d",&x,&y);
    // printf("%d %d",x,y);

    if (x-y<0)
        a=(x-y)*-1;
    else
        a=x-y;

    if (a-y<0)
        b=(a-y)*-1;
    else
        b=a-y;

    if (a<=b)
        ans=a;
    else
        ans=b;
    
    if (b==x-y-y && b>0)
        printf("0\n");
    else
        printf("%d\n",ans);
    
    return 0;



}