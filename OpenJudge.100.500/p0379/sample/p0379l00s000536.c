#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	int n, m;
	int A[100][100];
	int b[100];
	int c[100];
	int i, j;
	
	scanf("%d %d", &n, &m);
	
	for(i=0; i< n; i++){
		for(j=0; j<m; j++){
			scanf("%d", &A[i][j]);
		}
	}
	for(j=0; j<m; j++){
		scanf("%d", &b[j]);
	}	
	
	for(i=0; i< n; i++){
		for(j=0; j<m; j++){
			c[i] += A[i][j] * b[j];
		}
	}

	for(i=0; i<n; i++){
		printf("%d\n", c[i]);
	}
	
	return 0;

}
