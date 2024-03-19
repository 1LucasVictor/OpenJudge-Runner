#include<stdio.h>
int main(void){
	double a,b,c,d,e,f,i;
	double x,y;
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
		y=(c*d-a*f)/(b*d-a*e);
		x=(c*e-f*b)/(a*e-b*d);
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}
