/*
 *	Argorithms and Data Structures
 *	Lectuire 11 
 *	Graph
 */

#include <stdio.h>

#define MAX_N 100

int main(void) {
	int map[MAX_N][MAX_N];
	int i, j, n, u, k, v;

	scanf("%d", &n);

	for( i=0; i<n; i++) {
		for( j=0; j<n; j++) {
			map[i][j] = 0;
		}
	}

	for( i=0; i<n; i++) {
		scanf("%d %d ", &u, &k);
		for( j=0; j<k; j++) {
			scanf("%d", &v);
			map[u-1][v-1] = 1;
		}
	}

	for( i=0; i<n; i++) {
		for( j=0; j<n; j++) {
			if(j) printf(" ");
			printf("%d", map[i][j]);
		}
		printf("\n");
	}

	return 0;
}