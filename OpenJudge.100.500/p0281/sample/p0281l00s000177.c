#include <stdio.h>

int main() {
	
	int n, i, j, s, t, u, min;
	int x[100], y[100], z[100][100];
	
	scanf("%d", &n);
	
	for( i = 0; i < n; i++) {
		x[i] = 0;
		y[i] = 1000000;
		for( j = 0; j < n; j++) {
			z[i][j] = -1;
		}
	}
	
	for( i = 0; i < n; i++) {
		scanf("%d %d", &s, &t);
		for( j = 0; j < t; j++) {
			scanf("%d", &u);
			scanf("%d", &z[s][u]);
		}
	}
	y[0] = 0;
	
	while(1) {
		min = 1000000;
		for( i = 0; i < n; i++) {
			if( x[i] != 1 && y[i] < min) {
				min = y[i];
				s = i;
			}
		}
		
		if( min == 1000000) {
			break;
		}
		
		for( i = 0; i < n; i++) {
			if(z[s][i] != -1 && x[i] != 1 && y[s] + z[s][i] < y[i]) {
				y[i] = y[s] + z[s][i];
			}
		}
		x[s] = 1;
	}
	
	for( i = 0; i < n; i++) {
		printf("%d %d\n", i, y[i]);
	}
	
	return 0; 
}
		