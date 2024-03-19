#include<stdio.h>

int main(void)
{
	double a,b,c,d,e,f,x,y;
	
	while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF)
	{
	   x=(f-c*e/b)/(d-a*e/b);
	   y=(c-a*x)/b;
	   printf("%.3f %.3f\n",x,y);
	}
	return 0;
}