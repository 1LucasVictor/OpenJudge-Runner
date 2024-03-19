#include<stdio.h>

int main(){
	int i,j,k,l,a,b,n,m,N[100][100],M[100],A[100]={0};
	scanf("%d %d",&n,&m);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d",&N[i][j]);
		}
	}
	
	for(k = 0; k < m; k++){
		scanf("%d",&M[k]);
	}
	
	for(l = 0; l < n; l++){
		for(a = 0; a < m; a++){
			A[l] += N[l][a] * M[a];
		}
	}
	
	for(b = 0; b < n; b++){
		printf("%d\n",A[b]);
	}
	
	return 0;
}
