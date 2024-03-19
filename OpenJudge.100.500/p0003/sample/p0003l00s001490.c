#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, e, f;
    double x, y, z;
    while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f)!=EOF){
        x=((c)*(e)-(f)*(b))/((a)*(e)-(b)*(d));
        y=((a)*(f)-(d)*(c))/((a)*(e)-(b)*(d));
        printf("%.3lf %.3lf\n",  x, y);
    }

    return 0;
}