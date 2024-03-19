#include<stdio.h>
int main()
{
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    sum = x*2;
    sum = y-sum;
    if(sum<x)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
