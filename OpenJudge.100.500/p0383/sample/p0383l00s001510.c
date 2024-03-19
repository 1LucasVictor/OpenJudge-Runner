#include <stdio.h>

int main(void) {
	int m,n,l, i, c, k, a[100][100], b[100][100];//, c[100][100];
	int cc[100][100];
	
	scanf("%d%d%d", &n, &m, &l);
	for(i = 0; n > i; i++){
	for(c = 0; m > c; c++){
		scanf("%d", &a[i][c]);
	}	
	}
	for(i = 0; m > i; i++){
	for(c = 0; l > c; c++){
		scanf("%d", &b[i][c]);
	}	
	}
	
	
	for(i = 0; n > i; i++){
	for(c = 0; l > c; c++){
		int buf = 0;
	for(k = 0; m > k; k++){
		buf += a[i][k] * b[k][c];
	}	
	printf("%d", buf);
	if(c != l-1) printf(" ");
	}
	printf("\n");
	}
	return 0;
}