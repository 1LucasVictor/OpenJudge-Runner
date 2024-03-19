#include <stdio.h>

int CheckPattern(int n,int x)
{
	int i, j, k, count = 0;

	for (i = 1; i <= n; i++) {
		for (j = i + 1; j <= n; j++) {
			for (k = j + 1; k <= n; k++) {
				if ((i + j + k) == x) {
					count++;
				}
			}
		}
	}

	return count;
}

int main(void)
{
	int n, x, ans;

	while(1){
		scanf("%d %d", &n, &x);
		if (n == 0 && x == 0) {
			break;
		}
		ans=CheckPattern(n, x);
		printf("%d\n", ans);
	}


	return 0;
	
}