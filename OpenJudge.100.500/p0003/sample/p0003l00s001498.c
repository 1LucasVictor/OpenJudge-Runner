
#include<stdio.h>

int main (void){

    double a,b,c,d,e,f;

    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f) != EOF){

        double X,Y;

        Y = (c*d-f*a)/(b*d-e*a);

        X = (c*e-f*b)/(a*e-d*b);

        printf("%.3lf %.3lf\n",X+0.0004 ,Y+0.0004);
    }

    return 0;
}