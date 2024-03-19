#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define		NKMAX		100000
#define		WMAX		10000

typedef		long long	llong;

int		N;
int		K;
llong	W[WMAX];

llong solve();
int check(llong p);

int main()
{
	int i;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; ++i)
		scanf("%lld", &(W[i]));
	llong ans = solve();
	printf("%lld\n", ans);

	return 0;
}

llong solve()
{
	llong l = 0;
	llong r = NKMAX * WMAX;
	llong m;

	while (r - l > 1)
	{
		m = (r + l) / 2;
		int v = check(m);
		if (v >= N)		r = m;
		else			l = m;
	}

	return r;
}

int check(llong p)
{
	int	i = 0;
	int j;

	for (j = 0; j < K; ++j)
	{
		llong sum = 0;

		while (sum + W[i] <= p)
		{
			sum += W[i];
			++i;
			if (i == N)
				return N;
		}
	}

	return i;
}