/*
	AIZU ONLINE A0004
        Simultaneous Equation
*/
#include <stdio.h>
#include <float.h>
#define EPS 1e-9

main()
{	double a,b,c,d,e,f,x,y;
	double det;
	
	while(EOF != scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f))
	{	det = a*e - b*d;
		x   = (e*c - b*f)/det;
		y   = (-d*c+ a*f)/det;
		printf("%.3lf %.3lf\n",x+EPS,y+EPS);
	}
	return(0);
}