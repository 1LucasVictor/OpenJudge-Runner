#include<stdio.h>

int main (void){
	
	int a,b,c,d,e,f,n;
	double x,y;
	
	while(scanf("%d",&a) != EOF){
	scanf("%d %d %d %d %d",&b,&c,&d,&e,&f);
	
	y=(c*d-f*a)/(b*d-e*a);
	x=(c*e-f*b)/(a*e-b*d);
	
	printf("%4.3f %4.3f\n",x,y);
	}
return 0;
}