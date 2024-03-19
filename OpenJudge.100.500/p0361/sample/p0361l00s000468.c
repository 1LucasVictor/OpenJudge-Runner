#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,h,m,s;
    scanf("%d",&a);
    h=a/3600;
    a=a-h*3600;
    m=a/60;
    a=a-m*60;
    s=a;
    printf("%d:%d:%d\n",h,m,s);
}
