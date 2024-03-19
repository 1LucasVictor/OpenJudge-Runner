#include <stdio.h>

int main(void)
{
	int i, n, d;
	int ans = 1;
	
	scanf("%d %d",&d, &n);
	for(i = 0; i < d; i++){
		ans *= 100;
	}
	ans *= n;
	printf("%d\n", ans);
	return 0;
}