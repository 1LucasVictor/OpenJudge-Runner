#include<stdio.h>
int main(void){
	double a,b,c,d,e,f;
	while(scanf("%lf",&a)!=EOF){
		scanf("%lf %lf %lf %lf %lf",&b,&c,&d,&e,&f);
		printf("%.3f %.3f\n",(c*e-b*f)/(a*e-b*d),(c*d-a*f)/(b*d-a*e));
	}
	return 0;
}