#include<stdio.h>
#define ll long long
void solve(int ,int ,int );
int main()
{
	//atCoder contest
	ll int n, m, k;
	//n for pile of books on desk A
	//m for pile of books on desk B
	//k for total time limit
	scanf("%lld %lld %lld", &n, &m, &k);
	solve(n, m, k);
	return 0;
}
void solve(int n, int m, int k)
{
	ll int count = 0, a[100], b[100], aptr = 0, bptr = 0, t;
	for (int i = 0; i < n; i++)
		scanf("%lld", &a[i]);

	for (int j = 0; j < m; j++)
		scanf("%lld", &b[j]);

	while (t = 1)
	{
		if (a[aptr] < b[bptr])
		{
			k -= a[aptr];
			if (k <= 0)
				break;
			aptr++;
			count++;
		}
		else
		{
			k -= b[bptr];
			if (k <= 0)
				break;
			bptr++;
			count++;
		}
		if (k <= 0) 
		{
			break;
		}
		if (aptr >= n)
		{
			for (; bptr < m; bptr++)
			{
				k -= bptr;
				count++;
				if (k <= 0)
					break;
			}
			break;
		}
		else if (bptr >= m)
		{
			for (; aptr < n; aptr++)
			{
				k -= aptr;
				count++;
				if (k <= 0)
					break;
			}
			break;
		}
	}
	printf("%lld", count);
}