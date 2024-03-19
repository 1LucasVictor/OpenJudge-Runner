#include <stdio.h>

int main(){
	int n, m, l, i, j ,k;
	long line_a[101][101], line_b[101][101], line_c[101][101];
	scanf("%d %d %d", &n, &m, &l);
	// INPUT
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			scanf("%ld", &line_a[i][j]);
		}
	}
	for(i = 0;i < m;i++){
		for(j = 0;j < l;j++){
			scanf("%ld", &line_b[i][j]);
		}
	}
	// CALC AND OUTPUT
	for(i = 0;i < n;i++){
		for(j = 0;j < l;j++){
		    if(j != 0) printf(" ");
			for(k = 0;k < m;k++){
				if(k == 0) line_c[i][j] = 0;
				line_c[i][j] += line_a[i][k] * line_b[k][j];
			}
			printf("%ld", line_c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

