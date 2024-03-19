#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h,i,j;
    while (scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF)
    {
        g=(c*e)-(b*f);
        h=(a*e)-(b*d);
        i=(f*a)-(d*c);
        j=(e*a)-(b*d);
        if(g/h == -0.000)printf("0.000 %.3lf\n",i/j);
        else if(i/j == -0.000)printf("%.3lf 0.000\n",g/h);
        else printf("%.3lf %.3lf\n",(g/h),(i/j));
    }
    return 0;
}