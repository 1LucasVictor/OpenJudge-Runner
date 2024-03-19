#include<stdio.h>
int G[100][100] = { 0 };
int main(){
	int n, u, k, v;
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &u);
		scanf("%d", &k);
		for (j = 0; j < k; j++) {
			scanf("%d", &v);
			G[u - 1][v - 1] = 1;
		}
	}
	// ??????
	printf("%d", G[0][0]);
	for (j = 1; j < n; j++) {
		printf(" %d", G[0][j]);
	}
	for (i = 1; i < n; i++) {
		printf("\n%d", G[i][0]);
		for (j = 1; j < n; j++) {
			printf(" %d", G[i][j]);
		}
	}
	return 0;
}