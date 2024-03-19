#include <stdio.h>

int main(void){

	int n, u, i, j, k, v;
	int a[101][101] = {0};
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d%d", &u, &k);
		for(j=0; j<k; j++){
			scanf("%d", &v);
			a[u][v] = 1;
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d%c", a[i+1][j+1], (j==n-1?'\n':' '));
		}
	}
	
	return 0;

}