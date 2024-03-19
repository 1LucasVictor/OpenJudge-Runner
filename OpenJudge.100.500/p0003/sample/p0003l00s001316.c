#include <stdio.h>

int main(void)
{
	double a,b,c,d,e,f;
	double ansX,ansY;
	
	while(1)
	{
		
		if(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)==EOF) break;
		
		ansY = (c-(a*f/d)) / (((-1)*e*a + b*d)/d);
		ansX = (c-(b*ansY)) / a;
		
		printf("%.3lf %.3lf\n",ansX,ansY);
		
	}
	
	return 0;
}
