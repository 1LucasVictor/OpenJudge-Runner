#include<stdio.h>
#include<math.h>
main()
{
	long long int n,i,d;
	int t=0;
	scanf("%lld%lld",&n,&d);
	for(i=1;i<=n;i++)
	{
		long long int a,b;
		scanf("%lld%lld",&a,&b);
		double c=sqrt(a*a + b*b);
		if(c<=d)
		{
			t=t+1;
		}
	}
	printf("%d\n",t);
}
