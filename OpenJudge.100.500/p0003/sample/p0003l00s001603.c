#include <stdio.h>

int main(void)
{
	float a,b,c,d,e,f;
	float x,y;
	
	
	while((scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f))!=EOF){
		x = ((c*e-f*b)/(a*e-d*b));
		y = ((a*f-d*c)/(a*e-d*b));
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}