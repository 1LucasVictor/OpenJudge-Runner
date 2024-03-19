#include<stdio.h>

int main(void){
	double a,b,c,d,e,f;
	double x,y;

	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
		x=(a*c*e-c*d*b-a*b*f+b*d*c)/(a*a*e-a*b*d);
		y=(a*f-d*c)/(a*e-d*b);
		printf("%.3lf %.3lf\n",x+0.0,y+0.0);
	}
	return 0;
}