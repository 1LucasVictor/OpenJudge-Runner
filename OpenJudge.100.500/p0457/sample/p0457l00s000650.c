#include<stdio.h>

int max1(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
int main(void)
{
	int i,j, ans = 0;
	long long int te=0,sum = 0;
	long long int  n, k, m;
	int A[200001], B[200001];

	scanf("%lld %lld %lld", &n, &m, &k);
	A[0] = 0;B[0] = 0;
	for (i = 1;i <= n;i++)
		scanf("%d", &A[i]);
	for (i = 1;i <= m;i++)
		scanf("%d", &B[i]);

	for (i = 0;i <=n;i++) {
		te += A[i];
		sum = te;
		for (j = 0;j <= m;j++) {
			sum += B[j];
			if (sum <= k)
				ans = max1(ans, i + j);
			else
				break;
		}
	}

	printf("%d", ans);

	return 0;
}