#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,i;
	double anx,any;
	while(1)
	{
		if (scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)==EOF) break;
		i=a;
		a*=d;
		b*=d;
		c*=d;
		d*=i;
		e*=i;
		f*=i;
		b-=e;
		c-=f;
		anx=(double)(c/b);
		any=(double)((f-e*(int)anx)/d);
		printf("%.3lf %.3lf\n",any,anx);
	}
	return 0;
}