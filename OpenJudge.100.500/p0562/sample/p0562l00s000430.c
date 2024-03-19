#include<stdio.h>

int main()
{
    int a,b,c,d,e;

    scanf("%d%d",&a,&b);

    c=a-1;
    d=b-1;

    e=(c+d-1)/c;
    printf("%d\n",e);

    return 0;
}