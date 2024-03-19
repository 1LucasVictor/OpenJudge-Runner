/*
	AIZU ONLINE A0004
        Simultaneous Equation
*/
#include <stdio.h>
#include <float.h>


main()
{	float a,b,c,d,e,f,x,y;
	float det;
	
	while(EOF != scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f))
	{	det = a*e - b*d;
		x   = (e*c - b*f)/det;
		y   = (-d*c+ a*f)/det;
		printf("%.3f %.3f\n",x,y);
	}
	return(0);
}