#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//using ll = long long int;
#define PI 3.141592653589793
//141167095653376;

int main(void) {

	int n, m;
	long long int k;
	long long int aa , bb;
	long long int a[20010], b[20010];
	int i;
	int x;
	int sum = 0;
	int cnt = 0;
	int max = 0;
	int j;
	a[0] = 0;
	b[0] = 0;
	scanf("%d%d%lld", &n, &m, &k);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &aa);
		a[i] = a[i - 1] + aa;
	}
	for (i = 1; i <= m; i++)
	{
		scanf("%d", &bb);
		b[i] = b[i - 1] + bb;
	}
	j = m;
	for (i = 0; i <= n; i++)
	{
		if (a[i] > k)
			break;
		while (b[j] > k - a[i])
			j -= 1;
		//printf("%lld>%d - %lld\n", b[j], k, a[i]);
		if (max < i + j)
		{
			max = i + j;
			//printf("%d %d\n", i, j);
		}
	}
	printf("%d\n", max);
	return 0;
}
