#include<stdio.h>

int IsPrime(int n) {
	int i;

	if (n < 2) {
		return 0;
	}
	else if (n == 2) {
		return 1;
	}

	if (n % 2 == 0)
		return 0;

	for (i = 3; i <= n / i; i += 2)
		if (n % i == 0)
			return 0;
	return 1;
}

int main(void)
{
	int n[30];
	int i,j,a=0;
	int count = 0;

	while(scanf("%d",&n[a]) != EOF && a < 30)
		if ((1 <= n[a]) && (n[a] <= 999999)) {
			a++;
		}

	for (i = 0; i < a; i++) {
		count = 0;
		for (j = 0; j < n[i]; j++) {
			if (IsPrime(n[i] - j)) {
				count++;
			}
		}
		printf("%d\n",count);
	}
	

	return 0;
}