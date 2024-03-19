#include <stdio.h>

int main(void)
{
	int dp[4][64] = {0};
	int n;
	int i, j, k;

	for (i = 0; i < 10; i++) dp[0][i] = 1;
	for (i = 1; i < 4; i++){
		for (j = 0; j <= 36; j++){
			if (dp[i - 1][j]){
				for (k = 0; k <= 9; k++){
					dp[i][j + k] += dp[i - 1][j];
				}
			}
		}
	}

	while (~scanf("%d", &n)){
		printf("%d\n", dp[3][n]);
	}

	return (0);
}