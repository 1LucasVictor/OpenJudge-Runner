#include<stdio.h>
int main()
{
    int d = 0;
    int s = 0;
    int h = 0,m = 0;
    scanf("%d",&d);
    h = d / 3600;
    m = d % 3600 / 60;
    s = d % 60;
    printf("%d:%d:%d\n",h,m,s);
}

