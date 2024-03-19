#include <stdio.h>

int main()
{
    int h,a,counte=0;
    scanf("%d %d",&h,&a);
    while(h>0)
    {
        counte++;
        h-=a;
    }
    printf("%d",counte);
    return 0;
}