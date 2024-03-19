#include <stdio.h>

main(void)
{
	int n,a,i;

	long long int max = -1000000;
	long long int min = 1000000;
	long long int sum =0;
	a=0;
	scanf("%d",&n);
	for(a = 1;a <= n;a++){
		scanf("%d",&i);
		if (i < min) min = i;
		if (i > max) max = i;
		sum +=i;
	}
	printf("%lld %lld %lld\n",min,max,sum);
	return 0;
}