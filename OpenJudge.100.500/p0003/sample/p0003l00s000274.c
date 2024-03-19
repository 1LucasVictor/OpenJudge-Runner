#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    double x,y;
    while(scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f)!=EOF)
    {
        x=1.0*(c*e-b*f)/(a*e-b*d);
        y=1.0*(a*f-c*d)/(a*e-b*d);
        printf("%.3lf %.3lf\n",x,y);
    }
    return 0;
}

