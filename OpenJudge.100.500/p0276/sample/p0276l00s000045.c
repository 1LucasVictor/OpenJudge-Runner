#include <stdio.h>

int main(void){
	int n, u, k, v;
	int Adj[100][100] = { 0 };
	int i, j;

	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d %d", &u, &k);
		for (j = 0; j < k; j++){
			scanf("%d", &v);
			Adj[u - 1][v - 1] = 1;
		}
	}

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (j != n - 1)
				printf("%d ", Adj[i][j]);
			else
				printf("%d\n", Adj[i][j]);
		}
	}

	return 0;
}