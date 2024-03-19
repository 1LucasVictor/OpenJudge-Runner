#include <stdio.h>
#define MAX 100

int main(){

	int n,P[MAX][MAX],Num,Count,X,i,j;

	scanf("%d",&n);
	for( i = 0; i < n; i++){
		for( j = 0; j < MAX; j++){
			P[i][j] = 0;
		}
	}

	for( i = 0; i < n; i++){
		scanf("%d",&Num);
		scanf("%d",&Count);
			for( j = 0; j < Count; j++){
				scanf("%d",&X);
				P[i][X-1] = 1;
		}
	}

	printf("\n");

	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			if(i == n-1 && j == n-1) printf("%d\n",P[i][j]);
			else printf("%d ",P[i][j]);
		}
		printf("\n");
	}

	return 0;
}