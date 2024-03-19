#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,f,x,y,z;
    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){


        y=(a*f-d*c)/(a*e-b*d);
        x=(c-b*y)/a;

        printf("%.3lf %.3lf\n",x,y);
    }
    return 0;
}