#include<stdio.h>

int main(void)
{
	int i, j, k, l;
	int n;
	int cou;
	int ans[10000];
	
	for (i = 0; i < 10000; i++) {
		ans[i] = 0;
	}
	
	cou = 0;
	
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i <= 9; i++) {
			for (j = 0; j <= 9; j++) {
				for (k = 0; k <= 9; k++) {
					for ( l = 0; l <= 9; l++) {
						if (i + j + k + l == n) {
							ans[cou]++;
						}
					}
				}
			}
		}
		
		cou++;
	}
	
	for (i = 0; i < cou; i++) {
		printf("%d\n", ans[i]);
	}
	
	return (0);
}