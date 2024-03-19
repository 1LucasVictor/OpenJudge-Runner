#include<stdio.h>
int main()
{
    int b,x,t,f,r;
    double s;
    scanf("%d %d %d",&x,&b,&t);
    s=(t+.5)/x;
    f=(int)s;
    r=f*b;
    printf("%d",r);
}
