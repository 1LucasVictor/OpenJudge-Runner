#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,e,f;
    double x,y;
    while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){

    y = (((f)*(a)-(d)*(c))/((e)*(a)-(d)*(b)));
    x = (((c)-(b)*(y))/(a));
    printf("%0.3lf %0.3lf\n",x,y);
    }
return 0;
}