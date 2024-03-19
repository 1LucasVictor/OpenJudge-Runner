#include<stdio.h>
int main(void){
	int i;
	double a,b,c,d,e,f,x,y;
	while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
	    x=(c*e-b*f)/(a*e-b*d);
	    y=(a*f-c*d)/(a*e-d*b);
		if(x==-0)x=0;
		if(y==-0)y=0;
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}