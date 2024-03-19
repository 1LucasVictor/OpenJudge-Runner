#include<stdio.h>
int main(void){
	int i,j,n,u,k,tmp,adj[100][100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&u,&k);
		for(j=0;j<k;j++){
			scanf("%d",&tmp);
			adj[u-1][tmp-1]=1;
		}
	}
	for(i=0;i<n;i++){
		printf("%d",adj[i][0]);
		for(j=1;j<n;j++){
			printf(" %d",adj[i][j]);
		}
		printf("\n");
	}
	return 0;
}		