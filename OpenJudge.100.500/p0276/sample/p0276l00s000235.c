#include<stdio.h>

int v[100][100];


int main() {
	int n,u,k,i,j;
	int id;
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){

			v[i][j]=0;

		}
		
	}
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &u, &k);
		for (j = 0; j < k; j++) {
			scanf("%d", &id);
			v[u][id] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d", v[i][j]);
			if (j != n)printf(" ");
		}
		printf("\n");
	}

	return 0;
}
