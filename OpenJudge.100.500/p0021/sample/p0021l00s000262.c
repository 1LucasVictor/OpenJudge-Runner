#include <stdio.h>
#include <string.h>

int a[1000000];
int memo[1000000];

int partial_sum(int array[], int now, int i, int n);
int judge(int x, int y);

int main(void)
{
	int n, now;
	int i, j;
	int ans;
	
	while (scanf("%d", &n), n){
		memset(a, 0, sizeof(a));
		memset(memo, 0, sizeof(memo));
		
		ans = 0;
		
		for (i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		
		for (i = 0; i < n; i++){
			now = 0;
			for (j = n; j >= 1; j--){
				ans = judge(ans, partial_sum(a, now, i, n));
				now++;
			}
		}
		
		printf("%d\n", ans);
	}
	
	return (0);
}

int partial_sum(int array[], int now, int i, int n)
{
	
	if (0 <= now + i && now + i < n){
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