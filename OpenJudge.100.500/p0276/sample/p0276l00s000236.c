#include<stdio.h>
#define MAX 100

int main(void){
	int adj[MAX+1][MAX+1];
	int i,j,n,u,k,v;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)adj[i][j]=0;
	}
	for(i=0;i<n;i++){
		scanf("%d %d",&u,&k);
		for(j=0;j<k;j++){
			scanf("%d",&v);
			adj[u][v]=1;
		}
	}
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d",adj[i][j]);
			if(j!=n)printf(" ");
		}
		printf("\n");
	}
	return 0;
}

