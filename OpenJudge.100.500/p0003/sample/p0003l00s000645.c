#include <stdio.h>
int main(void)
{
    double a,b,c,d,e,f;
    double x,y;
    while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)==6){
        x=(c*e-f*b)/(e*a-b*d);
        y=(c-a*x)/b;
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}