#include <stdio.h>
#include <math.h>

int isprime(int);
int main(void)
{
	int n, x[10000], i, a = 0;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	for (i = 0; i < n; i++) {
		if(isprime(x[i]) == 1)
			a++;
	}
	printf("%d", a);
	return 0;
}

int isprime(int x)
{
	int i;
	if (x == 2)
		return 1;
	if (x < 2 || x % 2 == 0)
		return 0;
	for (i = 3; i < (int)sqrt((double)x); i += 2) {
		if (x % 3 == 0)
			return 0;
	}
	return 1;
}