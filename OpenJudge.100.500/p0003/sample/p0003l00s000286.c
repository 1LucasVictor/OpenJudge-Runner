#include<stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y;
	while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		x=(c*e-b*f)/(a*e-d*b);
		y=(c-a*x)/b;
		printf("%.3lf %.3lf\n",x,y);
	}

    return 0;
}