#include <stdio.h>
#include <math.h>

#define TRUE	1
#define FALSE	0

int isPrime(int n)
{
	int i, lim, flag;

	if (n == 2) return TRUE;
	if (n < 2)  return FALSE;
	if (n % 2 == 0) return FALSE;
	lim = sqrt(n);
	flag = 0;
	for (i = 3; i < lim; i += 2) {
		if (n % i == 0) {
			flag = 1;
			break;
		}
	}
	if (flag ==1)
		return FALSE;
	else
		return TRUE;
}

int main(void)
{
	int n, num, i, c = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (isPrime(num)) c++;
	}
	printf("%d\n", c);

	return 0;
}

