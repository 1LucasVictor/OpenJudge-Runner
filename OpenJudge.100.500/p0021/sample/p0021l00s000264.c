#include <stdio.h>
#include <string.h>

int a[1000000];

int partial_sum(int array[], int now, int len, int n);
int judge(int x, int y);

int main(void)
{
	int n, now;
	int i, j;
	int ans;
	
	while (scanf("%d", &n), n){
		memset(a, n, sizeof(a));
		ans = 0;
		
		for (i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		
		for (i = 1; i <= n; i++){
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

int partial_sum(int array[], int now, int len, int n)
{
	int sum = 0;
	int i;
	
	for (i = 0; i < len; i++){
		if (0 <= now && now < n){
			sum += array[now];
			now++;
		}
	}
	
	return (sum);
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