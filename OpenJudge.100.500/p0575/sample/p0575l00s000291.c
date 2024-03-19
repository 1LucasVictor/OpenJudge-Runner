#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>

#define max(a,b) ((a)>(b))?(a):(b)
#define min(a,b) ((a)>(b))?(b):(a)

typedef long long ll;
typedef unsigned long long ull;

int main(void)
{
	int* a;
	int n, k;
	register ll cnt = 0, sum = 0;
	scanf("%d%d", &n, &k);

	a = malloc(n * sizeof(int));
	for (size_t i = 0; i < n; i++)
	{
		scanf("%d", a + i);
	}

	for (register size_t i = 0; i < n - 1; i++)
	{
		sum = 0;
		for (register size_t j = i; j < n; j++)
		{
			sum += a[j];
			if (sum >= k)
			{
				cnt += n - j;
				break;
			}
		}
	}

	printf("%lld", cnt);
}