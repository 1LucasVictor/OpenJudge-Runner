#include<stdio.h>

int main(void)
{
	int  sum=0;
	 long long int n = 0,p,D,N,a,b;

	scanf("%lld %lld", &N,&D);

	n = D * D;
//	printf("%lld\n", n);

	for (int i = 0;i < N;i++) {
		scanf("%lld %lld",&a,&b);
		p = a * a + b * b;

		if (n >= p)sum++;
	}

	printf("%d",sum);

	return 0;
}