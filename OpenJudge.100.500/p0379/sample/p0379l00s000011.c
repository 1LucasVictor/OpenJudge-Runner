// 1_6_D
#include<stdio.h>

int main(void)
{
	int n, m, i, j;
	int matrix[100][100];
	int vector[100];
	int ans = 0;

	scanf("%d %d", &n, &m);

	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &matrix[i][j]);
		}
	}

	for(j = 0; j < m; j++){
		scanf("%d", &vector[j]);
	}

	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			ans += matrix[i][j] * vector[j];
		}
		printf("%d\n", ans);
		ans = 0;
	}

	return 0;
}