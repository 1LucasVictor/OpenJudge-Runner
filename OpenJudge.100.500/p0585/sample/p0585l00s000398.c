#include<stdio.h>
int main()
{
    double a,b,t,i,s=0;
    scanf("%lf %lf %lf",&a,&b,&t);
    t+=0.5;
    for(i=a;i<=t;i+=a)
        s+=b;
    printf("%.0lf\n",s);
    return 0;
}
