#include <stdio.h>
#include <string.h>

int a[1000000];
long long memo[1000000];

int partial_sum(int array[], int now, int k, int n);
int judge(int x, int y);

int main(void)
{
	int n;
	int i, j, k;
	long long ans;
	
	while (scanf("%d", &n), n){
		ans = -100000000000;
		memset(a, 0, sizeof(a));
		memset(memo, 0, sizeof(memo));
		
		for (i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		
		for (i = 0; i < n; i++){
			for (j = n, k = 0; j >= 1; j--, k++){
				ans = judge(ans, partial_sum(a, i, k, n));
			}
		}
		
		printf("%lld\n", ans);
	}
	
	return (0);
}

int partial_sum(int array[], int now, int k, int n)
{
	
	if (now + k < n){
		memo[now] += array[now + k];
	}
	
	return (memo[now]);
}

int judge(int x, int y)
{
	if (x >= y){
		return (x);
	}
	else {
		return (y);
	}
}