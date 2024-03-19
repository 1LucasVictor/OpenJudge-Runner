#include <stdio.h>
int main(void)
{
    double a,b,c,d,e,f;
    double x,y;
    
    while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!= EOF){
    	printf("%.3lf %.3lf\n",(e*c-b*f)/(a*e-b*d),(c*d-a*f)/(b*d-a*e));
    }
    return 0;
}