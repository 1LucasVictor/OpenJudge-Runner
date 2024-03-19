#include<stdio.h>

int main()
{
    int a,h,n,i;
    scanf("%d %d",&h,&a);
    for(i=0;h>0;i++){
        h = h - a;
    }
    printf("%d\n",i);

    return 0;
}