#include<stdio.h>
int main()
{
	double x[4],y[4],m1,m2;
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
			scanf("%lf%lf",&x[j],&y[j]);
		m1=(y[1]-y[0])/(x[1]-x[0]);
		m2=(y[3]-y[2])/(x[3]-x[2]);
		printf("%s\n",m1==m2?"YES":"NO");
	}
	return 0;
}
