#include<stdio.h>
main()
{
	double a,b,c,d,e,f,x,y;
	while(~scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f))
	{
		if(a==0){y=c/b;x=(f-e*c/b)/d;}
		if(b==0){x=c/a;y=(f-c*d/a)/e;}
		if(d==0){y=f/e;x=(e-f*b/e)/a;}
		if(e==0){x=f/d;y=(c-f*a/d)/b;}
		if(a*b*d*e!=0)
		{
			y=(c*d/a-f)/(b*d/a-e);
			x=(c*d/a-b*d*y/a)/d;
		}
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
}