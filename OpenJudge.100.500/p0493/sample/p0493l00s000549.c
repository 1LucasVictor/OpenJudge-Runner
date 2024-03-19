#include<stdio.h>
int main()
{
    int a,c,d,e,s;
    scanf("%d",&a);
    c=a/500;
    d=a%500;
    e=d/5;
    s=c*1000+e*5;
    printf("%d",s);
    return 0;
}
