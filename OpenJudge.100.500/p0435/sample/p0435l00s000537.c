#include<stdio.h>

int main() {
	long long n, d, x, y;
	long long count = 0;
	
	scanf("%lld %lld", &n, &d);
	
	for (long long i = 0; i < n; i++)
	{
		scanf("%lld %lld", &x, &y);
		if (x * x + y * y <= d * d)
		{
			count++;
		}
	}
	printf("%lld", count);
	
	
	
	return 0;
}