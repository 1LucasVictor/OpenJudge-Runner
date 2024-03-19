#include<stdio.h>
int main()
{
	int a,b,c,d,f,e;
	double x,y;
	while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		x=(double) (b*f-c*e)/(d*b-a*e);
		y=(double) (d*c-a*f)/(d*b-a*e);
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
}