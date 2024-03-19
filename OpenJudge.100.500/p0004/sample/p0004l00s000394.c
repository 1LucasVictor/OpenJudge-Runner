#include<stdio.h>
int main(void) {
	long long int a, b, minans = 0, maxans;
	while (scanf("%lld %lld", &a, &b) != EOF)
	{
		for (long long int i = 2; i < b / 2; i++)
		{
			if (a%i == 0 && b%i == 0)maxans = i;
		}
		for (long long int i = b; i <= a*b; i++)
		{
			if (i%a == 0 && i%b == 0) {
				minans = i;
				break;
			}
		}
		printf("%lld %lld\n", maxans, minans);
	}
	return 0;
}