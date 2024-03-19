#include<stdio.h>
#include<stdlib.h>
#include<string.h>

double i,j,a,b,c,d,e,f;
double x,y;

int main(){
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
		x=(c*e-f*b)/(a*e-d*b);
		y=(c-a*x)/b;
		printf("%.3lf %.3lf\n",x,y);
	}
	
	return 0;
}