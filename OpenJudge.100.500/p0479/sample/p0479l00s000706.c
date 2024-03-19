#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>


int ASC(const void *a, const void *b) {
	return *(int *)b - *(int *)a;//降順
}
int GCD(int a, int b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}
long long a[200000];
int main(void)
{
	long long n, syain;
	scanf("%lld",&n);
	for (long long i = 0; i < n; i++) {
		a[i] == 0;
	}
	for (long long i = 2; i <= n; i++) {
		scanf("%lld", &syain);
		a[syain]++;
	}
	for (long long i = 1; i <= n; i++) {
		printf("%lld\n",a[i]);
	}
	return 0;
}