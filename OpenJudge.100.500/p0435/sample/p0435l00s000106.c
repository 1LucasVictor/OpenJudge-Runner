#include <stdio.h>
#include <math.h>

int main()
{
	long long n,ans=0,i;
	long long k;
	scanf("%lld%lld",&n,&k);
	long long x[n],y[n];
	for(i=0;i<n;i++)
		scanf("%lld %lld",&x[i],&y[i]);
	for(i=0;i<n;i++){
		if(((x[i]*x[i])+(y[i]*y[i]))<=k*k)
			ans++;
	}
	printf("%lld\n",ans);
}