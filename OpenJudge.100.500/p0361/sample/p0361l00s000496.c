#include<stdio.h>
int main ()
{
    int S,s,m,h,z;

    scanf("%d",&S);
    h=S/3600;
    z=S%3600;
    m=z/60;
    s=z%60;

    printf("%d:%d:%d\n",h,m,s);

}

