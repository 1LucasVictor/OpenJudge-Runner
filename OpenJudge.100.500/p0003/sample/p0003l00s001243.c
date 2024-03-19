#include<stdio.h>
int main(void)
{
    double a,b,c,d,e,f;
    double x,y;
    while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)==6){
        x=(f*b-c*e)/(b*d-e*a);
        y=(c-a*x)/b;
        if((int)(x*10000)%10>=5)x=x+0.001;
        if((int)(y*10000)%10>=5)y=y+0.001;
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}