#include<stdio.h>
#include<math.h>

int main()
{
	double x[4],y[4],a[2];
	int i,j,n;
	char c;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%lf",x+j);
			scanf("%c",&c);
			scanf("%lf",y+j);
			if(j<3)
				scanf("%c",&c);
		}
		
		for(j=0;j<2;j++)
		{
			a[j]=(y[2*j]-y[2*j+1])/(x[2*j]-x[2*j+1]);
		}
		if(a[0]-a[1]<0.05&& a[0]-a[1]>-0.05)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}