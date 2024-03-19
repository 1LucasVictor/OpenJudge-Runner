#include<stdio.h>
#include<math.h>
typedef long long ll;
int main()
{
	ll a,k;
	scanf("%lld %lld",&a,&k);
	while(abs(a-k) < a)
	{
		a = abs(a-k);
	}
	printf("%lld",a);
	return 0;
}