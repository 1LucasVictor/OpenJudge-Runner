#include<stdio.h>

int NODE[100][100] = {0};


int main() {
	int n,u, k;
	int id;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &u, &k);
		for (int j = 0; j < k; j++) {
			scanf("%d", &id);
			NODE[u][id] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d", NODE[i][j]);
			if (j != n)printf(" ");
		}
		printf("\n");
	}

	return 0;
}
