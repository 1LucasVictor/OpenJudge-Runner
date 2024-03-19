#include<stdio.h>
#include<math.h>
const double eps = 1e-6;
int main()
{
	double x,y;
	double a,b,c,d,e,f;
	while (scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		double m,n,l;
		m=d/a;
		n=f-c*m;
		l=e-b*m;
		y=n/l;
		double z;
		z=c-b*y;
		x=z/a;
		if (fabs(x) < eps) x = fabs(x);
		if (fabs(y) < eps) y = fabs(y);
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
} 