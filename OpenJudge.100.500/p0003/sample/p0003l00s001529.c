#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,x,y;
    while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f) == 6){
        y= (c*d - f*a) / (b*d - a*e);
        x = ((c/a) - ((b/a)*y));
        printf("%.3lf %.3lf\n",x,y);
    }
    return 0;
}