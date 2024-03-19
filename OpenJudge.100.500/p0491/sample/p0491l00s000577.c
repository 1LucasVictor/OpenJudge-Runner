#include<stdio.h>


int main()
{
    double a,b;
    double c,d;
    scanf("%lf %lf",&a,&b);
    c=(a-b);
    if(c<0)
        c=-c;
    d=(c-b);
    if(d<0)
        d=-d;
    printf("%.0lf",d);

    return 0;
}
