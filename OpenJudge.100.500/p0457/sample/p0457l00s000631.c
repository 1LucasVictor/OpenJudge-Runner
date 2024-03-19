#include<stdio.h>
#include <limits.h>

int main(void)
{
	int i,ans=0;
	long long int sum = 0;
	long int  n, k,m;
	int A[200000], B[200000];
	scanf("%ld %ld %ld",&n,&m,&k);
	for (i = 0;i < n;i++)
		scanf("%d" ,&A[i]);
	for (i = n;i < 200000;i++)
		A[i] = INT_MAX-1000;
	for (i = 0;i < m;i++)
		scanf("%d" ,&B[i]);
	for (i = m;i < 200000;i++)
		B[i] = INT_MAX-1000;
	int s=0, t=0;
	while (sum <= k) {
		if (A[s] < B[t]) {
			sum += A[s];
			s++;
			
		}
		else
		{
			sum += B[t];
			t++;
		
		}
		ans++;
	}
	printf("%d", ans - 1);

	return 0;
}