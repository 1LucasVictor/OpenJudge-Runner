#include  <stdio.h>
int main (void)
{
	double a,b,c,d,e,f,x[2] = {0},y[2] = {0};	
	int i;
	
	for(i = 0;i < 2;i++){
		scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
	
		x[i] = (e * c - b * f) / (e * a - b * d);
		y[i] = (d * c - a * f) / (d * b - a * e);
	}

	printf("%.3f %.3f\n%.3f %.3f",x[0],y[0],x[1],y[1]);
	return(0);
}