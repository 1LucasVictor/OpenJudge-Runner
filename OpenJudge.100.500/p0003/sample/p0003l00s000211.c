#include <stdio.h>

int main(void)
{
	int a, b , c, d ,e ,f;
	while( scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) != EOF){
		double y = (c*d - f* a)/(b*d - e*a);
		double x = (c*e - f*b) /(a*e - d*b);
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}