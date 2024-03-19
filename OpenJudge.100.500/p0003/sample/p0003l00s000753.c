#include<stdio.h>
int main(){
double a,b,c,d,e,f;
double det;
double det1;
double det2;
double x,y;
while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
    det=a*e-b*d;
	det1=c*e-b*f;
	det2=a*f-c*d;
	x=det1/det;
	y=det2/det;
	printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
	}