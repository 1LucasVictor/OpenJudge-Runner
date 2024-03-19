#include<stdio.h>
int main()
{

    double x,y,a,b,c,d,e,f;
    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
    x=(c*e-b*f)/(a*e-b*d);
    y=(f*a-c*d)/(a*e-b*d);
    printf("%.3f %.3f\n",x,y);}
    return 0;
}