#include <stdio.h>

int main(void)
{	
	int a,b,c,d,e,f,n;
	double x,y;
	
	while( scanf("%d %d %d %d %d %d",&a, &b,&c,&d,&e,&f) != EOF){
		
	y=(c*d-f*a)/(b*d-e*a);
	x=(c*e-f*b)/(a*e-b*d);
	
	printf("%.3f %.3f\n",x,y);
	}
		
return 0;
}