#include<stdio.h>
#include<math.h>
main()
{
	int n,i,d,t=0,a,b;
	double c;
	scanf("%d",&n);
	scanf("%d",&d);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		c=sqrt(a*a + b*b);
		if(c<=d)
		{
			t=t+1;
		}
	}
	printf("%d",t);
}
