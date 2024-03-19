#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 200001
const int MOD = 1000000007;

int main(void)
{
	ll a[N] = { 0 };
	int n = 0;
	int i = 0, j = 0, num = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
		for (j = 0; j < i; j++)
		{
			if (a[j] == a[i])
			{
				num = 1;
				break;
			}
		}
	}
	if (num)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	return 0;
}
