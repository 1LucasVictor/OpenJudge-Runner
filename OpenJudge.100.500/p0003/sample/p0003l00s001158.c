#include<stdio.h>
int main()
{
	double a,b,c,d,e,f;
	while(1)
	{
	if((scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)) ==EOF) break;
	printf("%.3f %.3f\n",(c*e-f*b)/(a*e-b*d),(c*d-f*a)/(b*d-a*e));
	}
	return 0;
}