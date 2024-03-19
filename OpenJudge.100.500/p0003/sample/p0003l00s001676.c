#include<stdio.h>

int main(void){
	double a,b,c,d,e,f;
	double x,y;
	
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
		y=(c-f*(a/d))/(b-e*(a/d));
		x=(c-b*y)/a;
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
}