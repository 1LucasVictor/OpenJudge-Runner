#include<stdio.h>

int main()
{
	int a,b,p,c,d,q,i;
	while(scanf("%d %d %d %d %d %d",&a,&b,&p,&c,&d,&q)!=EOF){
		double x=(p*d-b*q)/(a*d-b*c);
		double y=(a*q-p*c)/(a*d-b*c);
		printf("%.3lf %.3lf\n",x,y);
	}	
	return 0;
}