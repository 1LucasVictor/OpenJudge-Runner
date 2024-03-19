#include <stdio.h>

int main(){

	double a,b,c,d,e,f;

	double x,y;
	while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f) != EOF){
	fflush(stdin);
	

	y=(c*d-a*f)/(b*d-a*e);

	x=(c-b*y)/a;

	printf("%.3f %.3f\n",x,y);
	}
	return 0;
}
	