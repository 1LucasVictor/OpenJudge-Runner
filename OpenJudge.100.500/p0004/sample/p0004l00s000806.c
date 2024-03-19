#include<stdio.h>
double gcd(double a,double b)
{
	double i,j,p;
	if(a>b)
		p=b;
	else
		p=a;
	for(i=p;i>=2;i--)
	{
		if((int)a%(int)i==0&&(int)b%(int)i==0)
			break;
	}
	return i;
}
double min(double a,double b)
{
	double i,j,p;
	if(a>b)
		p=b;
	else
		p=a;
	for(i=2;i<=p;i++)
	{
		if((int)a%(int)i==0&&(int)b%(int)i==0)
		{i++;
			break;
		}
	}
	if(i>p)
		return 1;
	else
	return i-1;
}
double lcm(double a,double b)
{

	return a*b/gcd(a,b);
}
int main()
{
	double a,b,c,d;
	while(scanf("%lf%lf",&a,&b)!=EOF)
	{
		printf("%.0lf %.0lf\n",gcd(a,b),lcm(a,b));

	}


	return 0;
}
