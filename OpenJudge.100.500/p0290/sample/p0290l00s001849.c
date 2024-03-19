#include <stdio.h>
#include <math.h>

int
is_prime(int x)
{
	int i, lim;

	if (x <= 1)
		return 0;

	if (x == 2)
		return 1;

	if (!(x & 1))
		return 0;

	lim = (int)sqrt(x);
	for (i = 3; i <= lim; i += 2)
		if (!(x % i))
			return 0;

	return 1;
}

int
main(void)
{
	int i, n, x, ps = 0;

	scanf("%d", &n);

	for (i = 0;i < n; i++) {
		scanf("%d", &x);
		if (is_prime(x))
			ps++;
	}

	printf("%d\n", ps);

	return 0;
}

