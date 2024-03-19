#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i,j,a,b,c,d,e,f;
double x,y;

int main(){
	while(scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f)!=EOF){
		x=(c*e-f*b)/(a*e-d*b);
		y=(c*d-f*a)/(b*d-e*a);
		printf("%.3lf %.3lf\n",x,y);
	}
	
	return 0;
}