#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d = a-b;
    if(d<c)
        printf("%d",(c-d));
    else
        printf("%d",0);
    return 0;
}
