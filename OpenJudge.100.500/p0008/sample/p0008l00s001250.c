#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	int cnt;
	
	while (scanf("%d", &n) != EOF){
		cnt = 0;
		for (i = 2; i <= n; i++){
			for (j = 2; j < i; j++){
				if (i % j == 0){
					cnt++;
					break;
				}
			}
		}
		printf("%d\n", n - 1 - cnt);
	}
	
	return (0);
}