#include<stdio.h>

int main()
{
    int s,h,m,sec;
    scanf("%d",&s);
    h = s/3600;
    m = (s%3600)/60;
    sec = (s%3600)%60;
    printf("%d:%d:%d\n",h,m,sec);
    return 0;
}