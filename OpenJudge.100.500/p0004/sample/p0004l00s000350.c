#include <stdio.h>

int gcd(long long int a, long long int b);
int max(long long int a, long long int b);

int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) printf("%d %d\n", gcd(a, b), a * (b / gcd(a, b)));
	return 0;
}

int gcd(long long int a, long long int b)
{
	while(a * b) {
		if(a < b) b %= a;
		else a %= b;
	}
	return max(a, b);
}

int max(long long int a, long long int b)
{
	if(a >= b) return a;
	else return b;
}