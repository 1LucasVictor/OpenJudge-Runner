#include<stdio.h>
int main()

{
    int h,a,i;
    scanf("%d %d",&h,&a);
    for(i=1;h>0;i++)
    {
        h=h-a;
    }
    printf("%d",i-1);

}
