#include<stdio.h>

int adj[101][101];

int main(){
	int i,j,n,u,k,v;	scanf("%d",&n);

	for(i=0;i<n;i++){

		scanf("%d%d",&u,&k);
		for(j=0;j<k;j++){
			scanf("%d",&v);
			adj[u][v]=1;
		}
	}

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j>1)printf(" ");
			printf("%d",adj[i][j]);
		}
		printf("\n");
	}


	return 0;
}

