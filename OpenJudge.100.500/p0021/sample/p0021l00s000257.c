#include <stdio.h>
#include <string.h>

int a[1000000];
int memo[1000000];

int partial_sum(int array[], int now, int i, int n);
int judge(int x, int y);

int main(void)
{
	int n, now;
	int i, j, k;
	int ans;
	
	while (scanf("%d", &n), n){
		memset(a, 0, sizeof(a));
		memset(memo, 0, sizeof(memo));
		
		ans = 0;
		
		for (i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		
		now = 0;
		for (i = 0; i < n; i++){
			for (j = n - 1, k = 0; j >= 0; j--, k++){
				ans = judge(ans, partial_sum(a, now, k, n));
			}
			now++;
		}
		
		printf("%d\n", ans);
	}
	
	return (0);
}

int partial_sum(int array[], int now, int i, int n)
{
	
	if (now + i < n){
		memo[now] += array[now + i];
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