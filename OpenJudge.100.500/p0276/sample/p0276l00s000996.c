#include <stdio.h>

int main() {
	
	int m[100][100];
	int n, s, t, u, i, j;
	
	scanf("%d", &n);
	
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < n; j++) {
			m[i][j] = 0;
		}
	}
	
	for ( i = 0; i < n; i++) {
		scanf("%d", &s);
		scanf("%d", &t);
		for ( j = 0; j < t; j++) {
			scanf("%d", &u);
			m[s - 1][u - 1] = 1;
		}
	}
	
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < n; j++) {
			printf("%d", m[i][j]);
			if ( j < (n - 1)) {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}