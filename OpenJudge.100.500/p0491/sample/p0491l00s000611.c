#include<stdio.h>
#include<limits.h>
#include <math.h>
int main()
{
	long long int n,k;
	scanf("%lld %lld",&n,&k);
	int ans=n%k;
	if(k-ans<ans) ans=k-ans;
	printf("%d\n",ans );
}