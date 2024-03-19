#include <stdio.h>

int main() {
	
	int i, j, s, t, n, min, sum = 0;
	int x[1000], y[1000], z[1000][1000];
	
	scanf("%d", &n);
	
	for( i = 0; i < n; i++) {
		x[i] = 0;
		y[i] = 1000;
		for( j = 0; j < n; j++) {
			scanf("%d", &z[i][j]);
		}
	}
	
	y[0] = 0;
	
	for( i = 1; i < n; i++) {
		min = 1000;
		for( j = 0; j < n; j++) {
			if( y[j] < min && x[j] == 0) {
				min = y[j];
				s = j;
			}
		}
		
		x[s] = 1;
		
		for( t = 0; t < n; t++) {
			if(z[s][t] < y[t] && z[s][t] != -1 && x[t] == 0) {
				y[t] = z[s][t];
			}
		}
	}
	
	for( i = 0; i < n; i++) {
		sum += y[i];
	}
	
	printf("%d\n", sum);
	
	return 0;
}