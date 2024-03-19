#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int c1,c2;
    c1=x/500;
    x=x-500*c1;
    c2=x/5;
    printf("%d",(c1*1000)+(c2*5));
    return 0;
}