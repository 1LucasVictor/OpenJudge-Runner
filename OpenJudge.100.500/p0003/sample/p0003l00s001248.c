#include<stdio.h>
int main(void){
	int i;
	double a,b,c,d,e,f,x,y;
	while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
		printf("%.3f %.3f\n",(c*e-b*f)/(a*e-b*d),(a*f-c*d)/(a*e-d*b));
	}
	return 0;
}