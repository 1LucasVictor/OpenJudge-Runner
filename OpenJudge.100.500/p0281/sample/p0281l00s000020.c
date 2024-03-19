#include<stdio.h>
#define min(a,b) ((a)>(b))?(b):(a)
int main(void){
	int i,j,n,u,k,s,tmp,w,adj[100][100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&u,&k);
		for(j=0;j<k;j++){
			scanf("%d %d",&tmp,&w);
			adj[u][tmp]=w;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((adj[i][j]==0) && (i!=j)){
				adj[i][j]=100000000;
			}
		}
	}
	for(s=0;s<n;s++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				adj[i][j]=min(adj[i][j],adj[i][s]+adj[s][j]);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d %d\n",i,adj[0][i]);
	}
	return 0;
}